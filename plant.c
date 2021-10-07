//
// Created by alisa on 06.10.2021.
//

#include <stdlib.h>
#include <string.h>
#include "plant.h"

char *RndName(char *str, size_t size) {
    if (size) {
        --size;
        for (size_t n = 0; n < size; n++) {
            str[n] = 'a' + rand()%26;
        }
        str[size] = '\0';
    }
    return str;
}
struct plant *InPlant(FILE *ifst) {
    struct plant *p;
    int k;
    if (fscanf(ifst, "%d", &k) == EOF)
        return ((void *) 0);

    char name[256];
    if (fscanf(ifst, "%s", name) == EOF)
        return ((void *) 0);

    switch (k) {
        case 1:
            p = (struct plant *) malloc(sizeof(struct plant));
            p->k = TREE;
            strcpy(p->name, name);
            if (InTree(&p->t, ifst) == EOF) {
                free(p);
                return ((void *) 0);
            }
            return p;
        case 2:
            p = (struct plant *) malloc(sizeof(struct plant));
            p->k = FLOWER;
            strcpy(p->name, name);
            if (InFlower(&p->f, ifst) == EOF) {
                free(p);
                return ((void *) 0);
            }
            return p;
        case 3:
            p = (struct plant *) malloc(sizeof(struct plant));
            p->k = BUSH;
            strcpy(p->name, name);
            if (InBush(&p->b, ifst) == EOF) {
                free(p);
                return ((void *) 0);
            }
            return p;
        default:
            return ((void *) 0);
    }
}

struct plant *InRnd() {
    const int LENGTH = 10 + 1;
    struct plant *p;
    int k = 1 + rand() % 3;
    switch (k) {
        case 1:
            p = (struct plant *) malloc(sizeof(struct plant));
            p->k = TREE;
            RndName(p->name, LENGTH);
            InRndTree(&p->t);
            return p;
        case 2:
            p = (struct plant *) malloc(sizeof(struct plant));
            p->k = FLOWER;
            RndName(p->name, LENGTH);
            InRndFlower(&p->f);
            return p;
        case 3:
            p = (struct plant *) malloc(sizeof(struct plant));
            p->k = BUSH;
            RndName(p->name, LENGTH);
            InRndBush(&p->b);
            return p;
        default:
            return 0;
    }
}

void OutPlant(struct plant *p, FILE *ofst) {
    switch (p->k) {
        case TREE:
            OutTree(&p->t, ofst);
            break;
        case FLOWER:
            OutFlower(&p->f, ofst);
            break;
        case BUSH:
            OutBush(&p->b, ofst);
            break;
        default:
            fprintf(ofst, "Incorrect_plant!\n");
            return;
    }
    fprintf(ofst, "Name = %s. GetQuotient: %f\n", p->name, GetQuotient(p));
}

// Для всех растений функция одинакова
double GetQuotient(struct plant *p) {
    double result = 0;
    int length = strlen(p->name);
    int vowels=0;
    for (int i = 0; i < strlen(p->name); i++) {
        if(p->name[i]=='a'||p->name[i]=='o'||p->name[i]=='u'||p->name[i]=='y'||p->name[i]=='e'||p->name[i]=='i')
            vowels++;
    }
    result=(double)vowels/length;
    return result;
}


