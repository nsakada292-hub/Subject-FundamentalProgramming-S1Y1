#include<iostream>
using namespace std;

class Car{
public:
    virtual void startEngine()=0;   // kom plex =0
};

class Tesla : public Car{
public:
    void startEngine() override{
        cout<<"Tesla engine start"<<endl;
    }
};

class Toyota : public Car{
public:
    void startEngine() override{
        cout<<"Toyota start engine"<<endl;
    }
};

int main(){
    system("cls");

    Car* c;

    Tesla t;
    Toyota y;

    c=&t;
    c->startEngine();

    c=&y;
    c->startEngine();

    return 0;
}