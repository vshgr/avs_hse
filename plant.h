//
// Created by alisa on 23.10.2021.
//

#ifndef AVS_PLANTS_02_PLANT_H
#define AVS_PLANTS_02_PLANT_H

#include "fstream"

class Plant {
public:

    char name[256];

    virtual ~Plant() {};

    static Plant *StaticIn(FILE *ifdt);

    virtual void In(FILE *ifdt) = 0;

    static Plant *StaticInRnd();

    virtual void InRnd() = 0;

    virtual void Out(FILE *ofst) = 0;

    virtual double GetQuotient() = 0;
};


#endif //AVS_PLANTS_02_PLANT_H
