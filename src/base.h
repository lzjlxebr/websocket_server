//
// Created by lzjlxebr on 5/26/21.
//

#ifndef WEBSOCKET_SERVER_BASE_H
#define WEBSOCKET_SERVER_BASE_H

#define IS_DEBUG 1

#ifdef IS_DEBUG
#define DEBUG(fmt, args...) fprintf(stderr, "DEBUG: %s:%d:%s(): " fmt "\n", \
             __FILE__, __LINE__, __func__, ##args)
#else
#define DEBUG(...)
#endif

#define ERROR(fmt, args...) fprintf(stderr, "ERROR: %s:%d:%s(): " fmt "\n", \
             __FILE__, __LINE__, __func__, ##args)

#endif //WEBSOCKET_SERVER_BASE_H
