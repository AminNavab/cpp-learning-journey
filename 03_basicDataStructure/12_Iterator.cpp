#include<iostream>
#include<vector>
#include<list>
#include<set>
#include<map>
#include<deque>
#include<queue>
#include<stack>
#include<algorithm>
using namespace std;
int main(){
    // iterator = Iterators are used to access and iterate through elements of data structures (vectors, sets, etc.),
    //             by "pointing" to them.
    //             It is called an "iterator" because "iterating" is the technical term for looping.
    cout<<"*******************\n";
    vector<string>cars = {"bmw","benz","ford","volvo"};
    // Create a vector iterator called it :
    // vactor - <type> :: iterator it;
    vector<string> :: iterator it;
    for(it = cars.begin(); it != cars.end(); it++){
        cout<< *it<< endl;
    }
    // First we create a vector of strings to store the names of different car manufactures.
    // Then we create a "vector iterator" called it, that we will use to loop through the vector.
    // Next, we use a for loop to loop through the vector with the iterator. The iterator (it) points to the first element in the vector (cars.begin())
    //             and the loop continues as long as it is not equal to cars.end().
    // The increment operator (++it) moves the iterator to the next element in the vector.
    // The dereference operator (*it) accesses the element the iterator points to.
    // NOTE = Note: The type of the iterator must match the type of the data structure it should iterate through (string in our example)
    // (#) begin() returns an iterator that points to the first element of the data structure.
    // (#) end() returns an iterator that points to one position after the last element.
   cout<< "*********************\n";
   // point to the .... element :
   // it = vector_name . {being() or end()} - op ;
   // it = cars.begin();
   // it = cars.begin() + 1;
   // it = cars.begin() + 2;
   // ==>> it = cars.begin() + x;
   // it = cars.end();
   // it = cars.end() - 1;
   // it = cars.end() - 2;
   // ==>> it = cars.end() - x;
   cout<<"********************\n";
   // auto keyword :
   // The auto keyword allows the compiler to automatically determine the correct data type,
   //        which simplifies the code and makes it more readable.
   // vector<type> :: iterator it = vector_name .{end() or being()} ===== auto it = vector_name .{end() or being()};
   // auto it = cars.begin();
   // auto it = cars.end();

   for(auto it = cars.begin(); it != cars.end(); it++){
    cout<< *it<<endl;
   }
   cout<<"*******************\n";
   return 0;
}