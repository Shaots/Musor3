#ifndef YADRO_SORT_H
#define YADRO_SORT_H

#include "../include/ITape.h"

namespace shao {

    class sort {
    public:
        // Bubble sort
        void bubble(ITape* tapeIn, ITape* tapeOut); // указатель на функцию создание экземпляра ленты.

        // Merge sort
        void merge(ITape* tapeIn, ITape* tapeOut);
    };

} // shao

#endif //YADRO_SORT_H
