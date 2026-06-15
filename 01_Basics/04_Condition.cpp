#include<iostream>
using namespace std;
int main(){
// logical operator:
// && ==>> and  
// || ==>> or
// =! ==>> not(==)
// !  ==>> reverses the logical state of its operand (not)
//***************************************************** */
// if (condition){
  // ## code
  //}
// else if (conditio){
  // ## code
  //}  
// else{
  // ## code
  //}  
  int age;
  cout<<"enter your age:\n";
  cin>>age;
  if(age>=18){
    cout<<"you can drive\n";
  }
  else if (age<15){
    cout<<"you are a baby..........\n";
  }
  else{
    cout<<"you can'n drive!!!!!!!!!!!\n";
  }


return 0;
}