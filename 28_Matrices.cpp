#include<iostream>


using namespace std;

int main(){

    //similar to other languages

    string cars[2][3] = {{"Mustang","Camaro","Challenger"},
                        {"F-150","Silverado","Tundra"}};

    //cout<<cars[1][1];


    int rows = sizeof(cars)/sizeof(cars[0]);
    int cols = sizeof(cars[0])/sizeof(cars[0][0]);

    for(int r=0;r<rows;r++){
        for(int c=0;c<cols;c++){
            cout<<cars[r][c]<<endl;
        }
    }


    return 0;
}