/*
Suphanan Mujarin
580510640
*/
#include <iostream>
#include <string.h>


using namespace std;

class Human
{
    private :  
        char name[50];
        float weight =0.0;
        float height =0.0;

    public :
        Human(char *n);
        Human(char *n,float weight2);
        Human(char *n,float weight2,float height2);
        ~Human();
    
};

Human::Human(char *n){
    weight = 50.0;
    height = 150.0;
    strcpy(name,n);
    //cout<<"name:"<<name<<"\t";
    //cout<<"weight:"<<weight<<"\t"<<"height:"<<height<<endl;
}

Human::Human(char *n,float weight2){
    height = 160.0;
    strcpy(name,n);
    weight = weight2;
    
}

Human::Human(char *n,float weight2,float height2){
    strcpy(name,n);
    weight = weight2;
    height = height2;
    //cout<<"name:"<<name<<"\t";
    //cout<<"weight:"<<weight<<"\t"<<"height:"<<height<<endl;
}

Human::~Human(){
    cout<<"Destructor "<<"name: "<<name<<"\n"<<"weight:"<<weight<<"\n"<<"height:"<<height<<endl;
}

int main(){
    Human h1("suphanan");
    Human h2("mujarin",62.0);
    Human h3("rin",65.0,163.0);

    return 0;
}





