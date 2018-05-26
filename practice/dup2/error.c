#include <stdio.h>
#include <errno.h>
#include <stdlib.h>

void error_fatal (char *message)
{
	perror(message);
	exit(EXIT_FAILURE);
}
