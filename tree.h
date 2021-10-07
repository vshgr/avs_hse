//
// Created by alisa on 06.10.2021.
//

#ifndef AVS_PLANTS_01_TREE_H
#define AVS_PLANTS_01_TREE_H

#include <stdio.h>

struct tree {
    long age;
};

int InTree(struct tree *b, FILE *ifst);

void InRndTree(struct tree *b);

void OutTree(struct tree *b, FILE *ofst);

#endif //AVS_PLANTS_01_TREE_H
