#include<iostream>
using namespace std;
class FATHER{
    protected:
    int color_skin_F;
    int color_hair_F;
    int color_eye_F;
    float height_F;
    string disease_defeated_F;
    string disease_dependent_on_x_F;
    string disease_dominant_F;
    public:
    void get_data(){
        cout<<"Enter the father's skin color based on (white = 10 and black = 1): ";
        cin>>color_skin_F;
        cout<<"Enter father's hair color(1.Blonde , 2.Brown , 3.Black): ";
        cin>>color_hair_F;
        cout<<"Enter father's eye color(1.Green , 2.Blue , 3.Brown , 4.Black): ";
        cin>>color_eye_F;
        cout<<"Enter father's Height(cm): ";
        cin>>height_F;
    }

};
class MOTHER{
    protected:
    int color_skin_M;
    int color_hair_M;
    int color_eye_M;
    float height_M;
    string disease_defeated_M;
    string disease_dependent_on_x_M;
    string disease_dominant_M;
    public:
    void get_data(){
        cout<<"Enter the mother's skin color based on (white = 10 and black = 1): ";
        cin>>color_skin_M;
        cout<<"Enter mother's hair color(1.Blonde , 2.Brown , 3.Black): ";
        cin>>color_hair_M;
        cout<<"Enter mother's eye color(1.Green , 2.Blue , 3.Brown , 4.Black): ";
        cin>>color_eye_M;
        cout<<"Enter mother's Height(cm): ";
        cin>>height_M;
    }
};