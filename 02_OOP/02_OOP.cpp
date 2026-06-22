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
// creat a son class:
// class_son : public - father{
//      # code;
// };
class car_son : public car_father_1{
    public:
    string model;
    string color;
    void stop(){
        cout<<"car is stoping.....\n";
    }
    void set_price(int x){
        price = x;
    }
    int get_price(){
        return price;
    }
    private:
    int price;
};
// Multilevel Inheritance:
//             A class can also be derived from one class, which is already derived from another class.
class car_son_son : public car_son{
    public:
    void run(){
        cout<<"car is running.......\n";
    }
};
// Multiple Inheritance:
//            A class can also be derived from more than one base class.
class car_son_2father : public car_father_1, public car_father_2{
    public:
    void speed(int speed){
        cout<<"my car's speed is "<<speed<<" KM/H\n";
    }
    void set_x_1(int x){
        x_1 = x;
    }
    int get_x_1(){
        return x_1;
    }
    void set_x_2(int x){
        x_2 = x;
    }
    int get_x_2(){
        return x_2;
    }
};

int main(){
      return 0;
}