//
// Created by alisa on 06.10.2021.
//

#include <stdlib.h>
#include "tree.h"

void InRndTree(struct tree *t) {
    t->age = rand() % 100000 + 1000;
}

int InTree(struct tree *t, FILE *ifst) {
    long age;
    if (fscanf(ifst, "%ld", &age) == EOF)
        return EOF;
    if (t->age < 0) {
        return 0;
    } else {
        t->age = age;
    }
    return 1;
}

void OutTree(struct tree *t, FILE *ofst) {
    fprintf(ofst, "It is tree: age = %ld.", t->age);
}
