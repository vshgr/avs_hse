//
// Created by alisa on 23.10.2021.
//

#include "tree.h"
#include "cstring"

void Tree::In(FILE *ifst) {
    long input_age;
    if (fscanf(ifst, "%ld", &input_age) != EOF && input_age > 0) {
        age = input_age;
    }
}

void Tree::InRnd() {
    age = rand() % 100000 + 1000;
}

void Tree::Out(FILE *ofst) {
    fprintf(ofst, "It is tree: name = %s, age = %ld. Quotient = %f\n", name, age, GetQuotient());
}

double Tree::GetQuotient() {
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
