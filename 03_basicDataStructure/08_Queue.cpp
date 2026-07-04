#include<iostream>
#include<queue>
using namespace std;
int main(){
    // Queue = A queue stores multiple elements in a specific order, called FIFO.
    // FIFO stands for First in, First Out. To visualize FIFO, think of a queue as people standing in line in a supermarket.
    //          The first person to stand in line is also the first who can pay and leave the supermarket.
    //          This way of organizing elements is called FIFO in computer science and programming.

    // Unlike vectors, elements in the queue are not accessed by index numbers.
    //        Since queue elements are added at the end and removed from the front,
    //        you can only access an element at the front or the back.
    // NOTE : Queues are often mentioned together with Stacks.

    // creat a queue :
    // Note: You cannot add elements to the queue at the time of declaration, like you can with vectors.
    // queue - <type> - queue_name;
    queue<string>cars_1;
    cout<<"****************************\n";
    // add element :
    // queue_name .push(new_element);
    cars_1.push("bmw");
    cars_1.push("benz");
    cars_1.push("volvo");
    cars_1.push("tesla");

    // The queue will look like this:
    // bmw (front (first) element)
    // benz
    // volvo
    // tesla (back (last) element)
    cout<<"***************************\n";
    return 0;
}