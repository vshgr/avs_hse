//
// Created by alisa on 06.10.2021.
//

#ifndef AVS_PLANTS_01_FLOWER_H
#define AVS_PLANTS_01_FLOWER_H

#include <stdio.h>

struct flower {
    enum PLANT {
        HOUSE, WILD, GARDEN
    } type;
};

int InFlower(struct flower *b, FILE *infile);

void InRndFlower(struct flower *b);

void OutFlower(struct flower *b, FILE *outfile);

#endif //AVS_PLANTS_01_FLOWER_H
