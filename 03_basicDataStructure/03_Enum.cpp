#include<iostream>
using namespace std;

    // enum = enumerations ==>> is a special type that
    //       represents a group of constants (unchangeable values). 
    //       a user-defined date that consists
    //       of paired named-integer constants.
    //       GREAT if you have a set of potential options

    // creat enum: As you know, the first item of an enum has the value 0.
    //                The second has the value 1, and so on.
    // enum - enum_name{ nameds - integers};
    enum day{saturday = 0,sunday = 1, monday = 2, tuesday = 3, wednesdat = 4, thursday = 5, friday = 6};
    // change values:
    //enum day{saturday_1 = 10,sunday_1 = 11, monday_1 = 12, tuesday_1 = 13, wednesdat_1 = 14, thursday_1 = 15, friday_1 = 16};
    //enum day{saturday_2 = 20,sunday_2, monday_2, tuesday_2, wednesdat_2, thursday_2, friday_2};