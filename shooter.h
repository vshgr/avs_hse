//
// Created by alisa on 13.12.2021.
//

#ifndef AVS_THREADS_SHOOTER_H
#define AVS_THREADS_SHOOTER_H

#include <iostream>
#include <mutex>
#include <chrono>
#include "random.h"

class Shooter {

public:
    static int first_state_count;
    static int second_state_count;
    static int targets;
    static int first_projectile;
    static int second_projectile;
    static int cost_of_projectile;

    static void ShootSecondState();

    static void ShootFirstState();
};


#endif //AVS_THREADS_SHOOTER_H
