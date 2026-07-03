#include<iostream>
#include<stack>
using namespace std;
int main(){
    // Stsck = A stack stores multiple elements in a specific order, called LIFO.
    // # NOTE # = LIFO stands for Last in, First Out. To vizualise LIFO, think of a pile of pancakes,
    //               where pancakes are both added and removed from the top. So when removing a pancake,
    //               it will always be the last one you added.
    //               This way of organizing elements is called LIFO in computer science and programming.

    // # NOTE # = Unlike vectors, elements in the stack are not accessed by index numbers.
    //            Since elements are added and removed from the top, you can only access the element at the top of the stack.
    // NOTE  = Stacks are often mentioned together with Queues.
    
    // Creat a stsck:
    // Note: You cannot add elements to the stack at the time of declaration, like you can with vectors:
    // stack - <type> - stack_name;
    stack<string>cars;
    cout<< "*****************************\n";
    // add element stack :
    // stack_name .push(new_element);
    cars.push("bmw");
    cars.push("benz");
    cars.push("volvo");
    cars.push("tesla");
    // NOTE : The stack will look like this (remember that the last element added is the top element):
    // tesla
    // volvo
    // benz
    // bmw
    cout<<"******************************************\n";
    return 0;
}
