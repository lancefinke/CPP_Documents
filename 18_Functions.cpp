#include<iostream>

using namespace std;

void HappyBirthday(string name, int age);//needs to be declared here to be written after main function, otherwise it's not necessary.



int main(){

    HappyBirthday("Lance",19);
    
    
    return 0;
}

void HappyBirthday(string name, int age){
    cout<<"Happy Birthday to you\nHappy Birthday to you\nHappy Birthday dear "<<name<<"\nHappy Birthday to you"<<endl;
    cout<<name<<" is "<<age<<" years old.";

}