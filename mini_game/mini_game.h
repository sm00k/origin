#ifndef MINI_GAME_H
#define MINI_GAME_H
#include <vector>

int rand_num (int min,int max);
void record_random (std::vector <int> &random);
void user_num (std::vector <int> &user_number);
void comparison_and_calculation (std::vector <int> &random,std::vector <int> &user_num,bool &stop_cycle);

#endif // MINI_GAME_H
