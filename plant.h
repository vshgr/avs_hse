//
// Created by alisa on 06.10.2021.
//

#ifndef AVS_PLANTS_01_PLANT_H
#define AVS_PLANTS_01_PLANT_H

#include "flower.h"
#include "tree.h"
#include "bush.h"

struct plant {
    enum {
        max_name_len = 256
    };
    char name[max_name_len];

    enum KEY {
        FLOWER, TREE, BUSH
    } k;

    union {
        struct flower f;
        struct tree t;
        struct bush b;
    };
};
struct plant *InPlant(FILE *ifst);

struct plant *InRnd();

void OutPlant(struct plant *a, FILE *ofst);

double GetQuotient(struct plant *p);

#endif //AVS_PLANTS_01_PLANT_H
