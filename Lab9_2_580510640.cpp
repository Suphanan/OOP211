/*
* @Author: Suphanan
* @Date:   2016-10-29 14:26:40
* @Last Modified by:   Suphanan
* @Last Modified time: 2016-10-29 14:26:40
*/

#include <iostream>

using namespace std;

class Land_for_sale;
class Land_for_house;

class Land{
friend int findLand(Land_for_sale *Ls,Land_for_house *Lh,int m,int n);
friend void printReport(Land_for_sale *Ls,int m);
protected: 
    int land_size;

public:
    void setLand(){
        cout<<"\nEnter land size:";cin>>land_size;
    }
};

class Land_for_sale:public Land{
friend int findLand(Land_for_sale *Ls,Land_for_house *Lh,int m,int n);
friend void printReport(Land_for_sale *Ls,int m);
private:
    char deed_tile[15];
    long evaluate_price;
    int sale_status;
    double sale_price;
public:
    void setSale(){
        cout<<"Enter tile deed:";cin>>deed_tile;
        cout<<"Enter Evaluate price:";cin>>evaluate_price;
    }
};

class Land_for_house:public Land{
friend int findLand(Land_for_sale *Ls,Land_for_house *Lh,int m,int n);
friend void printReport(Land_for_sale *Ls,int m);
private:
    long house_price;
public:
    void setPrice(){
        cout<<"Enter house price:";cin>>house_price;
    }
};

int findLand(Land_for_sale *Ls,Land_for_house *Lh,int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(Ls[i].land_size >= Lh[j].land_size){
                Ls[i].sale_price=Ls->evaluate_price+0.1*Ls->evaluate_price+0.05*Lh->house_price;
                Ls[i].sale_status = 1;
            }  
            else{
                Ls[i].sale_status = 0;
            }          
        }
    }
    return 0;
}

void printReport(Land_for_sale *Ls,int m){
    cout<<"\nReport for lands which can bo sold"<<endl;
    cout<<"Deed tile\tSale price";
    for(int i=0;i<m;i++){
        if(Ls[i].sale_status == 1){
        cout<<Ls[i].deed_tile<<"\t"<<Ls[i].sale_price;            
        }
    }
}

int main(){
    int m=0;
    int n=0;
    float profit=0.0;
    cout<<"Enter number of lands:";cin>>m;
    cout<<"Enter number of house:";cin>>n;

    Land_for_sale Ls[m];
    Land_for_house Lh[n];
    for(int i=0;i<m;i++){
        cout<<"\nEnter data for land#"<<i+1;
        Ls[i].setLand();
        Ls[i].setSale();
    }

    for(int i=0;i<n;i++){
        cout<<"\nEnter data for house#"<<i+1;
        Lh[i].setLand();
        Lh[i].setPrice();
    }
    profit=findLand(Ls,Lh,m,n);
    cout<<"\nTotal profit="<<profit;
    printReport(Ls,m);

    return 0;
}