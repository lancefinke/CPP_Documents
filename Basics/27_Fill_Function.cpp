#include<iostream>

using namespace std;

int main(){

    //fill rande of elements with specified value: fill(begin,end,value)

    const int size = 100;
    
    string foods[size];

    fill(foods,foods+size/4/*size of array*/,"Chicken");
    fill(foods+size/4,foods+(size/4)*2/*size of array*/,"Beef");
    fill(foods+(size/4)*2,foods+(size/4)*3/*size of array*/,"Pork");
    fill(foods+(size/4)*3,foods+size/*size of array*/,"Lamb");


    for(string food:foods){
        cout<<food<<endl;
    }


    return 0;
}