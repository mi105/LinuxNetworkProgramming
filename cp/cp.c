#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include "error.h"


#define BUFFER_SIZE 2048


int main (int argc, char** argv)
{
    char buffer[BUFFER_SIZE];
    int n;
    int count =0;
    while (1)
    {
        n = read(STDIN_FILENO, buffer, BUFFER_SIZE);
        if (n<=0) break;
        if (write(STDOUT_FILENO, buffer,n)!=n)
            error_fatal(argv[0]);
        count++;
    }        
    printf("%d\n", count);
    if(n<0) 
        error_fatal(argv[0]);
    return 0;
}

