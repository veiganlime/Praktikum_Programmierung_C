
PROGRAM = hs_7

SOURCES.c = hs_7.c   
SOURCES.h = 

SOURCES = \
	$(SOURCES.h) \
	$(SOURCES.c)

OBJECTS = \
	$(SOURCES.c:%.c%=%.o)

CC = gcc

CFLAGS = -O0 -g -Wall
LDLIBS = -lm

all:		$(PROGRAM)

$(PROGRAM): $(SOURCES.c) $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $(OBJECTS) $(LDLIBS)

clean:
	rm -rf $(PROGRAM) 

run:
	./$(PROGRAM)





