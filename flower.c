//
// Created by alisa on 06.10.2021.
//

#include <string.h>
#include <stdlib.h>
#include "flower.h"

void InRndFlower(struct flower *f) {
    f->type = rand() % 3;
}

int InFlower(struct flower *f, FILE *ifst) {
    char typeStr[10];
    if (fscanf(ifst, "%s", typeStr) == EOF)
        return EOF;
    if (strcmp(typeStr, "HOUSE") == 0) {
        f->type = HOUSE;
    } else if (strcmp(typeStr, "GARDEN") == 0) {
        f->type = GARDEN;
    } else if (strcmp(typeStr, "WILD") == 0) {
        f->type = WILD;
    } else {
        return 0;
    }
    return 1;
}

void OutFlower(struct flower *f, FILE *ofst) {
    char* typeStr;
    if (f->type == HOUSE) {
        typeStr = "HOUSE";
    } else if (f->type == GARDEN) {
        typeStr = "GARDEN";
    } else if (f->type == WILD) {
        typeStr = "WILD";
    } else {
        typeStr = "Incorrect_type!";
    }
    fprintf(ofst, "It is flower: type = %s.", typeStr);
}

