//
// Created by alisa on 13.12.2021.
//

#ifndef AVS_THREADS_RANDOM_H
#define AVS_THREADS_RANDOM_H

#include <iostream>
class Random {

public:
    static bool GetBool();

    static int GetRandomProjectile(int cost_of_projectile);
};


#endif //AVS_THREADS_RANDOM_H
