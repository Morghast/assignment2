

#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include "buffer.h"

int main(int argc, const char * argv[])
{
    struct Buffer buffer;

    create_buffer(&buffer, 123);

    int index = 5;
    //    buffer.data[index] = 42;
    set_buffer(&buffer, 42, index);
	
    printf("Value at %d is %u\n", index, buffer.data[index]);

    delete_buffer(&buffer);

    return EXIT_SUCCESS;
}

int myFile = open("/dev/random", O_RDONLY);            
unsigned int rand;            
uint16_t randomNum = read(myFile, &rand, sizeof(rand)) ;
printf(" %u ", rand);
close(myFile);