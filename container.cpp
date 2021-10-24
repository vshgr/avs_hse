//
// Created by alisa on 24.10.2021.
//

#include "container.h"


void Container::In(FILE *ifst) {
    while (!feof(ifst)) {
        if ((plants[len] = Plant::StaticIn(ifst)) != nullptr) {
            len++;
        }
    }
}

void Container::InRnd(int size) {
    while (len < size) {
        if ((plants[len] = Plant::StaticInRnd()) != nullptr) {
            len++;
        }
    }
}

void Container::Out(FILE *ofst) {
    fprintf(ofst, "Container contains %d elements.\n", len);
    for (int i = 0; i < len; i++) {
        fprintf(ofst, "%d: ", i);
        plants[i]->Out(ofst);
    }
}

void Container::Clear() {
    for (int i = 0; i < len; i++) {
        delete plants[i];
    }
    len = 0;
}

Container::Container(int s) : len{0} {
    plants = new Plant *[s];
}

Container::~Container() {
    Clear();
    delete []plants;
}

void Container::BubbleSort() {
    for (int i = 0; i < len - 1; i++) {
        for (int j = len - 1; j > i; j--) {
            if (plants[j - 1]->GetQuotient() < plants[j]->GetQuotient()) {
                Plant *temp = plants[j - 1];
                plants[j - 1] = plants[j];
                plants[j] = temp;
            }
        }
    }
}

