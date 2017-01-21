/*
Suphanan Mujarin
580510640
*/

#include <iostream>

using namespace std;



class Salary_info{
    private :
        char name[50];
        float salary_;
        float extra_money;
        float tax =0.0;
        float annual_money=0.0;

    public :
        void set_info(){
            cout<<"input your name : ";
            cin>>name;
            cout<<"input salary : ";
            cin>>salary_;
            cout<<"input extra money : ";
            cin>>extra_money;
        }

        void cal_tax(){
            annual_money = (salary_ + extra_money)*12;
            tax =(annual_money*5)/100;
            if (tax > 5000){
                tax = 5000;
            }
        }

        void print_info(){
            cout<<"---------------------------"<<endl;
            cout<<"name : "<<name<<endl;
            cout<<"annual money : "<<annual_money<<endl;
            cout<<"tax : "<<tax<<endl;
        }
};

int main(){
    Salary_info teacher;

    teacher.set_info();
    teacher.cal_tax();
    teacher.print_info();

    return 0;
}