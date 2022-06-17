#include <iostream>
#include <string.h>
// #include <Team.hpp>
#include <array>
#include <random>
#include <vector>
#include"Game.hpp"
#include"Leauge.hpp"

using namespace std;

class Schedule{

    public:

        Game* board [20][10];
        Leauge leg;

        Schedule(Leauge leg2){
            leg=leg2;
        }
        void start_leauge();
        void start_season(Team* set1[10],Team* set2[10],int season_number);



};