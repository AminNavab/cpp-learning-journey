#include<iostream>
#include<set>
using namespace std;
int main(){
    // Set = A set stores unique elements where they:
    // *1* = Are sorted automatically in ascending order.
    // *2* = Are unique, meaning equal or duplicate values are ignored.
    // *3* = Can be added or removed, but the value of an existing element cannot be changed.
    // *4* = Cannot be accessed by index numbers, because the order is based on sorting and not indexing.
    cout<<"**********************\n";
    // Elements in a set are unique, which means they cannot be duplicated or equal.
    // For example, if we try to add "BMW" two times in the set, the duplicate element is ignored.

    // creat a set :
    // (1) = set - <type> - set_name;
    set<string>cars_1;
    
    // (2) = set - <type> set_name = {elements.....};
    set<string>cars_2 = {"bmw","benz","bmw","benz","bmw","volvo","ford"};
    for(string i : cars_2){
        cout<< i<< endl;
    }

    set<int>number = {1,8,6,4,5,3,2,7,9,4,5,7,8,6,1,2,3,8,7};
    for(int i : number){
        cout<< i<< endl;
    }
    cout<<"**************************\n";
    return 0;
}