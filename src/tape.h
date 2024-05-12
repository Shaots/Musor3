//
// Created by Lenovo on 11.05.2024.
//
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
    int head = 0;
    int length;
    int* data; // length = N
};


#endif //YADRO_TAPE_H
