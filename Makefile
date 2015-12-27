#Travis Whitaker 2015-2016

CC = $(shell which 'clang')
LN = $(shell which 'ln')
INSTALL = $(shell which 'install')

CFLAGS = -Wall -Wextra -Werror -pedantic -O2 -pipe -march=native

SOURCES = $(sort $(wildcard src/*/*))
OBJECTS = $(sort $(patsubst %.c,%.o,$(SOURCES)))

INCLUDES = include/
INCLUDE = $(addprefix -I./,$(INCLUDES))

STATICLIB = libbari.a
SHAREDLIB = libbari.so

LIBTARGET = /usr/local/lib/
INCTARGET = /usr/local/include/

TESTSRC = $(sort $(wildcard tests/*))
TESTBIN = $(sort $(basename $(TESTSRC)))

all: clean static test

.PHONY: all static install clean

clean:
	rm -rf $(OBJECTS)
	rm -rf $(STATICLIB)
	rm -rf $(SHAREDLIB)
	rm -rf $(TESTBIN)

install: all
	$(INSTALL) $(STATICLIB) $(addsuffix $(STATICLIB),$(LIBTARGET))
	$(INSTALL) $(INCLUDES) $(addsuffix $(INCLUDES),$(INCTARGET))

test: $(TESTBIN)

static: $(OBJECTS)
	ar rvs $(STATICLIB) $(OBJECTS)

$(OBJECTS): %.o: %.c
	$(CC) -c $(CFLAGS) $(INCLUDE) -fPIC -o $@ $<

$(TESTBIN): %: %.c
	$(CC) $(CFLAGS) $(INCLUDE) -o $@ $<
	./$(TESTBIN)
