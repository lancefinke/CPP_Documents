#include<iostream>

using namespace std;

int main(){

    string cars[] = {"mustang","camaro","Challenger"};

    cout<<cars[0]<<endl;
    cout<<cars[1]<<endl;
    cout<<cars[2]<<endl;

    cars[1]="corvette";

    cout<<cars[1]<<endl;



    return 0;
}