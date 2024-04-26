#include<iostream>

//structs are public by default
//funcitons do not need plublic key word

struct Player
{
    std::string name;
    int xPosition;
    int xSpeed;

    void move(){
        xPosition+=xSpeed;
    }
};

int main(){

    Player p1;
    p1.name="Bob";
    p1.xPosition=0;
    p1.xSpeed=5;

    std::cout<<p1.xPosition<<std::endl;
    p1.move();
    std::cout<<p1.xPosition<<std::endl;

    return 0;
}