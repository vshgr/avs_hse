//
// Created by alisa on 24.10.2021.
//

#ifndef AVS_PLANTS_02_CONTAINER_H
#define AVS_PLANTS_02_CONTAINER_H


#include "plant.h"

class Container {
public:
    Container(int s);

    ~Container();

    void In(FILE *ifst);

    void InRnd(int size);

    void Out(FILE *ofst);

    void BubbleSort();

private:
    void Clear();

    int len;
    Plant **plants;
};


#endif //AVS_PLANTS_02_CONTAINER_H
