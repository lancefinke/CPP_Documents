#include<iostream>

using namespace std;

int main(){

    //allocated after progtam is alreayd compiled and running
    //useful when memeory is unknown, ex: user input

    int *pNum = NULL;

    pNum = new int;

    *pNum=21;

    cout<<"Address: "<<pNum<<endl;
    cout<<"Value: "<<*pNum<<endl;

    int *pGrades = NULL;

    int size;
    cout<<"How many grades to enter in: ";
    cin>>size;

    pGrades = new int[size];//dynamic memory is used when length is unknown

    for(int i=0;i<size;i++){
        cout<<"Enter a Grade: "<<i+1<<": ";
        cin>>pGrades[i];
    }
    for(int i=0;i<size;i++){
        cout<<pGrades[i]<<endl;
    }

    delete[] pGrades;

    delete pNum;//prevents memory leak

    

    return 0;
}