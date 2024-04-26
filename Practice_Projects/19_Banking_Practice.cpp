#include<iostream>
#include <iomanip>

void showBalance(double balance);
double deposit();
double withdraw(double balance);

using namespace std;

int main(){

    double balance = 0;
    int choice = 0;

    do{
    
    cout << "Enter your Choice:\n";
    cout<<"\n1) Show Balance\n";
    cout<<"2) Deposit Money\n";
    cout<<"3) Withdraw Money\n";
    cout<<"4) Exit\n";
    cin>>choice;

    cin.clear();
    fflush(stdin);
    //helps handle exceptions

    switch(choice){
        case 1: showBalance(balance);
                break;
        case 2: balance += deposit();
                showBalance(balance);
                break;
        case 3: balance-=withdraw(balance);
                showBalance(balance);
                break;
        case 4: cout<<"Thanks for Visiting!";
                break;
        default:cout<<"Invalid Input";
                break;
    }}while(choice!=4);

    return 0;
}

void showBalance(double balance){
    cout<<"Your Balance is: $"<<setprecision(2)<<fixed<<balance<<endl;
    //setpercision rounds to nearest 2 decimal places
}

double deposit(){

    double amount;
    cout<<"How much do you want to Deposit?: ";
    cin>>amount;

    if(amount>0){
        return amount;
    }

    else{
        cout<<"That's not a valid amount\n";
    }
    return 0;
}

double withdraw(double balance){
        double amount;

        cout<<"How much do you want to Withdraw?: ";
        cin>>amount;

        if(amount>0 && amount<balance){
            return amount;
        }

        else{
            cout<<"Insufficient Funds or not valid amount\n";
        }
    return 0;
}

