#include<iostream>
#include<algorithm>
#include<vector>
#include<list>
#include<set>
#include<deque>
#include<map>
#include<string>

using namespace std;
int main(){
    // ALGORITHM = Algorithms are used to solve problems by sorting, searching, and manipulating data structures.
    //    for = vector , set , list , deque , map
    cout<<"********************\n";
    // sort = sort(first_element , last_element);
    vector<int> x = {1,8,6,4,9,5,7,3,4,9,3,1,7};
    sort(x.begin(), x.end());
    for(int i : x){
     cout<< i<< endl;
    }
    cout<<"--------------------\n";
    // To reverse the order : {being() == rbeing() and end() == rend()}
    sort(x.rbegin(), x.rend());
    for(int i : x){
      cout<< i<< endl;
    }
   cout<<"*****************\n";
   // serch => variabel = find(first_element , last_element , ......);

   auto it = find(x.begin(), x.end(), 10);
   cout<< *it<<endl;
   if(it != x.end()){
    cout<<"it's was found \n";
   }
   else{
    cout<<"it's was not found \n";
   }
   cout<<"-------------\n";
   // To search for the first element that is greater than a specific value, you can use the upper_bound().
   // NOTE = The upper_bound() function is typically used on sorted data structures.
   //        That's why we first sort the vector in the example above.
   // serch => variabel = upper_bound(first_element , last_element , ......);
   vector<int>x_1 = {1,2,5,4,7,8,9,3,4,5,6,7,1,5};
   sort(x_1.begin(), x_1.end());
   it = upper_bound(x_1.begin(), x_1.end(), 6);   // we named it at befor !!!!
   cout<< *it<<endl;
   cout<<"-------------\n";
   //  smallest element = min_element(first_element , last_element);
   it = min_element(x_1.begin(), x_1.end());
   cout<< *it<< endl;
   // largest element = max_element(first_element , last_element);
   it = max_element(x_1.begin(), x_1.end());
   cout<<*it<< endl;
   cout<<"*********************\n";
   return 0;
}