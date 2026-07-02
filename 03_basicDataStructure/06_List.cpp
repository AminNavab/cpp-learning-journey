#include<iostream>
#include<list>
using namespace std;
int main(){
    // List = A list is similar to a vector in that it can store
    //            multiple elements of the same type and dynamically grow in size.
    // # NOTE # = Unlike vectors, a list does not support random access,
    //              meaning you cannot directly jump to a specific index, or access elements by index numbers.

    // creat a list :
    // (1) : list - <type> - list_name;
    list<string>cars_1;
    // (2) : list - <type> - list_name = {elements.....};
    list<string>cars_2 = {"bmw","benz","volvo"};
    for(string i : cars_2){
        cout<< i<< endl;
    }
    cout<< "********************************\n";

    return 0;
}
