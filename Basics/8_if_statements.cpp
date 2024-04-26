#include<iostream>

using namespace std;

int main(){

    //more or less same as other c derived languages

    cout<<"Enter a Number: ";
    int x;
    cin>>x;

    if(x>9){
        cout<<"Your number has more than 1 digits!";
    }
    else if(x>99){
        cout<<"Your number has more than 2 digits!";
    }
    else if(x<0){
        cout<<"Your number is negative";
    }
    else{
        cout<<"Your number is between 0 and 9";
    }

    return 0;
}