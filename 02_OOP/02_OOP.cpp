#include<iostream>
using namespace std;
// creat a father_1 class;
class car_father_1{
    public:
    int year = 2020;
    string brand;
    void start(){
        cout<<"car is starting......\n";
    }
    protected:
    int x_1;
};
// creat a father_2 class;
class car_father_2{
    public:
    void hock(){
        cout<<"booog...booog...boood......\n";
    }
    protected:
    int x_2;
};
int main(){
      return 0;
}