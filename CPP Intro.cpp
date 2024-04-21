#include <iostream>

int main(){

    //variables are similar to other languages
    int x=5;//integrr
    double gpa=3.5;//double
    char c = 'A';//character

    bool on =true;//boolean
    bool off = !on;

    //string
    std::string str = "Hello World"; 

    //const keyword specifies a variable is constant
    const double PI = 3.14159265;
    int radius  = 3;
    double area = PI*(radius*radius);

    
    std::cout << x << '\n';
    std::cout << gpa << '\n';
    std::cout << c << '\n';
    std::cout << std::boolalpha<< on <<'\n';//boolalpha makes it display the word instead of 1 or 0
    std::cout << std::boolalpha << off <<'\n';
    std::cout << str << '\n';
    std::cout << area << '\n';
    
    return 0;
    
}