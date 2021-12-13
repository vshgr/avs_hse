#include <iostream>
#include <thread>
#include "shooter.h"

int cost_of_projectile = 0;
int first_state_count = 0;
int second_state_count = 0;
int targets = 0;

int first_projectile = 0;
int second_projectile = 0;

void start() {
    std::cout << "start\n" << std::endl;
    std::cout << "Введите цену одного снаряда\n";
    bool correct = false;
    while (!correct) {
        std::cin >> cost_of_projectile;
        if (cost_of_projectile <= 0) {
            std::cout << "Укажите цену >0";
        } else {
            correct = true;
        }
    }
    correct = false;
    std::cout << "Введите цену объектов поражения государств\n";
    while (!correct) {
        std::cin >> targets;
        if (targets <= 0) {
            std::cout << "Укажите цену >0";
        } else {
            correct = true;
        }
    }
}

void init() {
    Shooter::second_state_count = second_state_count;
    Shooter::first_state_count = first_state_count;
    Shooter::targets = targets;
    Shooter::first_projectile = first_projectile;
    Shooter::second_projectile = second_projectile;
    Shooter::cost_of_projectile = cost_of_projectile;
}

void input() {
    std::string random;
    std::cout << "Если хотите сгенерировать числа случайно введите r, иначе введите любую другую строку\n";
    std::cin >> random;
    if (random == "r") {
        cost_of_projectile = rand() % 10 + 1;
        targets = rand() % 1000 + 100;
    } else {
        start();
    }
}

int main() {
    input();

    std::cout << "Цена снаряда: " << cost_of_projectile << "\nЦена целeй: "
              << targets << std::endl;
    first_state_count = second_state_count = targets;
    init();

    std::thread first_state(Shooter::ShootSecondState);
    std::thread second_state(Shooter::ShootFirstState);

    first_state.join();
    second_state.join();

    std::cout << "\nend";
    return 0;
}
