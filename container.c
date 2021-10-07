//
// Created by alisa on 06.10.2021.
//

//------------------------------------------------------------------------------
// container.c - содержит функции обработки контейнера
//------------------------------------------------------------------------------

#include <stdlib.h>
#include "container.h"

//------------------------------------------------------------------------------
// Инициализация контейнера
void InitCont(struct container *c) {
    c->len = 0;
}

//------------------------------------------------------------------------------
// Очистка контейнера от элементов (освобождение памяти)
void ClearCont(struct container *c) {
    for (int i = 0; i < c->len; i++) {
        free(c->cont[i]);
    }
    c->len = 0;
}

//------------------------------------------------------------------------------
// Ввод содержимого контейнера из указанного потока
void InCont(struct container *c, FILE *ifst) {
    struct plant *plant;
    while ((plant = InPlant(ifst)) != ((void *) 0)) {
        c->cont[c->len] = plant;
        c->len++;
    }
}

//------------------------------------------------------------------------------
// Случайный ввод содержимого контейнера
void InRndCont(struct container *c, int size) {
    while (c->len < size) {
        if ((c->cont[c->len] = InRnd()) != ((void *) 0)) {
            c->len++;
        }
    }
}

//------------------------------------------------------------------------------
// Вывод содержимого контейнера в указанный поток
void OutCont(struct container *c, FILE *ofst) {
    fprintf(ofst, "Container contains %d elements.\n", c->len);
    for (int i = 0; i < c->len; i++) {
        fprintf(ofst, "%d: ", i);
        OutPlant(c->cont[i], ofst);
    }
}

//------------------------------------------------------------------------------
// Сортировка пузырьком
void BubbleSort(struct container *c) {
    for (int i = 0; i < c->len-1; i++) {
        for (int j = c->len-1; j >i; j --) {
            if (GetQuotient(c->cont[j-1]) < GetQuotient(c->cont[j])) {
                struct plant *temp = c->cont[j-1];
                c->cont[j-1] = c->cont[j];
                c->cont[j] = temp;
            }
        }
    }
}