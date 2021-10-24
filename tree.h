//
// Created by alisa on 23.10.2021.
//

#ifndef AVS_PLANTS_02_TREE_H
#define AVS_PLANTS_02_TREE_H

#include "plant.h"

class Tree : public Plant {
private:
    long age;
public:
    virtual ~Tree() {}

    virtual void In(FILE *ifst);

    virtual void InRnd();

    virtual void Out(FILE *ofst);

    virtual double GetQuotient();
};


#endif //AVS_PLANTS_02_TREE_H
