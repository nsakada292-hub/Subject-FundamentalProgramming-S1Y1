#include<iostream>
using namespace std;

int main(){
    system("cls");

    string name;
    char gender;
    float hour, wage, salary{}, tax{}, original_salary{};

    cout<<"|--------------------------------------------|"<<endl;
    cout<<"|=============[[ Input Worker ]]=============|"<<endl;
    cout<<"|--------------------------------------------|"<<endl;
    cout<<"\n";

    cout<<"Enter your Name: ";cin>>name;
    cout<<"Enter your Gender: ";cin>>gender;
    cout<<"Enter worker Hour: ";cin>>hour;
    cout<<"Enter worker Wage($): ";cin>>wage;
    cout<<"\n";

    original_salary = hour*wage;
    if(original_salary>=1000){
        if(gender=='f' || gender=='F'){
        tax=0.3;
        }else{
        tax=0.5;
        }
    }

    salary=original_salary*(1-tax);

    cout<<"|--------------------------------------------|"<<endl;
    cout<<"|==========[[ Worker information ]]==========|"<<endl;
    cout<<"|--------------------------------------------|"<<endl;
    cout<<"\n";

    cout<<"Name: "<<name<<endl;
    cout<<"Gender: "<<gender<<endl;
    cout<<"Hour: "<<hour<<endl;
    cout<<"Wage($): "<<wage<<endl;
    cout<<"Salary before tax: "<<original_salary<<"$"<<endl;
    cout<<"tax: "<<(tax*100)<<"%"<<endl;
    cout<<"Salary after tax: "<<salary<<endl;
    cout<<"\n";

    cout<<"|--------------------------------------------|"<<endl;
    cout<<"|==============[[ Thank You! ]]==============|"<<endl;
    cout<<"|--------------------------------------------|"<<endl;


    return 0;
}