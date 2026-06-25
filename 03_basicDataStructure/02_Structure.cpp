#include<iostream>
using namespace std;
//By giving a name to the structure, you can treat it as a data type. 
//     This means that you can create variables with this structure anywhere in the program at any time.
//To declare a variable that uses the structure,
//     use the name of the structure as the data type of the variable:

// creat a structur:
// ***(1)*** => outside the function_main
// struct - structure_name{
//    # variables
//}; 
struct my_structure_1{
  int age_1;
  string name_1;
  double wight_1;
  char unit_1;
};
struct  car{
  string brand;
  string model;
  string color;
  int year;
  bool helth;
};
void print_structur_1(car car);
void fiil(car x, string color, bool helth);

int main(){ 
    // struct = a structure that group related variables under one name
    //          struct can contain many different data type (struct, int, double, bool, etc)
    //          variable in a struct are know as "member"
    //          member can be access with . "class member access operator"
    //************************************** */
    // creat a structur:
    // ***(2)***  => inside the function_main
    // struct{
    //    # variables
    //} - structure_name;
    struct{
        int age_2;
        string name_2;
        double wight_2;
        char unit_2;
    } my_structure_2;
    // Assign values to members of myStructure:
    // (1) : structure_main - structure_name_new;
    //       structure_name_new . variables = values;
    my_structure_1 human;  // mant times....(beacuse my_structure_1 is in outside the function_main)
    human.age_1 = 20;
    human.name_1 = "amin_1";
    human.wight_1 = 181.0;
    human.unit_1 = 'm';
    //-----------------------------
    // (2) : structure_main_name . variables = values;
    my_structure_2.age_2 = 20;
    my_structure_2.name_2 = "amin";
    my_structure_2.wight_2 = 1.80;
    my_structure_2.unit_2 = 'm';

    return 0;
}