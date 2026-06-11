#include<iostream>
#include<vector>
#include<string>
using namespace std;


int main(){
    // type - name(identifier) = value
    // (1) int
    int a = 10;
    int b = -10;
    int a_1 = 100 , b_1 = -100 ;
    // (2) double
    double c = 10.10;
    double d = -10.10;
    double c_1 , d_1;
    // (3) float
    // (float == double) but double is better
    // (4) char => single character
    char e = 'a';
    char f = 'A';
    // *or*
    char a_2  = 65;
    char b_2 = 66;
    char c_2 = 67;
    cout <<a_2<<"-"<<b_2<<"-"<<c_2<<endl;
    // (5) boolean => true or false
    bool g = true;
    bool h = false;
    int w = 10;
    int w_1 = 11;
    cout<< (w_1>w) <<endl; 
    cout<< (w_1 == 11) <<endl; 
    cout<< (w_1==w) <<endl; 
    // (6) string
    // for string you should include <string> library
    string k = "abcdefghf.....";
    // *** initialization ***
    int x_1; // default initialization
    x_1 = 11;
    int x_2 = 11; // copy initialization
    int x_3(11); // direct initialization
    int x_4{11}; // unifrom initialization
    int x_5{5+6};







    return 0;

}