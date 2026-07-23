#include<iostream>
using namespace std;
int main(){
    cout<<"**********************\n";
    cout<<"*** Geometric tear ***\n";
    cout<<"**********************\n";
    // triangle
    // number (1):
    // h = 5
    int h = 5; // can you get in of input user
    for(int i = 1; i<=h; i++){
        for(int j = 1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<"-----------------------\n";
    // number (2):
    // h = 5
    for(int i = 1; i<=h; i++){
        for(int j = 1; j<=i; j++){
            int x = 1;
            if(i==1 || i==2 || i==h){
                cout<<"o ";
            }
            else if(i>2 && i!=h){
                if(j==1){
                    cout<<"o ";
                }
                else if((i-j)>=1){
                    cout<<". ";                
                }
                else{
                    cout<<"o";
                }
            }
            //cout<<"*";    
        }
        cout<<endl;
    }
    cout<<"------------------------\n";
    // number (3):
    // h = 5
    int z = 0;
    int z_1 = (h*2)-1; // 9
    for(int i = 1; i<=h; i++){
        for(int j = 1; j<=z_1; j++){
            if(i==1){
                if(j<h || j>h){
                    cout<<"_ ";
                }
                else{
                    cout<<"* ";
                }
            }
            if(i>1 && i<h){
                if(j<h-z || j>h+z){
                    cout<<"_ ";
                }
                else{
                    cout<<"* ";
                }
            } 
            if(i==h){
                cout<<"* ";
            }    
        }
        cout<<endl;
    z++;
    }
    cout<<"---------------------\n";
    return 0;
}