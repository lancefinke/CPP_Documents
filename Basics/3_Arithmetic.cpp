#include <iostream>

using std::cout;
using std::endl;

int main(){

    int students = 20;
    students++;//uses same operators like ++,--,+=2,-=2,etc
    cout<<students<<endl;

    students*=2;//multiplication

    cout<<students<<endl;
    students/=2;//divion that result in decimal are truncated with integers, need double type to see decimal

    int remainder = students%3;//finds remainder
    cout<<students<<endl;

    //paritheses work the same as other languages

    cout<<students<<endl;

    return 0;
}