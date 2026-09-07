#include<iostream>
using namespace std;


float usd_to_khr(){
    float usd, result,rate;
    rate=4000;
    cout<<"Enter your amount($): ";cin>>usd;
    result=usd*rate;
    cout<<"Result is: "<<result<<" riels"<<endl;
    
    return result;
}






float usd_to_khr_v2(float usd, float rate){
    return usd*rate;
}



int main(){
    system("cls");

    float riels=usd_to_khr();           // yg ban oy domlai function ng tv oy riels 
    riels+=1000;                          // nus pel yg trv ka domlai lbos function ng tt yg kron tea yk pi riels or ban dea
    cout<<"Riels is: "<<riels<<" riels"<<endl;





    

    const int RATE=4000;
    float result=usd_to_khr_v2(10, RATE);
    cout<<"10 -> KHR : "<<result<<" riels"<<endl;
    cout<<"20 -> KHR : "<<usd_to_khr_v2(20, RATE)<<" riels"<<endl;
    cout<<"30 -> KHR : "<<usd_to_khr_v2(30, RATE)<<" riels"<<endl;


    return 0;
}  