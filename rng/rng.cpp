//Rob Davis's awesome random number generator program
//rng.cpp

#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include "buffer.h"

void create_buffer(struct Buffer *buffer, size_t size)
{
    buffer->data = malloc(size * sizeof(uint16_t));

    if (buffer->data == NULL)
    {
        perror("malloc");
        exit(EXIT_FAILURE);
    }

    buffer->buffer_size = size;
}


void delete_buffer(struct Buffer *buffer)
{
    free(buffer->data);
}


void set_buffer(struct Buffer *buffer, uint16_t value, int index)
{
    if (index < 0 || index >= buffer->buffer_size)
    {
        fprintf(stderr, "Index %d out of range (%ld)\n", index, buffer->buffer_size);
        exit(EXIT_FAILURE);
    }
    buffer->data[index] = value;
}