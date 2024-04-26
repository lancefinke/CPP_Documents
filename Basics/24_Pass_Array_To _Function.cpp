#include<iostream>

using namespace std;

double getTotal(double prices[], int size);

int main(){

    double prices[] = {49.99,19,99,9.99,99.99};
    int size = sizeof(prices)/sizeof(double);

    double total = getTotal(prices,size);

    cout<<"$"<<total<<endl;

    return 0;
}

double getTotal(double prices[], int size){
    double total=0;

    for(int i=0;i<size;i++){
        total+=prices[i];
    }

    return total;
}