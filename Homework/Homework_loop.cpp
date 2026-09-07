#include<iostream>
using namespace std;

int main(){
    system("cls");

    int option;
while(true){
    cout<<"------------------------------------------------"<<endl;
    cout<<"===================[[ Menu ]]==================="<<endl;
    cout<<"------------------------------------------------"<<endl;

    cout<<"1. Salary Finder Program"<<endl;
    cout<<"2. Money Exchange Program"<<endl;
    cout<<"3. Calculator Program"<<endl; 
    cout<<"4. Exit"<<endl;
    cout<<"=> Choose your option (1-4):";cin>>option;

    if(option==4){
        cout<<"------------------------------------------------"<<endl;
        cout<<"===============(( Exit the MENU ))=============="<<endl;
        cout<<"------------------------------------------------"<<endl;break;
    }

    switch(option){
        case 1:{

            string name;
            float hour, wage, ori_salary{};
            char gender;

            cout<<"-------------------------------------------"<<endl;
            cout<<"============<< Salary Finder >>============"<<endl;
            cout<<"-------------------------------------------"<<endl;
            cin.ignore();
            cout<<"Enter your name: ";getline(cin, name);
            cout<<"Enter your gender: ";cin>>gender;
            cout<<"Enter your worker hours: ";cin>>hour;
            cout<<"Enter your  worker wage($): ";cin>>wage;

            ori_salary=hour*wage;

            cout<<"-------------------------------------------"<<endl;
            cout<<"=============<< Your salary >>============="<<endl;
            cout<<"-------------------------------------------"<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Gender: "<<gender<<endl;
            cout<<"Hours: "<<hour<<endl;
            cout<<"Wage($): "<<wage<<endl;
            cout<<"Salary: "<<ori_salary<<endl;

            cout<<"==============(( Thank You ))=============="<<endl;break;

        }
        case 2:{

            int option1;

            cout<<"--------------------------------------------"<<endl;
            cout<<"============<< Money Exchange >>============"<<endl;
            cout<<"--------------------------------------------"<<endl;
            cout<<"1. Exchange Money USD to KHR"<<endl;
            cout<<"2. Exchnage MOney KHR to USD"<<endl;
            cout<<"=> Choose an option to exchange your money: ";cin>>option1;

            switch(option1){
                case 1:{
                    float usd{},result1{};
                    cout<<"========Option [1]========"<<endl;
                    cout<<"Input your amount in USD: ";cin>>usd;

                    result1=usd*4000;

                    cout<<"result: "<<result1<<" riels"<<endl;break;
                }
                case 2:{
                    float khr{},result2{};
                    cout<<"========Option [2]========"<<endl;
                    cout<<"Input your amount in USD: ";cin>>khr;

                    result2=khr/4000;

                    cout<<"result: "<<result2<<" dollars"<<endl;break;
                }
                default:{
                    cout<<"Invalid Option, Please chose option (1-2).";
                }
            }
            cout<<"==============(( Thank You ))=============="<<endl;break;
        }
        case 3:{

            float value1, value2;
            int option;


            cout<<"--------------------------------------------"<<endl;
            cout<<"==========<< Calculator Program >>=========="<<endl;
            cout<<"--------------------------------------------"<<endl;
            cout<<"Enter Your Value 1: ";cin>>value1;
            cout<<"Enter Your Value 2: ";cin>>value2;
            cout<<"1. Sum "<<endl;
            cout<<"2. Minus "<<endl;
            cout<<"3. Mutiplyl "<<endl;
            cout<<"4. Divide "<<endl;
            cout<<"5.Exit "<<endl;
            cout<<"==> Choose one option to calculate(1-5): ";cin>>option;

            if(option==5){
                break;
            }

            switch(option){
                case 1:{
                    cout<<"Answer of option 1: "<<(value1+value2)<<endl;break;
                }
                case 2:{
                    cout<<"Answer of option 2: "<<(value1-value2)<<endl;break;
                }
                case 3:{
                    cout<<"Answer of option 3: "<<(value1*value2)<<endl;break;
                }
                case 4:{
                    if(value2==0){
                        cout<<"Invalid anwser, Make sure your value 2 > 0."<<endl;
                    }else{
                        cout<<"Answer of option 4: "<<(value1/value2);
                    }
                    break;
                }
            }
            cout<<"==============(( Thank You ))=============="<<endl;break;

        }
        }
    }










    return 0;
}