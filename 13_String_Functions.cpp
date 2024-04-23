#include<iostream>
#include<string>

using namespace std;

int main(){

    string name;
    cout<<"Enter your name: ";
    getline(cin>>ws,name);

    if(name.length()>30){
        cout<<"Name is too long."<<endl;
    }

    if(name.empty()){
        cout<<"You didn't enter your name."<<endl;
    }

    //string.clear() removes all characters

    else{
        cout<<"Hello "<<name.append("!")<<endl;
    }

    cout<<"First Letter is: "<<name.at(0)<<endl;

    cout<<name.insert(name.length()-1,"@icloud.com")<<endl;

    //string.erase(start index,end index) chooses characters to delete. 

}