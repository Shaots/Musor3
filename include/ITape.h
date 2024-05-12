//
// Created by Lenovo on 12.05.2024.
//

#ifndef YADRO_ITAPE_H
#define YADRO_ITAPE_H


class ITape {
public:
    virtual void read() = 0;

    virtual void write() = 0;

    virtual void move() = 0;
};


#endif //YADRO_ITAPE_H
