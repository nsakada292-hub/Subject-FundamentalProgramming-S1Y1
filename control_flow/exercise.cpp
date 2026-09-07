#include<iostream>
using namespace std;

int main(){
    system("cls");

    string name;
    float hour,wage{}, bonus{},salary{},ori_salary{};
    char gender;

    cout<<"==============[[ Input ]]=============="<<endl;
    cout<<"Enter Your Name: ";cin>>name;
    cout<<"Enter Your Gender: ";cin>>gender;
    cout<<"Enter Worker Hours: ";cin>>hour;
    cout<<"Enter Worker Wage($): ";cin>>wage;

    ori_salary=hour*wage;
    if(hour>=100){
        if(gender=='F'){
            bonus=0.5;
        }else{
            bonus=0.4;
        }
    }

    salary=ori_salary*(1+bonus);    

    cout<<"==============[[ Output ]]=============="<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Gender: "<<gender<<endl;
    cout<<"Hours: "<<hour<<endl;
    cout<<"Wage($): "<<wage<<endl;
    cout<<"Bonus: "<<bonus<<endl;
    cout<<"Original Salary: "<<ori_salary<<endl;
    cout<<"Salary after Bonus: "<<salary<<endl;

    cout<<"========================================"<<endl;







    return 0;
}