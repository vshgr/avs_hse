//
// Created by alisa on 23.10.2021.
//

#ifndef AVS_PLANTS_02_BUSH_H
#define AVS_PLANTS_02_BUSH_H

#include "plant.h"

class Bush : public Plant{
private:
    enum MONTH {
        JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER
    } month;
public:
    virtual ~Bush() {}

    virtual void In(FILE *ifst);

    virtual void InRnd();

    virtual void Out(FILE *ofst);

    virtual double GetQuotient();
};


#endif //AVS_PLANTS_02_BUSH_H
