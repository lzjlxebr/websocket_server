//
// Created by lzjlxebr on 5/26/21.
//

#include "net_util.h"

void get_conn_addr(struct sockaddr_in *addr, char * buff) {
    // An AF_INET address (which has the form xxx.xxx.xxx.xxx) uses a
    // maximum of 4x3 characters plus 3 delimiting . chars which sums
    // up to 15 chars plus 1 additional char used as 0-terminator to
    // make it a C-"string"

    inet_ntop(AF_INET, &addr->sin_addr, buff, 16);
}

unsigned int get_conn_port(struct sockaddr_in *addr) {
    return ntohs(addr->sin_port);
}

