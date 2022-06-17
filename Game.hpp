#include<iostream>
#include<string.h>
#include"Team.hpp"
#include <chrono>

using namespace std;

class Game{

    int game_score(){
    unsigned seed = chrono::steady_clock::now().time_since_epoch().count();
    std::default_random_engine e(seed);
    // standard deviation affects the dispersion of generated values from the mean
    std::normal_distribution<> res{78,13};
    int score =res(e);
    if(score >100){score =100;}
    if(score <55){score =55;}

    return score;
}
int game_score_b(){
    unsigned seed = chrono::steady_clock::now().time_since_epoch().count();
    std::default_random_engine e(seed);
    // standard deviation affects the dispersion of generated values from the mean
    std::normal_distribution<> res{75,13};
    int score =res(e);
    if(score >100){score =100;}
    if(score <50){score =50;}

    return score;
}

    public:
        Team _team1;
        Team _team2;
        bool team1_won;
        int score1;
        int score2;

    Game(Team team1,Team team2): _team1(team1),_team2(team2){
            cout<<team1._name<<" vs "<< team2._name<< " : ";
            score1=game_score()+team1._talent*10;
            score2=game_score_b()+team2._talent*10;
            if(score1>score2){
                team1_won=true;
                cout<< score1<< ","<< score1<<" won - " <<team1._name<<endl ;
            }
            else{
                team1_won=false;
                cout<< score1<< ","<< score2<<" won - " <<team2._name<<endl ;
            }

        }
} ;