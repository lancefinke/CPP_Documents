#include<iostream>

using namespace std;

int main(){

    string students[] = {"Bob","Billy","Greg"};

    int studentsLen = sizeof(students)/sizeof(string);

    for(int i=0;i<studentsLen;i++){
        cout<<students[i]<<"\n";
    }

    for(string s : students){
        cout<<s<<"\n";
    }

    return 0;
}