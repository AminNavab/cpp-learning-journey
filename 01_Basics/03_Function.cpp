#include<iostream>
using namespace std;
// function = a block of reusable code 
// type  function_name(){
//    ## code;
// }
// (1) => Nothing is returned to the main function.
void human();
void human_1(string name_2);
void print_array_1(int array_1[5]);
void print_array_2(int array_2[], int size);
int main(){
        //(1) void
    human();
    string name_2;
    cout<<"tell me your name_1:\n";
    cin>>name_2;
    human_1(name_2);
    human_1("amin_3");
    int array_a[5] = {1,2,3,4,5};
    print_array_1(array_a);
    int size = 9;
    int array_aa[size] = {1,2,3,4,5,6,7,8,9};
    print_array_2(array_aa, size);
    cout<<"********************************\n";

    return 0;
}


// (1) =>  Nothing is returned to the main function.
void human(){
    string name_1{};
    cout << "tell me your name_1\n";
    cin>> name_1;
    cout<<"hello "<<name_1<<"\n";
}
void human_1(string name_2){
    cout<<"hello "<<name_2<<"\n";
}
void print_array_1(int array_1[5]){
    for(int i = 0; i<5; i++){
        cout<< array_1[i]<<endl;
    }
    cout<<"*********\n";
}
void print_array_2(int array_2[], int size){
    for(int i = 0; i<=size; i++){
        cout<< array_2[i]<<endl;
    }

}