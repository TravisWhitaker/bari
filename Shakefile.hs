#!/usr/bin/env runhaskell

module Main where

import Control.Monad

import Development.Shake
import Development.Shake.FilePath
import Development.Shake.Util

cflags :: [String]
cflags = [ "-Wall"
         , "-Wextra"
         , "-Werror"
         , "-pedantic"
         , "-O2"
         , "-pipe"
         , "-march=native"
         ]

main :: IO ()
main = shakeArgs (shakeOptions {shakeThreads = 0}) $ do

    want ["libbari.a", "test"]

    phony "clean" $ removeFilesAfter "." [ "//*.o"
                                         , "//*.a"
                                         , "//*.test"
                                         , "//*.m"
                                         ]

    phony "test" $ do
        ss <- getDirectoryFiles "" ["tests//*.c"]
        let ts = map (-<.> ".test") ss
        need ts
        mapM_ (\t -> unit (command [] t [])) ts

    phony "install" $ do
        hs <- getDirectoryFiles "" ["include/*.h"]
        need $ "libbari.a" : hs
        unit $ command [] "install" [ "-DC"
                                    , "libbari.a"
                                    , "/usr/local/lib" </> "libbari.a"
                                    ]
        unit $ command [] "install" $ concat [ ["-DC"]
                                             , hs
                                             , ["/usr/local/include"]
                                             ]

    "libbari.a" %> \o -> do
        ss <- getDirectoryFiles "" ["src/*/*.c"]
        let os = map (-<.> ".o") ss
        need os
        unit $ command [] "ar" $ "rvs" : "libbari.a" : os

    "tests//*.test" %> \o -> do
        let c = o -<.> ".c"
            m = o -<.> ".m"
        need ["libbari.a"]
        unit $ command [] "clang" $ concat [ cflags
                                           , [ "-I./include"
                                             , c
                                             , "libbari.a"
                                             , "-o"
                                             , o
                                             , "-MMD"
                                             , "-MF"
                                             , m
                                             ]
                                           ]
        needMakefileDependencies m

    "src//*.o" %> \o -> do
        let c = o -<.> ".c"
            m = o -<.> ".m"
        unit $ command [] "clang" $ concat [ ["-c"]
                                           , cflags
                                           , [ "-fPIC"
                                             , "-I./include"
                                             , c
                                             , "-o"
                                             , o
                                             , "-MMD"
                                             , "-MF"
                                             , m
                                             ]
                                           ]
        needMakefileDependencies m
