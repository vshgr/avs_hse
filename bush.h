//
// Created by alisa on 06.10.2021.
//

#ifndef AVS_PLANTS_01_BUSH_H
#define AVS_PLANTS_01_BUSH_H

#include <stdio.h>

struct bush {
    enum MONTH {
        JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER
    } month;
};

int InBush(struct bush *b, FILE *ifst);

void InRndBush(struct bush *b);

void OutBush(struct bush *b, FILE *ofst);

#endif //AVS_PLANTS_01_BUSH_H
