#include<iostream>

using namespace std;

void swap(string &x, string &y);

int main(){

    string x = "Pepsi";
    string y = "Coke";

    swap(x,y);
    //passing variable to function only passes value, not actual variable
    //reference uses memory addres
    
    cout<<"x: "<<x<<"\ny: "<<y<<endl;

    return 0;
}

void swap(string &x, string &y){//add meory address to values
    string temp;
    temp=x;
    x=y;
    y=temp;
}