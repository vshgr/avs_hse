//
// Created by alisa on 13.12.2021.
//

#include "shooter.h"

std::mutex mtx;

int Shooter::targets = 0;
int Shooter::first_projectile = 0;
int Shooter::second_projectile = 0;
int Shooter::first_state_count = 0;
int Shooter::second_state_count = 0;
int Shooter::cost_of_projectile = 0;

void Shooter::ShootSecondState() {
    while (second_state_count > 0 && targets >= first_projectile * cost_of_projectile) {
        mtx.lock();
        std::cout << "Первое государство:" << std::endl;
        std::cout << "\tСнарядов выпущено: " << first_projectile << std::endl;
        std::cout << "\tОчков у государства: " << first_state_count << std::endl;
        std::cout << "\tОсталось денег: " << targets - first_projectile * cost_of_projectile << std::endl;
        std::cout << "\tОчков осталось поразить: " << second_state_count << std::endl;
        bool shoot = Random::GetBool();
        if (shoot) {
            int value = Random::GetRandomProjectile(cost_of_projectile);
            second_state_count -= value;
            first_projectile++;
            std::cout << "\tПопадание! -" << value << " очков второму государству!" << std::endl;
        } else {
            first_projectile++;
            std::cout << "\tПромах!" << std::endl;
        }
        if (second_state_count <= 0) {
            std::cout << "\x1b[32mВторое государство поражено!\x1b[0m";
            std::exit(0);
        }
        if (targets < first_projectile * cost_of_projectile) {
            std::cout << "\x1b[32mУ первого государства закончились деньги\x1b[0m";
            std::exit(0);
        }
        mtx.unlock();
        std::this_thread::sleep_for(std::chrono::milliseconds(rand() % 2000 + 1000));
    }
}

void Shooter::ShootFirstState() {
    while (first_state_count > 0 && targets >= second_projectile * cost_of_projectile) {
        mtx.lock();
        std::cout << "Второе государство:" << std::endl;
        std::cout << "\tСнарядов выпущено: " << second_projectile << std::endl;
        std::cout << "\tОчков у государства: " << second_state_count << std::endl;
        std::cout << "\tОсталось денег: " << targets - second_projectile * cost_of_projectile << std::endl;
        std::cout << "\tОчков осталось поразить: " << first_state_count << std::endl;
        bool shoot = Random::GetBool();
        if (shoot) {
            int value = Random::GetRandomProjectile(cost_of_projectile);
            first_state_count -= value;
            std::cout << "\tПопадание! -" << value << " очков первому государству!" << std::endl;
            second_projectile++;
        } else {
            second_projectile++;
            std::cout << "\tПромах!" << std::endl;
        }
        if (first_state_count <= 0) {
            std::cout << "\x1b[32mПервое государство поражено!\x1b[0m";
            std::exit(0);
        }
        if (targets < second_projectile * cost_of_projectile) {
            std::cout << "\x1b[32mУ второго государства закончились деньги\x1b[0m";
            std::exit(0);
        }
        mtx.unlock();
        std::this_thread::sleep_for(std::chrono::milliseconds(rand() % 2000 + 1000));
    }
}

