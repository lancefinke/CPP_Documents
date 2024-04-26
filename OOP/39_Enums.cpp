#include<iostream>

using std::cout;
using std::endl;
using std::cin;

//Enums are used to define sets of values
enum Numbers : unsigned int
{
    A = 5,B = 10,C = 15
};

int main(){

    Numbers value = C;

    cout<<C<<endl;

    return 0;
}