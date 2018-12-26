#include "utils.h"
#include <stdlib.h>
#include <memory.h>


void resize(char ** pointer, int size) {
	char * var = (char *) malloc(sizeof(char) * size);
	memcpy(var, *pointer, (sizeof(char) * size));
	*pointer = var;
}