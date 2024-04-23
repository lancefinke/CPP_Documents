#include <iostream>

//changing one data type to another

int main(){

    double x = (int) 3.14;//turns 3.14 into 3

    char c = 100; //explicity cast 100 to d (it's ascii value)

    std::cout<<c<<std::endl;

    //test score example
    int correct = 8;
    int total =10;
    double score = correct/(double)total *100;

    std::cout<<score<<"%";




    return 0;
}