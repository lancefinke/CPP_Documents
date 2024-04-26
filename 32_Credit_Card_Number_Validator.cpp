#include<iostream>

using namespace std;

/*Luhn Algorithm:
1. Double every second Digit from right to left,
   if doubled digit number is 2 digits, split them
2. add all single digits from step 1.
3. add all odd digits from right to left
4. sum results of step 2 & 3
5. If step 4 is divisible by 10, number is valid.
*/

int getDigit(const int number);
int sumOdd(const string cardNumber);
int sumEven(const string cardNumber);

int main(){

    string cardNumber;
    int result = 0;

    cout<<"Enter your card Number: ";
    cin>>cardNumber;

    result = sumEven(cardNumber) + sumOdd(cardNumber);

    if(result%10==0){
        cout<<"The Credit Card Number is Valid";
    }
    else{
        cout<<"The Credit card Number is not Valid";
    }


    return 0;
}

int getDigit(const int number){

    return number%10+(number/10%10);
}
int sumOdd(const string cardNumber){
    int sum=0;

    for(int i = cardNumber.size()-1;i>=0;i-=2){
        sum+=cardNumber[i] - '0';
    }

    return sum;
}
int sumEven(const string cardNumber){

    int sum=0;

    for(int i = cardNumber.size()-2;i>=0;i-=2){
        sum+= getDigit((cardNumber[i] - '0') *2);
    }

    return sum;
}

