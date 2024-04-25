#include<iostream>

using namespace std;

void bubbleSort(int arr[],int size);

int main(){

    int arr[] = {3,7,5,2,8,7,4,10,281,6,27,-9,-6,83};
    int size = sizeof(arr)/sizeof(int);
    cout<<"[";

    for(int i:arr){
        cout<<" "<<i<<" ";
    }
    cout<<"]\n";

    bubbleSort(arr,size);

    cout<<"[";

    for(int i:arr){
        cout<<" "<<i<<" ";
    }
    cout<<"]";




    return 0;
}

//not efficient algorithm, just practitcing with for loops and logic
void bubbleSort(int arr[], int size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

