//
// Created by alisa on 06.10.2021.
//

#ifndef AVS_PLANTS_01_CONTAINER_H
#define AVS_PLANTS_01_CONTAINER_H

#include "plant.h"

struct container {
    enum {max_len = 10000}; // максимальная длина
    int len; // текущая длина
    struct plant *cont[max_len];
};

// Инициализация контейнера
void InitCont(struct container *c);

// Очистка контейнера от элементов (освобождение памяти)
void ClearCont(struct container *c);

// Ввод содержимого контейнера из указанного потока
void InCont(struct container *c, FILE *ifst);

// Случайный ввод содержимого контейнера
void InRndCont(struct container *c, int size);

// Вывод содержимого контейнера в указанный поток
void OutCont(struct container *c, FILE *ofst);

// Сортировка
void BubbleSort(struct container *c);

#endif //AVS_PLANTS_01_CONTAINER_H
