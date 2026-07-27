#include<iostream>
using namespace std;
class Publication{
    protected:
    float price;
    public:
    void get_data(){
        cout<<"Enter Price: ";
        cin>>price;
    }
    void put_data(){
        cout<<"Price: "<<price<<endl;
    }
};
class Book : public Publication{
    private:
    int pagecount;
    public:
    void get_data(){
        cout<<"Enter Number Of Page: ";
        cin>>pagecount;
        Publication ::get_data();
    }
    void put_data(){
        cout<<"Number Of Page: "<<pagecount<<endl;
        Publication::put_data();
    }
};
class Tape : public Publication{
    private:
    float time;
    public:
    void get_data(){
        cout<<"Enter Time In Minutes: ";
        cin>>time;
        Publication::get_data();
    }
    void put_data(){
        cout<<"Time: "<<time<<endl;
        Publication::put_data();
    }

};