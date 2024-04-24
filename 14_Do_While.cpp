#include<iostream>

using namespace std;

int main(){

    int number;

    do{
        cout<<"Enter a positive Number: ";
        cin>>number;
    }while(number<0);

    cout<< "The Number is "<<number;

    return 0;
}