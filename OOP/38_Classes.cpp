#include<iostream>

using std::cout;
using std::cin;
using std::endl;


class Car
{

private:
    std::string m_make;
    std::string m_model;
    std::string m_year;
    int m_miles;
    std::string m_color;
public:
    Car(){
        this->m_make = "Ford";
        this->m_model="F-150";
        this->m_year="2000";
        this->m_miles=100000;
        this->m_color="black";
    }

    Car(std::string make,std::string model,std::string year,int miles,std::string color){
        this->m_make = make;
        this->m_model = model;
        this->m_year = year;
        this->m_miles = miles;
        this->m_color = color;

    }
    std::string getColor(){
        return m_color;
    }
    void paint(std::string color){
        m_color=color;
    }
    std::string getMake(){
        return m_make;
    }
    std::string getModel(){
        return m_model;
    }
    std::string getYear(){
        return m_year;
    }
    int getMiles(){
        return m_miles;
    }
    void drive(int distance){
        m_miles=m_miles+distance;
    }
};

int main(){

    Car car("Toyota","Corolla","2024",100,"White");
    cout<<car.getColor()<<endl;
    car.paint("red");
    cout<<car.getColor()<<endl;
    cout<<car.getMake()<<endl;
    cout<<car.getModel()<<endl;
    cout<<car.getYear()<<endl;
    cout<<car.getMiles()<<endl;
    car.drive(50);
    cout<<car.getMiles()<<endl;
    

    return 0;
}