#include <iostream>
#include <string>



int main(){

    std::string name;
    int age;

    std::cout<<"What's your full name? ";
    std::getline(std::cin>> std::ws, name);//ws lets you add spaces to input

    std::cout<<"How old are you? ";

    std::cin>>age;

    std::cout<<"Hello "<<name<<" You are "<<age<<" years old!"<<std::endl;
    

    return 0;
}