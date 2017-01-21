/*
Suphanan Mujarin
580510640
*/
#include <iostream>
#include <string.h>

using namespace std;

class Pregnant{
    private :
    char name[50];
    int day =0;
    int month =0;
    int year =0;

    public : 
        Pregnant(char *n,int day2,int month2,int year2);
     
        void setDay()   void setName(){
            cout<<"name: ";
            cin>>name2;
        }{
            cout<<"day: ";
            cin>>day2;

        }
        void setMonth(){
            cout<<"month: ";
            cin>>month2;

        }
        void setYear(){
            cout<<"year: ";
            cin>>year2;
        }
        int getDay(){
            return day;
        }
        int getMonth(){
            return month;
        }
        int getYear(){
            return year;
        }

       
        string month_(){
            if(month == 1){
                return January;
            }
            else if(month == 2){
                return February;
            }
            else if(month == 3){
                return March;
            }
            else if(month == 4){
                return April;
            }
            else if(month == 5){
                return May;
            }
            else if(month == 6){
                return June;
            }
            else if(month == 7){
                return July;
            }
            else if(month == 8){
                return August;
            }
            else if(month == 9){
                return September;
            }
            else if(month == 10){
                return October;
            }
            else if(month == 11){
                return November;
            }
            else{
                return December;
            }

};


Pregnant::Pregnant(char *n,int day2,int month2,int year2){
    strcpy(name,n);
    day2 = day2+7;
    if (day2>30){
        day =day2-30;
        month2+=1;

    }
    else{
        day = day2;
        month2 = month2;
    }
    cout<<"Mother1: ";
    cout<<name<<" "<<day<<" ";

    month2 = month2+9;
    if (month2>12){
        month = month2-12;
        year =year2+1;
    }else{
        month =month2;
        year = year2;
    }
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
    cout<<" "<<year;

}

void setName(){
    cout<<"name: ";
    cin>>name2;

}
void setDay(){
    cout<<"day: ";
    cin>>day2;

}
void setMonth(){
    cout<<"month: ";
    cin>>month2;

}
void setYear(){
    cout<<"year: ";
    cin>>year2;
}


int main(){

    Pregnant p1("Noppamas",2,1,2010);
    p1.calDMY();//toy
    p1.print_output();

    Pregnant p2;
    p2.setName();
    p2.setDay();
    p2.setMonth();
    p2.setYear();

    //p2.calDMY();
    //-----------------------
    day_ =p2.getDay();
    day_+=7

    month_=p2.getMonth();
    year_=p2.getYear();

    return 0;
}

 day2 = day2+7;
    if (day2>30){
        day =day2-30;
        month2+=1;

    }
    else{
        day = day2;
        month2 = month2;
    }
    cout<<"Mother1: ";
    cout<<name<<" "<<day<<" ";