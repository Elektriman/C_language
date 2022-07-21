#include <stdlib.h>

#include "./ga.h"
#include "./ga.inc"

void *(*ga_malloc)(size_t size) = malloc;
void *(*ga_realloc)(void *ptr, size_t size) = realloc;
void (*ga_free)(void *ptr) = free;

