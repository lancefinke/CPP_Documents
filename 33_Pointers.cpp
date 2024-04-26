#include<iostream>

using namespace std;

int add(int a, int b);

int main(){

    //stores memory address of value
    //makes reference type easier

    // & - address of operator
    // * derefernce operator

    string name = "Bob";
    int age = 20;
    string pizzas[5] = {"P1","P2","P3","P4","P5"};

    //stores address of name variable
    string *pName = &name;
    int *pAge = &age;
    string *pPizzas = pizzas;//array is already memory address so '&' is not needed.

    cout<<pName<<endl;
    cout<<*pName<<endl;

    cout<<pAge<<endl;
    cout<<*pAge<<endl;

    int y=5;
    cout<<y<<endl;
    y = *pAge; //y is set to object at pAge address the star means your referencing value in memeory address
    cout<<y<<endl;

    //void pointer only points to an address, does not know what's in it

    int (*pAdd)(int,int) = add;//creates pointer to add

    int sum = (*pAdd)(5,3);//calls function
    cout<<sum<<endl;

    return 0;
}

//function pointers
int add(int a, int b){
    return a+b;

}