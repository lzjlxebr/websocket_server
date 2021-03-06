//
// Created by lzjlxebr on 5/26/21.
//

#ifndef WEBSOCKET_SERVER_BASE_H
#define WEBSOCKET_SERVER_BASE_H

#include <stdlib.h>
#include <strings.h>
#include <string.h>
#include <sys/wait.h>

/* Macros for min/max. */
#ifndef MIN
#define MIN(a, b) (((a)<(b))?(a):(b))
#endif /* MIN */
#ifndef MAX
#define MAX(a, b) (((a)>(b))?(a):(b))
#endif  /* MAX */

#define IS_DEBUG 1

#ifdef IS_DEBUG
#define DEBUG(fmt, args...) fprintf(stderr, __DATE__ ":" __TIME__  " - DEBUG: %s:%d:%s(): " fmt "\n", \
             __FILE__, __LINE__, __func__, ##args)
#else
#define DEBUG(...)
#endif

#define ERROR(fmt, args...) fprintf(stderr, __DATE__ ":" __TIME__  " - ERROR: %s:%d:%s(): " fmt "\n", \
             __FILE__, __LINE__, __func__, ##args)

char* wrap_char2str(unsigned char in);


#endif //WEBSOCKET_SERVER_BASE_H
