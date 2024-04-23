#include<iostream>

using namespace std;

int main(){

    char op;
    double num1;
    double num2;
    double answer;
    try{
        cout<<"----------------------------------------"<<endl;
        cout<<"Select an operator: (+ - / *): ";
        cin>>op;
        cout<<"----------------------------------------"<<endl;

        cout<<"Enter first Number: ";
        cin>>num1;
        cout<<"----------------------------------------"<<endl;
        cout<<"Enter a second Number: ";
        cin>>num2;
        cout<<"----------------------------------------"<<endl;
        switch(op){
            case '+':
                cout<<"Answer: "<<num1+num2;
                break;
            case '-':
                cout<<"Answer: "<<num1-num2;
                break;
            case '/':
                cout<<"Answer: "<<num1/num2;
                break;
            case '*':
                cout<<"Answer: "<<num1*num2;
                break;
            default:
                cout<<"Invalid Operator type used";
                break;
        }


    }catch(int e){
        cout<<"Invalid values entered.";
    }
    
    cout<<"\n----------------------------------------"<<endl;
    
    

    

    return 0;
}