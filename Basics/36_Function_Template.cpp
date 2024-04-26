#include<iostream>
#include<iostream>

using std::cout;
using std::endl;
using std::cin;
using std::string;

template<typename T>//T is standard for template name, can also be written was class
void Print(T value){
    cout<<value<<endl;
}

template<int N>
class Array
{
private:
    int myArray[N];

public:
    int getSize() const {return N;}

};

//only created when fucntion is called



int main(){

    //used to create a function that is similar but takes in different types
    Print<int>(5);//type int is specified, not always necessary
    
    Array<5> array;//creates array class with length of 5;
    cout<<array.getSize()<<endl;


    return 0;
}

