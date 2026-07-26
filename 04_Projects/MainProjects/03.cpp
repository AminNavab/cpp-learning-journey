#include<iostream>
using namespace std;
class ATM{
    private:
    int Balance;
    string unit;
    public:
    ATM(int bal = 0){
        Balance = bal;
    }
    void set_balance(int bal){
        Balance = bal;
    }
    int get_balance(){
        return Balance;
    }
    int Withdraw(int amount){
        if(amount>Balance){
            return false;
        }
        Balance -= amount;
        return true;
    }
    void Deposit(int amount){
        Balance += amount;
    }
};
