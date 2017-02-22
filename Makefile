test.rhythm:
	${CC} -Wall test.c rhythm.c -o test.rhythm

clean:
	rm -f test.rhythm

all: test.rhythm
