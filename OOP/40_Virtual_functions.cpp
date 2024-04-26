#include<iostream>

using std::endl;

//Utilize dynamic dispatch
//allows for inheritance overloding
//the case below prevent

class Parent
{
private: 
    int a;
public: 
    Parent(int a){
        this->a=a;
    }
    int getNum(){
        return a*3;
    };
    void toString(){
        std::cout<<"Number: "<<a<<endl;
    }
};


class Child : public Parent
{
private:
    std::string word;
public:
    Child(int a, std::string word):
    Parent(a){this->word=word;}


    std::string getWord(){
        return word;
    }

    void toString(){
        std::cout<<"Number: "<<this->getNum()<<" Word: "<<word<<endl;
    }
};

void foo(Parent& p){
    std::cout<<p.getNum()<<endl;
}

void fum(Child& c){
    std::cout<<c.getWord()<<endl;
}

int main(){

    Parent* p = new Parent(10);
    Child* c = new Child(10,"House");

    Parent* imposter = new Child(8,"Hill");

    std::cout<<p->getNum()<<endl;
    std::cout<<c->getWord()<<endl;

    foo(*c);//works
    foo(*p);
    //fum(*p); wiould not work
    fum(*c);

    p->toString();
    c->toString();

    imposter->toString();//would not work without virtual funciton

    



    return 0;
}