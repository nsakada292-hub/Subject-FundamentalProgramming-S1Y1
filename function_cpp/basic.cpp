#include<iostream>
using namespace std;


                                              // void = no value (return nothing)
void greeting(string subject){                    // nv knong (...) ke hv tha parameter 
    cout<<"========================="<<endl;         // hx parameter ng doch tv ng variable jg kue vea ot mean domai teh
    cout<<"Welcome to "<<subject<<"!"<<endl;           
    cout<<"========================="<<endl;
}

                                // pel ke sse letter nv knong argument ("...") khang krom nus vea ng jg jol tv knong paramter

int main(){
system("cls");
                           // call a function (to invoke the function)
greeting("C++ Programming");          // value nv knong ("...") yg hv vea tha argument
greeting("Web Design");               // agrument jea value muy dea mean domlai

return 0;

}