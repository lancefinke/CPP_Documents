#include<iostream>

int main(){

    //Null value is a special value that means something has no value

    int *pointer = nullptr;
    int x=123;

    pointer = &x;//dereferences pointer

    if(pointer == nullptr){
        std::cout<<"Address was not assigned";
    }

    else{
        std::cout<<"Address was assigned";
    }

    return 0;
}