/*
Suphanan Mujarin
580510640
*/

#include <iostream>

using namespace std;

class Distance_
{
    private :
        int feet;
        int inch;

    public :
        void set_distance(){
            cout<<"Feet: ";
            cin>>feet;
            cout<<"Inch: ";
            cin>>inch;

        int convect_inch(){
            int temp= (feet*12)+(inch);
            return temp;
        }

        // void show_menu(void){
        //     cinout<<"  MENU";
        //     cout<<"\n1. +";
        //     cout<<"\n2. -";
        //     cout<<"\n3. Exit"<<endl;
        // }
        Distance_(int feet,int inch){

        }
};

class Menu{
    private :
        int number;.


    public :
        void set_(int n){
            
            number = n;
        }   
        void show_menu(void){
            int no;
            cinout<<"  MENU";
            cout<<"\n1. +";
            cout<<"\n2. -";
            cout<<"\n3. Exit"<<endl;
            cin>>no;
        } 
};


int main(){
    int temp =0;
    Distance_ dist;

    n[0].set_(1)
    n[1].set_(2)
    n[2].set_(3)


    dist.set_distance();
    show_menu();
    temp = temp.convect_inch();
    if((temp == 0) && number == 2 ){
        cout<<"fail decrease";
    }
    while( temp != 0)
    if(number == 3){
        break;
    }
    do

    do {
    // "Hello, world!" is printed at least one time
    //  even though the condition is false
    cout<<"Hello, world!\n";
  } while ( x != 0 );
  cin.get();
}


    



    return 0;
}