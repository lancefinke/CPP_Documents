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

template<typename T , int N>
class Array
{
private:
    T myArray[N];//creates array of type T and size N

public:
    int getSize() const {return N;}

};

//only created when fucntion is called



int main(){

    //used to create a function that is similar but takes in different types
    Print<int>(10);//type int is specified, not always necessary
    
    Array<int,5> array;//creates array class of ints with length of 5;
    cout<<array.getSize()<<endl;


    return 0;
}



