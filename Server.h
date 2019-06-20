//
// Created by daniel.brown1 on 6/20/19.
//

#ifndef EX5_SERVER_H
#define EX5_SERVER_H

#include <sys/socket.h>
#include <stdio.h>


//TODO- stay responsive- how many clients can I serve boz?
//TODO- no memory leaks
//TODO- refuse to serve a Client with '\' in the path
//TODO- The server should make sure that the resulting file path (combination of server’s
    //TODO- local_dir_path with Client’s remote_name) is valid: at most 4095 chars and the file name
    //TODO- part at most 255 chars.
//TODO- not crash upon receiving illegal requests

class Server
{
    explicit Server(unsigned short port);

    ~Server();

};


#endif //EX5_SERVER_H
