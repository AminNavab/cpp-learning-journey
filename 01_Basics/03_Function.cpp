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
// ***** Functions that return a value to the main function****
// return = return a value back the spot , where you called the encompassing function
//(2) int
int number();
int number_1(int num_1);
// (3) double
double number_2();
double number_3(double num_5);



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
    //(2) int
    int num_a{number()};
    cout<<num_a * 2<<"\n";
    int num_b = number();
    cout<<num_b * 2<<"\n";

    int num;
    cout<<"enter your number_3: \n";
    cin >> num;
    int num_c{number_1(num)};
    int num_d = number_1(num);
    cout<<num_c + 1<<endl;
    cout<<num_d + 2<<endl;
    cout<<"\n********************************\n";
    //(3)
    double num_e = number_2();
    cout<< num_e<<endl;

    double num_x;
    cout<<"enter number_5:\n";
    cin>>num_x;
    double num_f = number_3(num_x);
    cout<<num_f<<endl;
    cout<<"************************************\n";

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
// ***** Functions that return a value to the main function****
// return = return a value back the spot , where you called the encompassing function
//(2) int
int number(){
    cout<<"enter number_1\n";
    int num{};
    cin>>num;
    return num;
}     
int number_1(int num_1){
    int x = num_1 * num_1;
    return x;
}

// (3) double
double number_2(){
    double num_4;
    cout<<"enter number_4:\n";
    cin>>num_4;
    double y = num_4 * 2;
    return y;
}
double number_3(double num_5){
    double y_1 = num_5 * 5;
    return y_1;
}