#include <iostream>

using namespace std;


class Menu
{
    private :
        int number;

    public :
        void set_no()
        {
        cout<<"press number: "
        cin>>number;
        }


        void show_menu(void)
        {
            cinout<<"  MENU";
            cout<<"\n1. +";
            cout<<"\n2. -";
            cout<<"\n3. Exit"<<endl;
        }

        

};