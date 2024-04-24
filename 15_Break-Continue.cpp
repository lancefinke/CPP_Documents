#include<iostream>

using namespace std;

int main(){

    for(int i=1;i<=20;i++){
        if(i==13){
            continue;//skips 13 iteration
        }
        if(i==18){
            break;//stops loop early
        }
        cout<<i<<"\n";
    }

    return 0;
}