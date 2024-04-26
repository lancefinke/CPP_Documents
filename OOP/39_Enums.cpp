#include<iostream>

using std::cout;
using std::endl;
using std::cin;

//Enums are used to define sets of values
enum Numbers : unsigned int
{
    A = 5,B = 10,C = 15
    //automatically start at zero and increment by 1 unless specified otherwise
};


int main(){

    Numbers value = C; //prints C's value

    cout<<C<<endl;

    return 0;
}