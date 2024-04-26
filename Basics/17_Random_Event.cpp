#include<iostream>
#include<ctime>

using namespace std;

int main(){

    //generates random prizes

    srand(time(0));
    int randNum = rand() % 5 +1;

    switch(randNum){
        case 1: cout<<"You win a Coin!";
                break;
        case 2:cout<<"You win a Dollar!";
                break;
        case 3:cout<<"You win a Sword!";
                break;
        case 4:cout<<"You win a Bottle!";
                break;
        case 5:cout<<"You win a Car!";
                break;
    }

    return 0;
}