#include<iostream>
#include<ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);


using namespace std;


int main(){

    char computer;
    char player;

    cout<<"ROCK! PAPER! SCISSORS!\n";

    player = getUserChoice();
    cout<<"Your choice: ";
    showChoice(player);

    computer = getComputerChoice();
    cout<<"\nComputer Choice: ";
    showChoice(computer);

    chooseWinner(player,computer);

    return 0;
}


char getUserChoice(){

    char player;

    do{
    cout<<"Select your Choice!\n";
    cout<<"'r' for Rock\n";
    cout<<"'p' for Paper\n";
    cout<<"'s' for scissors\n";
    cin>>player;
    }while(player!='r' && player!='p' && player!='s');

    return player;

}
char getComputerChoice(){
    
    srand(time(0));
    int num  = rand()%3+1;

    switch(num){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    }
    return 0;
}
void showChoice(char choice){

    switch(choice){
        case 'r': cout<<"Rock\n";
                break;
        case 'p': cout<<"Paper\n";
                break;
        case 's': cout<<"Scissors\n";
                break;
    }
}
void chooseWinner(char player, char computer){

    switch(player){
        case 'r': if(computer=='r'){
                    cout<<"It's a TIE\n";
                }
                else if(computer=='p'){
                    cout<<"You LOSE!\n";
                }
                else{
                    cout<<"You WIN!\n";
                }
                break;
        case 'p': if(computer=='p'){
                    cout<<"It's a TIE\n";
                }
                else if(computer=='s'){
                    cout<<"You LOSE!\n";
                }
                else{
                    cout<<"You WIN!\n";
                }
                break;
        case 's': if(computer=='s'){
                    cout<<"It's a TIE\n";
                }
                else if(computer=='r'){
                    cout<<"You LOSE!\n";
                }
                else{
                    cout<<"You WIN!\n";
                }
                break;
    }
}