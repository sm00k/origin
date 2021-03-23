#include <cstdlib>
#include <ctime>
#include <vector>
#include "mini_game.h"

using namespace std;


int png ()
{

    int min = 0, max = 9;
    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
    return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

