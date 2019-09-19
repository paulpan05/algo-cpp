IDIR=../
CC=g++
CCVERSION=c++11
CFLAGS=-I$(IDIR)
.DEFAULT_GOAL := test

add_numbers.o: add_numbers.cc add_numbers.hh
	$(CC) -std=$(CCVERSION) -c -o $@ $<

test.o: test.cc
	$(CC) -std=$(CCVERSION) -c -o $@ $< $(CFLAGS)

test: test.o add_numbers.o
	$(CC) -std=$(CCVERSION) -o $@ $^ $(CFLAGS)

.PHONY: clean
clean:
	rm -f add_numbers.o test.o test