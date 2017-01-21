#include <iostream>
#include <string.h>

using namespace std;

class Pregnant{
    private :
    char name[50];
    int day =0 ;
    int month =0;
    int year =0;

    public : 
        Pregnant();
        Pregnant(char *n,int day2,int month2,int year2);
        void cal_dmy();
        void set_month();
        void print_output();
        void set_info();
};
void Pregnant::cal_dmy(){
    day = day+7;
    if (day>30){
        day =day-30;
        month+=1;

    }

    month = month+9;
    if (month>12){
        month = month-12;
        year =year+1;
    }
}
void Pregnant::set_month(){

    if(month == 1){
        cout<<"January";
    }
    else if(month == 2){
        cout<<"February";
    }
    else if(month == 3){
        cout<<"March";
    }
    else if(month == 4){
        cout<<"April";
    }
    else if(month == 5){
        cout<<"May";
    }
    else if(month == 6){
        cout<<"June";
    }
    else if(month == 7){
        cout<<"July";
    }
    else if(month == 8){
        cout<<"August";
    }
    else if(month == 9){
        cout<<"September";
    }
    else if(month == 10){
        cout<<"October";
    }
    else if(month == 11){
        cout<<"November";
    }
    else{
        cout<<"December";
    }
    cout<<" "<<year<<endl;

}
void Pregnant::print_output(){
    cout<<name<<" "<<day<<" ";
}
Pregnant::Pregnant(char *n,int day2,int month2,int year2){
    strcpy(name,n);
    month = month2;
    day = day2;
    year = year2;
    
}

void Pregnant::set_info(){
    cout<<"Input name/day/month/year: ";
    cin>>name>>day>>month>>year;
}
Pregnant::Pregnant(){

}
int main(){
    Pregnant p1("Noppamas",25,11,2010);
    cout<<"mother1 - ";
    p1.cal_dmy();
    p1.print_output();
    p1.set_month();

    Pregnant p2;
    cout<<"mother2 - ";
    p2.set_info();
    p2.cal_dmy();
    p2.print_output();
    p2.set_month();

}
