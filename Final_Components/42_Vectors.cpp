#include<iostream>
#include<vector>

using std::cout;
using std::endl;
using std::cin;

template<typename T>
void printVector(std::vector<T>& v){


    for(T p : v){
        p.display();
    }
    cout<<"___________"<<endl;
}


class Position
{
private:
    int x,y;
public:
    Position(int a, int b){
        this->x=a;
        this->y=b;
    }
    void display(){
        cout<<"("<<x<<","<<y<<")"<<endl;
    }
};

int main(){

    std::vector<Position> points;

    //adds values
    points.emplace_back(1,2);//creates an object based on parameters.
    points.emplace_back(5,3);//more strage efficient
    Position *pPos = new Position(4,8);
    points.push_back(*pPos);
    printVector(points);
    points.erase(points.begin()+1);//removes second element
    printVector(points);


    



    return 0;
}




