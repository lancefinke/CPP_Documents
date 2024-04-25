#include<iostream>

using namespace std;

int searchArray(int array[],int low, int high, int element);

int main(){

    int numbers[] = {1,2,3,4,5,6,7,8,9,10};
    int size  =sizeof(numbers)/sizeof(int);
    int index;
    int myNum;

    cout<<"Enter element to search for: \n";
    cin>>myNum;

    index=searchArray(numbers,0,size,myNum);

    if(index!=-1){
        cout<<myNum<<" is at index "<<index<<endl;
    }
    else{
        cout<<myNum<<" is not in array"<<endl;
    }

    
}

int searchArray(int array[],int low, int high, int element){

        int res=-1;

        if(high>low){
            int mid = (high+low)/2;
            
            if(array[mid]==element){
                res=mid;
            }   
            else if(array[mid]>element){
                res = searchArray(array,low,mid-1,element);
            }
            else if(array[mid]<element){
                res = searchArray(array,mid+1,high,element);
            }
        }

    return res;
    
}