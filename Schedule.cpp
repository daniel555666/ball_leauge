#include"Schedule.hpp"

#define NUMBER_OF_SEASONS 13



void Schedule::start_season(Team* set1[10],Team* set2[10],int season_number){
cout<<"start season "<<season_number+1<<":"<<endl;

    for (size_t i = 0; i < NUMBER_OF_GROUPS/2; i++)
    {
        board[season_number][i]=new Game(*set1[i],*set2[i]);
    }

cout<<"end season"<<season_number+1<<endl<<endl;
    
}

void Schedule::start_leauge(){
    
    Team* set1[10];
    Team* set2[10];
    for (size_t i = 0; i < 10; i++)
    {   
        set1[i]=leg.teams.at(i);
        set2[i]=leg.teams.at(i+10);
    }

    for (size_t j = 0; j <NUMBER_OF_SEASONS; j++)
    {
        this->start_season(set1,set2,j);

        Team* temp=set1[1];
        set1[1]=set2[0]; 
        for (size_t i = 2; i < 9; i++)
        {   Team* t2=set1[i];
            set1[i]=temp;
            temp=t2;
        }
        Team* temp2=set2[9];
        set2[9]=temp; 
        for (size_t i = 8; i > 0; i--)
        {   Team* t2=set1[i];
            set1[i]=temp;
            temp=t2;
        }

        
    }
    
}

int main(){

    Leauge leg;
    Schedule sce(leg);
    sce.start_leauge();
}