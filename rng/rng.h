//Rob Davis's awesome random number generator program
//rng header file

#ifndef rng_h_

#include <sys/types.h>

struct Buffer {
    uint16_t *data;
    size_t buffer_size;
};

void create_buffer(struct Buffer *, size_t);
void delete_buffer(struct Buffer *);
void set_buffer(struct Buffer *, uint16_t, int);

#endif 