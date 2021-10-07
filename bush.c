//
// Created by alisa on 06.10.2021.
//

#include <string.h>
#include <stdlib.h>
#include "bush.h"

void InRndBush(struct bush *b) {
    b->month = rand() % 12;
}

int InBush(struct bush *b, FILE *ifst) {
    char monthStr[10];
    if (fscanf(ifst, "%s", monthStr) == EOF)
        return EOF;
    if (strcmp(monthStr, "JANUARY") == 0) {
        b->month = JANUARY;
    } else if (strcmp(monthStr, "FEBRUARY") == 0) {
        b->month = FEBRUARY;
    } else if (strcmp(monthStr, "MARCH") == 0) {
        b->month = MARCH;
    } else if (strcmp(monthStr, "APRIL") == 0) {
        b->month = APRIL;
    } else if (strcmp(monthStr, "MAY") == 0) {
        b->month = MAY;
    } else if (strcmp(monthStr, "JUNE") == 0) {
        b->month = JUNE;
    } else if (strcmp(monthStr, "JULY") == 0) {
        b->month = JULY;
    } else if (strcmp(monthStr, "AUGUST") == 0) {
        b->month = AUGUST;
    } else if (strcmp(monthStr, "SEPTEMBER") == 0) {
        b->month = SEPTEMBER;
    } else if (strcmp(monthStr, "OCTOBER") == 0) {
        b->month = OCTOBER;
    } else if (strcmp(monthStr, "NOVEMBER") == 0) {
        b->month = NOVEMBER;
    } else if (strcmp(monthStr, "DECEMBER") == 0) {
        b->month = DECEMBER;
    } else {
        return 0;
    }
    return 1;
}

void OutBush(struct bush *b, FILE *ofst) {
    char *monthStr;
    if (b->month == JANUARY) {
        monthStr = "JANUARY";
    } else if (b->month == FEBRUARY) {
        monthStr = "FEBRUARY";
    } else if (b->month == MARCH) {
        monthStr = "MARCH";
    } else if (b->month == APRIL) {
        monthStr = "APRIL";
    } else if (b->month == MAY) {
        monthStr = "MAY";
    } else if (b->month == JUNE) {
        monthStr = "JUNE";
    } else if (b->month == JULY) {
        monthStr = "JULY";
    } else if (b->month == AUGUST) {
        monthStr = "AUGUST";
    } else if (b->month == SEPTEMBER) {
        monthStr = "SEPTEMBER";
    } else if (b->month == OCTOBER) {
        monthStr = "OCTOBER";
    } else if (b->month == NOVEMBER) {
        monthStr = "NOVEMBER";
    } else if (b->month == DECEMBER) {
        monthStr = "DECEMBER";
    } else {
        monthStr = "Incorrect_month!";
    }
    fprintf(ofst, "It is bush: month = %s.", monthStr);
}
