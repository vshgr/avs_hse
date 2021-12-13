//
// Created by alisa on 13.12.2021.
//

#include "random.h"

bool Random::GetBool() {
    return 0 + (rand() % (1 - 0 + 1)) == 1;
}

int Random::GetRandomProjectile(int cost_of_projectile) {
    return 1 + rand() % (cost_of_projectile * 2 + 1);
}
