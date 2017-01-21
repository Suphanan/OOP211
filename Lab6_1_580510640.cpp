/*
Suphanan Mujarin
580510640
*/

#include <iostream>
#include <math.h>

using namespace std;
//void compare_(BMI_info h1,BMI_info h2);

class BMI_info{
friend void compare_(BMI_info h1,BMI_info h2);
    private :
        char name[50];
        char gender;
        float weight =0.0;
        float height =0.0;
        float weight_m =0.0;
        float weight_f =0.0;
        float diff =0.0;
    public :
        void set_info(){
            cout<<"input your name : ";
            cin>>name;
            cout<<"input your gerder male = m,female = f : ";
            cin>>gender;
            cout<<"input your weight : ";
            cin>>weight;
            cout<<"input your height : ";
            cin>>height;
        }
        int cal_BMI(){
            if (gender == 'm'){
                weight_m = height -100;
                diff = fabs(weight_m - weight);
                return diff;
            }
            else{
                weight_f = height -110;
                diff = fabs(weight_f - weight);
                return diff;
                }
        }
};

void compare_(BMI_info h1,BMI_info h2){

    int diff1 = h1.diff;
    int diff2 = h2.diff;
    //cout<<diff1;
    cout<<"----";
    
    //cout<<diff2;

    if (diff1 == diff2){
        cout<<"equa";
    }
    else if(diff1<diff2){
        cout<<h1.name<<"is near mostly";
    }
    else{
        cout<<h2.name<<"is near mostly";
    }

}

int main(){
    BMI_info h1,h2;
    h1.set_info();
    h1.cal_BMI();

    h2.set_info();
    h2.cal_BMI();

    
    compare_(h1,h2);
    return 0;
}