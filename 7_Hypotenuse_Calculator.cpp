#include<iostream>
#include<cmath>

using namespace::std;

int main(){

    double a,b,c;

    cout<<"Enter side length for A: ";
    cin>>a;

    cout<<"Enter side length for B: ";
    cin>>b;

    a=pow(a,2);
    b=pow(b,2);

    c=sqrt(a+b);

    cout<<"The Hypotenuse length is: "<<c<<endl;

    return 0;
}