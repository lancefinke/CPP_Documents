#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string, int>> pairlist_t;
//typedef std::string text_t;

//typedef has mostly been replaced with using:
using text_t = std::string;

int main(){
    
    /*pairlist creates new identitfier for datatype, helps readability
    pairlist_t pairlist;*/

    text_t name="Lance";//behaves like string

    std::cout<<name<<std::endl;

    return 0;
}