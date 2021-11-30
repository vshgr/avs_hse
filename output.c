//
// Created by alisa on 26.11.2021.
//
#include <stdio.h>
#include "extdata.h"

double GetQuotient(void *p);

void OutFlower(void *f, FILE *ofst) {
    char *type;
    int t = *((int *) (f + nameSize));
    switch (t) {
        case 0:
            type = "WILD";
            break;
        case 1:
            type = "HOUSE";
            break;
        case 2:
            type = "GARDEN";
            break;
    }
    fprintf(ofst, "This is flower: name = %s, type = %s, quotient = %g\n", (char *) f, type, GetQuotient(f));
}

void OutBush(void *b, FILE *ofst) {
    char *type;
    int t = *((int *) (b + nameSize));
    switch (t) {
        case 0:
            type = "JANUARY";
            break;
        case 1:
            type = "FEBRUARY";
            break;
        case 2:
            type = "MARCH";
            break;
        case 3:
            type = "APRIL";
            break;
        case 4:
            type = "MAY";
            break;
        case 5:
            type = "JUNE";
            break;
        case 6:
            type = "JULY";
            break;
        case 7:
            type = "AUGUST";
            break;
        case 8:
            type = "SEPTEMBER";
            break;
        case 9:
            type = "OCTOBER";
            break;
        case 10:
            type = "NOVEMBER";
            break;
        case 11:
            type = "DECEMBER";
            break;
    }
    fprintf(ofst, "This is bush: name = %s, month = %s, quotient = %g\n", (char *) b, type, GetQuotient(b));
}

void OutTree(void *t, FILE *ofst) {
    fprintf(ofst, "This is tree: name = %s, age = %d, quotient = %g\n", (char *) t, *((int *) (t + nameSize)),
            GetQuotient(t));
}

void OutPlant(void *p, FILE *ofst) {
    int key = *((int *) p);
    if (key == TREE) {
        OutTree(p + intSize, ofst);
    } else if (key == FLOWER) {
        OutFlower(p + intSize, ofst);
    } else if (key == BUSH) {
        OutBush(p + intSize, ofst);
    } else {
        fprintf(ofst, "Incorrect plant!\n");
    }
}

// Вывод содержимого контейнера в указанный поток.
void OutContainer(void *c, int len, FILE *ofst) {
    fprintf(ofst, "Container contains %d elements\n", len);
    void *element = c;
    for (int i = 0; i < len; i++) {
        fprintf(ofst, "%i %s", i, ": ");
        OutPlant(element, ofst);
        element += plantSize;
    }
}

