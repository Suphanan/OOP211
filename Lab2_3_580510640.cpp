//Suphanan Mujarin580510640

#include <iostream>
#include <string>

using namespace std;
string count_alpha(string array_name[]);

int main(){
    string array_name[5];
    string name;
    for(int i=0;i < 5;i++){
        cout<<"input name no."<<i+1<<": ";
        cin>> array_name[i];
    }
    name =count_alpha(array_name);
    cout<<"longest name is "<<name;

    return 0;
}


string count_alpha(string array_name[]){
   
    int max_ =0;
    string name_;
    for(int i =0;i<5;i++)
    {
        if((array_name[i].length())> max_){
            max_ = array_name[i].length();
            name_ = array_name[i];
        }
    }
    return name_;
}