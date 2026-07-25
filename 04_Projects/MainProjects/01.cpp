#include<iostream>
#include<string>
#include<vector>
using namespace std;
class User{
    private:
    string username, password;
    public:
    User(string name, string pass){
        username = name;
        password = pass;          
    }
    string getUsername(){
        return username;
    }
    string getPassword(){
        return password;
    }

};
class UserManager{
    private:
    vector<User> users; // creat object of vector
    public:
    void RegisterUser(){
        string username, password;
        cout<<"Enter User Name: ";
        cin>>username;
        cout<<"Enter Password: ";
        cin>>password;
        User newuser(username, password);
        users.push_back(newuser);
        cout<<"\t User Register Successfully.....\n";
    }
    bool LoginUser(string name, string pass){
        for(int i = 0; i<users.size(); i++){
            if(name == users[i].getUsername() && pass == users[i].getPassword()){
                cout<<"\tLogin Successfully.....\n";
                return true;
            }
        }    
        cout<<"\tInvalid User Name or Password!!!!\n";
        return false;
    }
    void ShowUserList(){
        cout<<"\t---- Users List ----\n";
        for(int i = 0; i<users.size(); i++){
            cout<<users[i].getUsername()<<endl;
        }
    }
    void SerchUser(string username){
        for(int i = 0; i<users.size();i++){
            if(users[i].getUsername() == username){
                cout<<"\t User was Found...\n";
            }
        }
    }
    void DeletUser(string username){
        for(int i =0; i<users.size(); i++){
            if(users[i].getUsername()== username){
                users.erase(users.begin()+i);
            }
        }
    }
};