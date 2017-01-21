//580510640
//suphanan mujarin
#include <iostream>
using namespace std;
class Book;
class Price;

class Publication
{
friend void printReport(int count,Book *B_);
protected:
    char name[20];
    int amount;
};

class Price
{
friend void printReport(int count,Book *B_);
protected:
    float capital;
    float retailPrice;
    float wholesalePrice;
};

class Book:public Publication,public Price
{
friend void printReport(int count,Book *B_);
private:
    char author[20];
    int pageNo;

public:
    void setData(){
        cout<<"input Name: ";
        cin>>name;
        cout<<"input Amount: ";
        cin>>amount;
        cout<<"input Author: ";
        cin>>author;
        cout<<"input Number of page: ";
        cin>>pageNo;
        cout<<"input Capital: ";
        cin>>capital;
    }
    void calwholesale(){
        wholesalePrice=(0.15*capital)+capital;
        //return wholesalePrice;
    }
    void calretail(){
        retailPrice=(0.2*capital)+capital;
        //return retailPrice;
    }
    void showData(){
        calwholesale();
        calretail();
        cout<<"\n"<<name<<"\t\t"<<amount<<"\t\t"<<author<<"\t\t"<<pageNo;
        cout<<"\t\t\t"<<capital<<"\t\t"<<wholesalePrice<<"\t\t\t"<<retailPrice;
    }
};

void printReport(int count,Book *B_){


    cout<<"\t\t\t\t\t\t\tProfit Report";
    cout<<"\nBook Name\tTotal Capital\tTotal wholesale Price\tTotal Retail Price";
    cout<<"\tTotal Profit for wholesale\tTotal Profit for Retail";
    float t_cap=0.0;
    float t_whole=0.0;
    float t_retail=0.0;
    float tp_whole=0.0;
    float tp_retail=0.0;
    float sumt_cap=0.0;
    float sumt_wholw=0.0;
    float sumt_retail=0.0;
    float sumtp_w=0.0;
    float sumtp_r=0.0;


    for (int i = 0; i < count; ++i)
    {
        cout<<"\n"<<B_[i].name;

        t_cap=B_[i].amount * B_[i].capital;
        sumt_cap+=t_cap;
        cout<<"\t\t"<<t_cap;

        t_whole=B_[i].amount * B_[i].wholesalePrice;
        sumt_wholw+=t_whole;
        cout<<"\t\t\t"<<t_whole;

        t_retail=B_[i].amount * B_[i].retailPrice;
        sumt_retail+=t_retail;
        cout<<"\t\t\t"<<t_retail;

        tp_whole=t_whole-B_[i].capital;
        sumtp_w+=tp_whole;
        cout<<"\t\t\t"<<tp_whole;

        tp_retail=t_retail-B_[i].capital;
        sumtp_r+=tp_retail;
        cout<<"\t\t\t\t"<<tp_retail;
    }
    cout<<"\nTotal\t\t"<<sumt_cap<<"\t\t\t"<<sumt_wholw<<"\t\t\t"<<sumt_retail;
    cout<<"\t\t\t"<<sumtp_w<<"\t\t\t\t"<<sumtp_r;
}


int main(){
    char n_book[20];
    cout<<"input Name of Book Center: ";
    cin>>n_book;
    char key ='y';
    Book B_[100];
    int i=0;
    while(key == 'y'){
        B_[i].setData();
        i+=1;
        cout<<"Add book  YES(y) or NO(n): ";
        cin>>key;
    }
    int c=0;
    cout<<"\t\t\t\t\t\t\t"<<n_book<<" Book Center";
    cout<<"\n\nBook Name\tAmount\t\tAuthor\t\tNumber of Pages";
    cout<<"\t\tCapital\t\tWholesale Price\t\tRetail Price";
    for(;c<i;c++){
        B_[c].showData();
    }
    cout<<"\n\n";
    printReport(i,B_);


    return 0;
}