#include<iostream>
#include<ctime>
using namespace std;
int main(){
    return 0;
}

void draw_board(char *spaces){
    cout<<"     |     |     \n";
    cout<<"  "<<spaces[0]<<"  |  "<<spaces[1]<<"  |  "<<spaces[2]<<" \n";
    cout<<"_____|_____|_____\n";
    cout<<"     |     |    \n";
    cout<<"  "<<spaces[3]<<"  |  "<<spaces[4]<<"  |  "<<spaces[5]<<" \n";
    cout<<"_____|_____|_____\n";
    cout<<"     |     |     \n";
    cout<<"  "<<spaces[6]<<"  |  "<<spaces[7]<<"  |  "<<spaces[8]<<" \n";
    cout<<"     |     |     \n";
    cout<<"*******************\n";
}
void player_move(char *spaces, char player){
    int number;
    do
    {
        cout<<"enter a spot to place a marker (1-9): ";
        cin>>number;
        number--;
        if(spaces[number]== ' '){
            spaces[number] = player;
            break;
        }
    } while (!number >0 || !number <8);
    
}
void computer_move(char *spaces, char computer){
    int number;
    srand(time(0));
    while (true)
    {
        number = rand() %9;
        if(spaces[number]==' '){
            spaces[number] = computer;
            break;
        }
    }
    
    
}