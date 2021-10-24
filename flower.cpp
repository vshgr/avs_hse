//
// Created by alisa on 23.10.2021.
//
#include "flower.h"
#include "cstring"


void Flower::In(FILE *ifst) {
    char typeStr[10];
    if (fscanf(ifst, "%s", typeStr) != EOF) {
        if (strcmp(typeStr, "HOUSE") == 0) {
            type = HOUSE;
        } else if (strcmp(typeStr, "GARDEN") == 0) {
            type = GARDEN;
        } else if (strcmp(typeStr, "WILD") == 0) {
            type = WILD;
        }
    }
}

void Flower::InRnd() {
    type = static_cast<PLANT>(rand() % 3);
}

void Flower::Out(FILE *ofst) {
    std::string typeStr;
    if (type == HOUSE) {
        typeStr = "HOUSE";
    } else if (type == GARDEN) {
        typeStr = "GARDEN";
    } else if (type == WILD) {
        typeStr = "WILD";
    } else {
        typeStr = "Incorrect_type!";
    }
    fprintf(ofst, "It is flower: name = %s, type = %s. Quotient = %f\n", name, typeStr.c_str(), GetQuotient());
}

double Flower::GetQuotient() {
    double result = 0;
    int length = strlen(name);
    int vowels = 0;
    for (int i = 0; i < strlen(name); i++) {
        if (name[i] == 'a' || name[i] == 'o' || name[i] == 'u' || name[i] == 'y' || name[i] == 'e' || name[i] == 'i')
            vowels++;
    }
    result = (double) vowels / length;
    return result;
}
