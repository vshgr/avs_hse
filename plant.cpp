//
// Created by alisa on 23.10.2021.
//
#include "fstream"
#include "plant.h"
#include "tree.h"
#include "flower.h"
#include "bush.h"
#include "cstring"

char *RndName(char *str, size_t size) {
    if (size) {
        --size;
        for (size_t n = 0; n < size; n++) {
            str[n] = 'a' + rand() % 26;
        }
        str[size] = '\0';
    }
    return str;
}

Plant *Plant::StaticIn(FILE *ifst) {
    int k;
    if (fscanf(ifst, "%d", &k) == EOF)
        return nullptr;
    char name[256];
    if (fscanf(ifst, "%s", name) == EOF)
        return nullptr;

    Plant* plant;
    switch(k) {
        case 1:
            plant = new Tree;
            strcpy(plant->name,name);
            break;
        case 2:
            plant = new Flower;
            strcpy(plant->name,name);
            break;
        case 3:
            plant = new Bush;
            strcpy(plant->name,name);
            break;
        default:
            return nullptr;
    }
    plant->In(ifst);
    return plant;
}

Plant *Plant::StaticInRnd() {
    const int LENGTH = 10 + 1;
    int k = 1 + rand() % 3;
    Plant* plant = nullptr;
    switch(k) {
        case 1:
            plant = new Tree;
            RndName(plant->name, LENGTH);
            break;
        case 2:
            plant = new Flower;
            RndName(plant->name, LENGTH);
            break;
        case 3:
            plant = new Bush;
            RndName(plant->name, LENGTH);
            break;
        default:
            return nullptr;
    }
    plant->InRnd();
    return plant;
}
