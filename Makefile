CFLAGS=-Wall -Wextra -std=c11

all: cfg-analyzer

cfg-analyzer: src/main.o src/dead_code_detector.o src/memtrack.o src/report_generator.o
	gcc $(CFLAGS) -o $@ $^ -lm

clean:
	rm -f cfg-analyzer *.o
