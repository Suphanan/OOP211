/*
580510640
suphanan mujarin
*/

#include <iostream>

using namespace std;

template <class TYPE>
TYPE getCenter(TYPE a,TYPE b,TYPE c){
    TYPE max;
    TYPE mid;
    TYPE min;

    if(a>b){
        max =a;
        min =b;
        //cout<<max<<min<<"1";
    }
    if(b>a){
        max =b;
        min =a;
        //cout<<max<<min<<"2";
    }
    if(c>max){
        mid =max;
        max=c;
        //cout<<mid<<max<<"3";
    }
    if(c<min){
        mid =min;
        min= c;
        //cout<<mid<<min<<"4";
    }
    if(max>c && c>min){
        mid =c;
    }
    return mid;
}

int main()
{
    char c_;
    cout<<"\nMid is "<<getCenter(1,2,3);
    cout<<"\nMid is "<<getCenter(2,3,1);
    cout<<"\nMid is "<<getCenter(3,1,2);
    cout<<"\nMid is "<<getCenter(3,2,1);
    cout<<"\nMid is "<<getCenter(2,1,3);
    cout<<"\nMid is "<<getCenter(1,3,2);

    cout<<"\nMid is "<<getCenter(3,8,1);
    cout<<"\nMid is "<<getCenter('x','a','c');
    cout<<"\nMid is "<<getCenter(1.8,2.5,4.9);

    return 0;
}