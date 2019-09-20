IDIR=../
CC=g++
CCVERSION=c++11
CFLAGS=-I$(IDIR)
.DEFAULT_GOAL := test

files=add_numbers
objs=$(patsubst %, %.o, $(files))
sources=$(patsubst %, %.cc, $(files))
heads=$(patsubst %, %.hh, $(files))

$(objs): $(sources) $(heads)
	$(CC) -std=$(CCVERSION) -c -o $@ $<

test.o: test.cc
	$(CC) -std=$(CCVERSION) -c -o $@ $< $(CFLAGS)

test: test.o $(objs)
	$(CC) -std=$(CCVERSION) -o $@ $^ $(CFLAGS)

.PHONY: clean
clean:
	rm -f *.o test