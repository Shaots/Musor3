#include <iostream>
#include "../include/ITape.h"

#ifndef YADRO_TAPE_H
#define YADRO_TAPE_H


class tape : ITape {
private:
    void read() override;

    void write() override;

    void move() override;

// фабричный метод

private:
    size_t head = 0;
    size_t length;
    int* data; // length = N
};


#endif //YADRO_TAPE_H
