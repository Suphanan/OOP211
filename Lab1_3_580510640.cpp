//Suphanan Mujarin580510640
using namespace std;
#include <iostream>
#include <string>
int compare_name(string a,string b);

int main(){

    string a;
    string b;

    cout << "input name1: ";
    getline (cin, a);
    cout << "input name2: ";
    getline (cin, b);

    compare_name(a,b);

    return 0;

}


int compare_name(string a,string b){
    int count1;
    int count2;

    count1=a.length();
    count2=b.length();

    //cout<<"count1 is=" <<count1 << "\n";
    //cout<<"count2 is=" <<count2 << "\n";

    if(count1>count2){
       cout<<"longest name is=" <<a << "\n"; 
    }
    else if(count1<count2){
       cout<<"longest name is=" <<b << "\n"; 
    }
    else{
        cout<<"name1 and name2 are equal\n"; 
    }

    return 0;
}