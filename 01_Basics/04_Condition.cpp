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

 // switch - cass ==>> for long cindition
  // switch(vriable){
     // case - condition:
        // ## code
        // break
     // case - condition:
        // ## code;
        //break
     // case - condition:
        // ## code
        // break
     // case - condition:
        // ## code;
        // break
     // default :
        // ## code; 
  //}
  int mount;
  cout<<"\ntell me your mount:\n";
  cin>>mount;
  switch (mount){
    case 1:
      cout<<"this mount have 31 days.";
      break;
    case 2:
      cout<<"this mount have 31 days.";
      break;
    case 3:
      cout<<"this mount have 31 days.";
      break;
    case 4:
      cout<<"this mount have 29 days.";
      break;
    case 5:
      cout<<"this mount have 31 days.";
      break;
    case 6:
      cout<<"this mount have 30 days.";
      break;
    case 7:
      cout<<"this mount have 30 days.";
      break;
    case 8:
      cout<<"this mount have 30 days.";
      break;
    case 9:
      cout<<"this mount have 30 days.";
      break;
    case 10:
      cout<<"this mount have 30 days.";
      break;
    case 11:
      cout<<"this mount have 30 days.";
      break;
    case 12:
      cout<<"this mount have 30 days.";
      break;
    default:
      cout<<"your mount is wrong...........";  
  
  }


return 0;
}