//
// Created by alisa on 23.10.2021.
//

#ifndef AVS_PLANTS_02_FLOWER_H
#define AVS_PLANTS_02_FLOWER_H


#include "plant.h"

class Flower : public Plant {
private:
    enum PLANT {
        HOUSE, WILD, GARDEN
    } type;
public:
    virtual ~Flower() {}

    virtual void In(FILE *ifst);

    virtual void InRnd();

    virtual void Out(FILE *ofst);

    virtual double GetQuotient();
};


#endif //AVS_PLANTS_02_FLOWER_H
