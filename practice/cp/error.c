#include <stdlib.h>
#include <stdio.h>
#include "error.h"

void error_fatal(char *message)
{
 perror(message);
 exit(EXIT_FAILURE);
}
