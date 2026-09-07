#include<iostream>
using namespace std;
class BankAccout{
    private:
        double balance;
    public:
        void deposit(double amount){
            if(amount>0){
                balance += amount;
                cout<<"Successfully Deposit!"<<endl;
                cout<<"You have deposit : "<<amount<<"$"<<endl;
            }
        }
        void withdraw(double amount){
            if(amount>0 && amount<=balance){
                balance -= amount;
                cout<<"You have withdraw : "<<amount<<"$"<<endl;
            }else{
                cout<<"Insufficient funds or invalid amount"<<endl;
            }
        }
        double getBalance(){return balance;}
};
int main(){
    system("cls");
    BankAccout acc1;
    acc1.deposit(1000);
    acc1.deposit(2000);
    acc1.withdraw(500);
    cout<<"Your balance is : "<<acc1.getBalance()<<endl;
    return 0;
}