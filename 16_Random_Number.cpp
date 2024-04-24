#include<iostream>
#include<ctime>

using namespace std;

int main(){

    //pseudo random

    srand(time(NULL));

    int num = (rand() % 6)+1;//range from 1-6

    cout<<num;


    return 0;
}