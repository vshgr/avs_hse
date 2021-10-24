//
// Created by alisa on 23.10.2021.
//

#include "bush.h"
#include "cstring"

void Bush::In(FILE *ifst) {
    char monthStr[10];
    if (fscanf(ifst, "%s", monthStr) != EOF) {
        if (strcmp(monthStr, "JANUARY") == 0) {
            month = JANUARY;
        } else if (strcmp(monthStr, "FEBRUARY") == 0) {
            month = FEBRUARY;
        } else if (strcmp(monthStr, "MARCH") == 0) {
            month = MARCH;
        } else if (strcmp(monthStr, "APRIL") == 0) {
            month = APRIL;
        } else if (strcmp(monthStr, "MAY") == 0) {
            month = MAY;
        } else if (strcmp(monthStr, "JUNE") == 0) {
            month = JUNE;
        } else if (strcmp(monthStr, "JULY") == 0) {
            month = JULY;
        } else if (strcmp(monthStr, "AUGUST") == 0) {
            month = AUGUST;
        } else if (strcmp(monthStr, "SEPTEMBER") == 0) {
            month = SEPTEMBER;
        } else if (strcmp(monthStr, "OCTOBER") == 0) {
            month = OCTOBER;
        } else if (strcmp(monthStr, "NOVEMBER") == 0) {
            month = NOVEMBER;
        } else if (strcmp(monthStr, "DECEMBER") == 0) {
            month = DECEMBER;
        }
    }
}

void Bush::InRnd() {
    month = static_cast<MONTH>(rand() % 12);
}

void Bush::Out(FILE *ofst) {
    std::string monthStr;
    if (month == JANUARY) {
        monthStr = "JANUARY";
    } else if (month == FEBRUARY) {
        monthStr = "FEBRUARY";
    } else if (month == MARCH) {
        monthStr = "MARCH";
    } else if (month == APRIL) {
        monthStr = "APRIL";
    } else if (month == MAY) {
        monthStr = "MAY";
    } else if (month == JUNE) {
        monthStr = "JUNE";
    } else if (month == JULY) {
        monthStr = "JULY";
    } else if (month == AUGUST) {
        monthStr = "AUGUST";
    } else if (month == SEPTEMBER) {
        monthStr = "SEPTEMBER";
    } else if (month == OCTOBER) {
        monthStr = "OCTOBER";
    } else if (month == NOVEMBER) {
        monthStr = "NOVEMBER";
    } else if (month == DECEMBER) {
        monthStr = "DECEMBER";
    } else {
        monthStr = "Incorrect_month!";
    }
    fprintf(ofst, "It is bush: name = %s, month = %s. Quotient = %f\n", name, monthStr.c_str(), GetQuotient());
}

double Bush::GetQuotient() {
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
