#include<iostream>
#include<map>
using namespace std;
int main(){
    // map = key - value
    // # Accessible by keys (not index), and each key is unique.
    // # Automatically sorted in ascending order by their keys.
    // NOTE = A map cannot have elements with equal keys.
    //             For example, if we try to add "Jenny" two times to the map, it will only keep the first one:
    //      *** To sum up; values can be equal, but keys must be unique.***
    cout<<"********************************************\n";
    // creat a map :
    // (1) = map - <type_key , type_value> - map_name;
    map<string,double>numbers_1;
    // (2) = map - <type_key , type_value> - map_name = {{key_element , value_element}};
    map<string, int>numbers_2 = {{"one", 1},{"two", 2},{"three", 3}};
    cout<<"********************************\n";
    // access a map (access a map_value) :
    // (1) = you can access a map element by referring to its key inside square brackets []:
    // map_name [key];
    cout<< numbers_2["one"]<<endl;
    cout<< numbers_2["two"]<<endl;
    cout<< numbers_2["three"]<<endl;
    // (2) = use .at:
    // map_name.at(key);
    // NOTE = Note: The .at() function is often preferred over square brackets [],
    //                    because it throws an error message if the element does not exist:
    cout<< numbers_2.at("one")<< endl;
    cout<< numbers_2.at("two")<< endl;
    cout<< numbers_2.at("three")<< endl;
    cout<<"********************************\n";
    // change map element (change value) :
    // (1) = map_name [key] = new_value;
    numbers_2["one"] = 11;
    numbers_2["two"] = 22;
    // (2) = map_name .at(key) = new_value;
    numbers_2.at("three") = 33;
    cout<< numbers_2.at("one")<< endl;
    cout<< numbers_2.at("two")<< endl;
    cout<< numbers_2.at("three")<< endl;
    cout<<"********************************\n";
    // add map element(key - value) :
    // (1) = map_name [new_key] = new_value;
    numbers_1["one"] = 1.1;
    numbers_1["two"] = 2.2;
    numbers_1["three"] = 3.3;
    numbers_1["four"] = 4.4;
    // (2) = map_name .insert({new_key , new_value});
    numbers_2.insert({"four", 44});

    cout<< numbers_1["one"]<<endl;
    cout<< numbers_1["two"]<<endl;
    cout<< numbers_1["three"]<<endl;
    cout<< numbers_1["four"]<<endl;
    cout<<"------------------------\n";
    cout<< numbers_2.at("one")<< endl;
    cout<< numbers_2.at("two")<< endl;
    cout<< numbers_2.at("three")<< endl;
    cout<< numbers_2.at("four")<< endl;
    cout<<"**************************************\n";
    return 0;
}