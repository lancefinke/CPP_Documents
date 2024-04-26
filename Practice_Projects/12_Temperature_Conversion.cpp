#include<iostream>

using namespace std;

int main(){

    double temp;
    cout<<"Enter a temperature: ";
    cin>>temp;
    
    int conversion;
    cout<<"Enter a number based on conversion you wish to make:\n1.Celcius to Fahrenheit\n2.Fahrenheit to Celcius\n";
    cin >>conversion;

    switch(conversion){
        case 1:
            cout<<"Temperature in Fahrenheit: "<<(temp*1.8)+32;
            break;
        case 2:
            cout<<"Temperature in Celcius: "<<(temp-32)/1.8;
            break;
        default:
            cout<<"Only enter in 1 or 2 please";
    }



    return 0;
}