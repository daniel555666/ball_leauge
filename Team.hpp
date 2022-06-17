#pragma once
#include<iostream>
#include<string.h>

using namespace std;

class Team{

    public:
        string _name;
        double _talent;
        int max_win;
        int max_lose;

        Team(string name,int talent){
            _name=name;
            _talent=talent;
            max_win=0;
            max_lose=0;
            
        }
        // Team(){
        // }
        // bool operator ==(const Team& other)const{
        //     return _name==other._name;
        // }

};
