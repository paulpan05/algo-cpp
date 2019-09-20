BINDIR=bin
OBJDIR=build
HEADDIR=include
SRCDIR=src
TESTDIR=test

IDIR=../
CC=g++
CCVERSION=c++11
CFLAGS=-I$(IDIR) -I$(HEADDIR)
.DEFAULT_GOAL := $(BINDIR)/test

files=add_numbers
objs=$(patsubst %, $(OBJDIR)/%.o, $(files))
sources=$(patsubst %, $(SRCDIR)/%.cc, $(files))
heads=$(patsubst %, $(HEADDIR)/%.hh, $(files))

$(objs): $(sources) $(heads)
	$(CC) -std=$(CCVERSION) -c -o $@ $<

$(OBJDIR)/test.o: $(TESTDIR)/test.cc
	$(CC) -std=$(CCVERSION) -c -o $@ $< $(CFLAGS)

$(BINDIR)/test: $(OBJDIR)/test.o $(objs)
	$(CC) -std=$(CCVERSION) -o $@ $^ $(CFLAGS)

.PHONY: clean
clean:
	rm -f build/* bin/*