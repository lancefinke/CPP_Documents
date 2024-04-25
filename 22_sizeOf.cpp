#include<iostream>


using namespace std;

int main(){

    //sizeof returns size in bytes of variable, string, class

    int age = 19;

    char c = 'A';

    string name = "Bobby";

    bool student = true;

    int nums[] = {1,2,3,4,5};

    cout<<sizeof(age)<<endl;//prints 4
    cout<<sizeof(c)<<endl;//prints 1
    cout<<sizeof(name)<<endl;//prints 32, the address size of the string, not the size of the string
    cout<<sizeof(student)<<endl;//prints 1
    cout<<sizeof(nums)<<endl;//prints length of array*sizeof(element) in this case 5*4=20

    cout<<sizeof(nums)/sizeof(int)<<endl;//prints length of array


    return 0;
}