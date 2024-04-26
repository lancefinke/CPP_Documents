#include<iostream>

using namespace std;

int main(){

    string questions[] = {"\n1. What year was C++ created?",
                          "\n2. Who invented C++?",
                          "\n3. What is the Predecessor of C++?",
                          "\n4. C++ supports a type of programming defined by having object classes, inheritance, and polymorphism: _______"};


        string options[][4] = {{"A. 1972", "B. 1991", "C. 1985", "D. 1995"},
                               {"A. Guido Van Rossum", "B. Bjarne Stroustrup", "C. Dennis Ritchie", "D. James Gosling"},
                               {"A. C","B. B++","C. C+","D. C--"},
                               {"A. Frontend","B. Backend","C. Dynamic", "D. Object Oriented"}};


        char answerKey[] = {'c','b','a','d'};

        int size = sizeof(questions)/sizeof(string);
        char input;
        int score=0;

        for(int i=0;i<size;i++){
            cout<<questions[i]<<endl;

            for(int j=0;j<sizeof(options[i])/sizeof(options[i][0]);j++){
                cout<<options[i][j]<<endl;
            }

            cout<<"Your Answer: ";
            cin>>input;

            char answer = (char)tolower(input);

            if(answer==answerKey[i]){
                score+=10;
                cout<<"CORRECT!"<<endl;
            }
            else{
                cout<<"INCORRECT"<<endl;
                cout<<"Correct answer was "<<(char)toupper(answerKey[i])<<endl;
            }


        }

        cout<<"-------------------------------\nFinal Score: "<<score<<endl;


    return 0;
}