#include <iostream>
#include <string.h>
#include "Team.hpp"
#include <array>
#include <random>
#include <vector>

#define NUMBER_OF_GROUPS 20

using namespace std;

double pickTalent()
{ // random number
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_real_distribution<double> dist(0, 1);
    double talent = dist(mt);
    return talent;
}

class Leauge
{

public:

    array<Team *, 20> teams;

    Leauge(size_t i = 0)
    {
        for (i = 0; i < NUMBER_OF_GROUPS; i++)
        { // give name be the a b c ... order
            teams.at(i) = (new Team(string(1, ('a' + i)), pickTalent()));
        }
    }

    Leauge(vector<Team *> arr)
    {
        for (size_t i = 0; i < arr.size(); i++)
        {
            teams.at(i) = arr.at(i);
        }
        // rest of teams that left
        for (size_t i = arr.size(); i < NUMBER_OF_GROUPS; i++)
        { // give name be the a b c ... order
            teams.at(i) = (new Team(string(1, ('a' + i)), pickTalent()));
        }
    }

};