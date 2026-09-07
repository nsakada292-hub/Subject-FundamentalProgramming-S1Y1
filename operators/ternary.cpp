#include<iostream>
using namespace std;

int main(){
    system("cls");

    int numOfCar;
    cout<<"Enter your car: ";cin>>numOfCar;

    string unit=(numOfCar>=2)? " cars":" car";
    cout<<"You have "<<numOfCar<<unit<<endl;

    return 0;
}