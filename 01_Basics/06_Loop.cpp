#include<iostream>
using namespace std;
int main(){
    // while loop:
    // while(condition){
    //    ## code;
    // }
    int a = 0;
    while (a<10){
        cout<<a<<endl;
        a++;
    }
    // ## if condition==true : infinity loop ##
    cout<<"************************** \n";

    // do while loop  ==>> do some block of code first,then repeat again if condition is true:
    // do{
    //    ## code;
    // } while(condition) ;
    int b = 0;
    do{
        cout<<b<<endl;
        b++;
    }while (b<7);

    cout<<"************************** \n";
}