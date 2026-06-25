#include<iostream>
using namespace std;

int main(){
    // array = a data structure that can hold multiple values
    //         values are accessed by an index number(start by 0 !)
    //         "kind of like a variable that holds multiple values"
    
    // creat array :
    // type - array_name - [size] = {........................};
    // (1)
    string car[] = {"bmw","benze","ferrari","corvet"};
    // (2)
    string car_1[2];
    car_1[0] = "mustang";
    car_1[1] = "camary";
    // access :
    cout<<car[0]<<endl;
    cout<<car[1]<<endl;
    cout<<car[2]<<endl;
    cout<<car[3]<<endl;

    cout << car_1[0] <<endl << car_1[1]<< endl;
    cout<<"***********************************\n";
    // edit item
    car[3] = "camaro";
    cout<< car[3]<<endl;
    car_1[0]  = "toyota";
    cout<<car_1[0]<<endl;
    cout<<"**************************************\n";
    // add ==>> in array we can't add new_element
    cout<<"*******************************\n";
    // size of()
    // The number of elements = sizeof(array_name) / sizeof(array_type)
    int num[] = {1,2,3,4,5,6};
    string name[] = {"1","2","3"};
    double num_1[] = {1,2,3,4,5,6};
    char name_1[] = {'a','b','c'};
    cout<<sizeof(num)<<" - "<<sizeof(int)<<" - "<<"The number of elements = "<<sizeof(num)/sizeof(int)<<endl;
    cout<<sizeof(name)<<" - "<<sizeof(string)<<" - "<<"The number of elements = "<<sizeof(name)/sizeof(string)<<endl;
    cout<<sizeof(num_1)<<" - "<<sizeof(double)<<" - "<<"The number of elements = "<<sizeof(num_1)/sizeof(double)<<endl;
    cout<<sizeof(name_1)<<" - "<<sizeof(char)<<" - "<<"The number of elements = "<<sizeof(name_1)/sizeof(char)<<endl;
    cout<<"****************************************\n";
    return 0;
}