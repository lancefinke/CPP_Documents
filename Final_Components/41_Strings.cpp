#include<iostream>
#include<string>

using std::cout;
using std::string;

void Print(const string& str){
    cout<<str<<"\n";
}

int main(){

    const char* word = "Block";

    cout<<word[0]<<std::endl;

    string name = "Bob";
    string str = "Lock";
    cout<<name.size()<<std::endl;
    cout<<str.find("Lo")<<std::endl;

    Print(word);
    Print(name);
    Print(str);



    


    return 0;
}


