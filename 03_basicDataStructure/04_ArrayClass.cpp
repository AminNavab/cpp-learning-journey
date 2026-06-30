#include<iostream>
#include<array>
using namespace std;
int main(){
    // array class like normal array but better !!!!!!!!!
    cout<< "**************************\n";
    // creat a array_class :
    // array - <type , size> - array_name;
    array<string, 5>cars_1;
    // array - <type , size> - array_name = {elements......};
    array<string, 3>cars_2 = {"bmw", "benz","volvo"};
    cout<<"***********************\n";
    // access array element :
    // (1) = array_name [index];
    cout<<cars_2[0]<<endl;
    cout<<cars_2[1]<<endl;
    cout<<cars_2[2]<<endl;
    cout<<"-------------------------\n";
    // (2) = array_name .at(index);
    cout<<cars_2.at(0)<<endl;
    cout<<cars_2.at(1)<<endl;
    cout<<cars_2.at(2)<<endl;
    cout<<"-------------------------\n";
    // first element :
    // array_name .front();
    cout<< cars_2.front()<<endl;
    // last element :
    // array_name .back();
    cout<<cars_2.back()<<endl;
    cout<<"*************************\n";

    return 0;
}