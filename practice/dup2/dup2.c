#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "error.h"

#define BUFFERCOUNT 2048

int main(int argc, char** argv)
{
    int fd;
    int n;
    char buffer[BUFFERCOUNT];
    
    
    fd = open("output.txt", O_WRONLY | O_APPEND | O_CREAT, S_IRUSR | S_IWUSR);
    
    if (fd < 0)
        error_fatal("No output file");
    
    dup2(fd, STDOUT_FILENO);
    
    while(1)
    {
        n=read(STDIN_FILENO,buffer, BUFFERCOUNT);
        if(n<0)
        {
            error_fatal("\nError on read\n");            
        }
        if(write(STDOUT_FILENO, buffer,n) != n)
        {
            error_fatal("\nError on write\n");
        };
	        
    }
    
    
    return 0;
}
