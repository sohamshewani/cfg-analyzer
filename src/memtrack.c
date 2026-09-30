#include "memtrack.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "config.h"

int memtrack_start() {
    // Start memory tracking
    return CFG_OK;
}

void memtrack_stop() {
    // Stop memory tracking
}

int memtrack_track_allocation(mem_track_t *track) {
    // Track memory allocation
    return CFG_OK;
}

int memtrack_track_deallocation(mem_track_t *track) {
    // Track memory deallocation
    return CFG_OK;
}

