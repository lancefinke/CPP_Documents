#include<iostream>

using namespace std;

int main(){

    //can be accessed with & symbol;
    //location where data is stored

    string name = "Bob";
    int num = 10;
    bool passed = true;

    cout<<&name<<endl;//4 bytes
    cout<<&num<<endl;//1byte
    cout<<&passed<<endl;//1byte

    //print out address in hesadecimal


    return 0;
}