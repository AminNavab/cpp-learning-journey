#include<iostream>
using namespace std;
class point{
    private:
    int x;
    int y;
    public:
    point(int = 0, int = 0);
    ~point();
    void set_x(int a){x = a;}
    int get_x(){return x;}
    void set_y(int b){y = b;}
    int get_y(){return y;}
    void display();
};
point :: point(int a, int b):x(a), y(b){
    cout<<"it's constructor function\n";
}
point :: ~point(){
    cout<<"it's ~constructor function\n";
}
void point :: display(){
    cout<<"("<<x<<" , "<<y<<")\n";
}