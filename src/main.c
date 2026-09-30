#include <stdio.h>
#include <stdlib.h>
#include "include/config.h"
#include "src/dead_code_detector.h"
#include "src/memtrack.h"
#include "src/report_generator.h"

int main(int argc, char **argv) {
	if (argc < 2) {
		fprintf(stderr, "Usage: %s <input_file>
", argv[0]);
		return EXIT_FAILURE;
	}

	char *input_file = argv[1];
	cfg_analyzer(input_file);

	return EXIT_SUCCESS;
}