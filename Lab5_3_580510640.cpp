/*
Suphanan Mujarin
580510640
*/

#include <iostream>
#include <string.h>

using namespace std;

class str
{
    private :
        //string m;
        char m[20];
        int c_;

    public :
        void setMessage(){
        
            cin>>m;
        }
        str operator + (str);
        void show();
        void show_();


};
str str::operator + (str m2){
    str MSG;
    strcpy(MSG.m,m);
    strcat(MSG.m,m2.m);
    MSG.c_ = strlen(MSG.m);

    return MSG;
    
}

void str::show(){
    cout<<"="<<m<<" "<<c_;
}
void str::show_(){
    cout<<m<<" ";
}


int main(){
    str m1,m2,m3,m4;
    cout<<"Input string 1:";
    m1.setMessage();
    cout<<"Input string 2:";
    m2.setMessage();
    cout<<"Input string 3:";
    m3.setMessage();

    m4 = m1+m2+m3;
    m1.show_();
    m2.show_();
    m3.show_();
    m4.show();
    
   
    return 0;
}