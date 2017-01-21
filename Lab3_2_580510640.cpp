/*
Suphanan Mujarin
580510640
*/

#include <iostream>

using namespace std;


class BMI_info{
    private :
        char gender;
        float weight =0.0;
        float height =0.0;
        float weight_m =0.0;
        float weight_f =0.0;


    public :
        void set_info(){
            cout<<"input your gerder male = m,female = f : ";
            cin>>gender;
            cout<<"input your weight : ";
            cin>>weight;
            cout<<"input your height : ";
            cin>>height;
        }

        void cal_BMI(){
            if (gender == 'm'){
                weight_m = height -100;
                cout<<"body mass index : ";
                if (weight == weight_m){
                    cout<<"Healthy weight"<<endl;
                }
                else if (weight_m > weight){
                    cout<<"underweight"<<endl;
                }
                else{
                    cout<<"overweight"<<endl;
                }
            }
            else{
                weight_f = height -110;
                cout<<"body mass index : ";
                if (weight == weight_m){
                    cout<<"Healthy weight"<<endl;
                }
                else if (weight_f > weight){
                    cout<<"underweight"<<endl;
                }
                else{
                    cout<<"overweight"<<endl;
                }
            }
            cout<<"----------------------------------------------"<<endl;
        }
    };

int main(){
    BMI_info h1,h2;

    h1.set_info();
    h1.cal_BMI();

    h2.set_info();
    h2.cal_BMI();

    return 0;
}