/*
Suphanan Mujarin
580510640
*/

#include <iostream>

using namespace std;

class Vote_
{
friend void CheckAndPrintVote(Vote_ *v,int n); 
    private :
        string name;
        int no_Mstar;
        int no_Fstar;

    public :
        void set_Vote(){
            cout<<"Name: ";
            cin>>name;
            cout<<"no.Mstar: ";
            cin>>no_Mstar;
            cout<<"no.Fstar: ";
            cin>>no_Fstar;
        }
};

class star
{
    private :
        char name[30];
        int count;

     public :
};









void CheckAndPrintVote(Vote_ *v,int n){
    int i = 0;
    int mcount[3]={0};
    int fcount[3]={0};
    int m_max=0;
    int f_max=0;
    int m_name;
    int f_name;
    for(;i<n;i++){
        if(v[i].no_Mstar == 1){
            mcount[0]+=1;
        }
        else if(v[i].no_Mstar == 2){
            mcount[1]+=1;
        }
            else{
                mcount[2]+=1;
            }
    }

    for(i=0;i<n;i++){
        if(v[i].no_Fstar == 1){
            fcount[0]+=1;
        }
        else if(v[i].no_Fstar == 2){
            fcount[1]+=1;
        }
            else{
                fcount[2]+=1;
            }
    }

    // for(i=0;i<n;i++){
    //     cout<<"f"<<fcount[i]<<"\n";
    //     cout<<"m"<<mcount[i]<<"\n";
    // }

    for(i=0;i<n;i++){
        if(mcount[i]>m_max){
            m_max= mcount[i];
            m_name =v[i].no_Mstar;
        }
    }

    for(i=0;i<n;i++){
        if(fcount[i]>f_max){
            f_max= fcount[i];
            f_name = v[i].no_Fstar;
    
        }
    }


    cout<<"m max"<<m_max<<" "<<m_name<<"\n";
    cout<<"f max"<<f_max<<" "<<f_name<<"\n";

}


int main(){
    int n=0;
    int i=0;
    cout<<"INPUT N:";
    cin>>n;
    Vote_ v[n];
    // Star_ s1("Ken Teeradech");
    // Star_ s2("Via Sakhonlawat");
    // Star_ s3("Pae Saler");

    for(;i<n;i++){
        v[i].set_Vote();
    }
    CheckAndPrintVote(v,n);

    return 0;

}