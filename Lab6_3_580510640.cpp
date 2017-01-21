/*
Suphanan Mujarin
580510640
*/

#include <iostream>

using namespace std;
class Star_;
class Vote_;
void CheckAndPrintVote(Vote_ v[1000],int n, Star_ s[6]);

class Vote_
{
friend void CheckAndPrintVote(Vote_ v[1000],int n, Star_ s[6]);
friend class Star_;
friend void PrintGoodLuckPeople(int a,int b,int n,Vote_ v[1000]);



    private :
        char name[30];
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
        void print_(){
        cout<<name<<" "<<no_Mstar<<" "<<no_Fstar<<endl;
        }
};

class Star_
{
friend void CheckAndPrintVote(Vote_ v[1000],int n,Star_ s[6]);
friend class Vote_;
friend void PrintGoodLuckPeople(int a,int b,int n,Vote_ v[1000]);

    private :
        char star_name[30];
        int no_star;
        int star_count;
        int m_no;
        int f_no;

    public :
        void set_(char n[30],int no,int score){
            strcpy(star_name,n);
            no_star = no;
            star_count = score;

        }
        void print_(){
        cout<<star_name<<" "<<no_star<<" "<<star_count<<endl;
        }
   
};


void CheckAndPrintVote(Vote_ v[1000],int n,Star_ s[6])
{
    int i;
    for(i=0;i<n;i++){
          // v[i].print_();
        if(v[i].no_Mstar == 1){
            s[0].star_count+=1;
        }
        if(v[i].no_Mstar == 2){
            s[1].star_count+=1;
        }
        if (v[i].no_Mstar == 3){
            s[2].star_count+=1;
        }
    }

    for(i =0;i<n;i++){
        if(v[i].no_Fstar == 1){
            s[3].star_count+=1;
        }
        if(v[i].no_Fstar == 2){
            s[4].star_count+=1;
        }
        if (v[i].no_Fstar == 3){
            s[5].star_count+=1;
        }
    }

    // for(i =0;i<6;i++){
    //     cout<<"\n"<<s[i].star_count<<i+1;
    // }
    int m_max=0;
    int f_max=0;
    char m_name[30];
    char f_name[30];
    int temp1=0;
    int temp2=0;

    for(i=0;i<3;i++){
        if(s[i].star_count>m_max){
            m_max= s[i].star_count;
            strcpy(m_name,s[i].star_name);
            temp1=s[i].no_star;

        }
    }
    cout<<"\nMale Popular Vote is "<<m_name;
    //cout<<temp1;

    for(i=3;i<6;i++){
        if(s[i].star_count>f_max){
            f_max= s[i].star_count;
            strcpy(f_name,s[i].star_name);
            temp2=(s[i].no_star);
        }
    }
    cout<<"\nFemale Popular Vote is "<<f_name;
    //cout<<temp2;

    PrintGoodLuckPeople(temp1,temp2,n,v);

}

void PrintGoodLuckPeople(int a,int b,int n,Vote_ v[1000])
{
    int i;
    cout<<"\nGood luck person: ";
    for(i=0;i<n;i++){
        // cout << "Star " << a << b << endl;
        // cout << "Voter " << v[i].no_Mstar << v[i].no_Fstar << endl << endl;
        if((v[i].no_Mstar == a) && (v[i].no_Fstar == b)){
            cout<<" "<<v[i].name;        
        }
    } 
}


void info_star(void){
    cout<<"         --Star vote--";
    cout<<"\n>>MALE                >>FEMAL";
    cout<<"\nno.1 Ken Teeradech    no.1 Ann Thongpasom";
    cout<<"\nno.2 Via Sakhonlawat  no.2 Aum Patcharapa";
    cout<<"\nno.3 Pae Saler        no.3 Pancake Khemmanij"<<endl;
}

int main(){
    int i;
    int n=0;
    info_star();
    cout<<"\nInput N: ";
    cin>>n;
    Vote_ v[1000];
    Star_ s[6];
    
    s[0].set_("Ken Teeradech",1,0);
    s[1].set_("Via Sakhonlawat",2,0);
    s[2].set_("Pae Saler",3,0);
    s[3].set_("Ann Thongpasom",1,0);
    s[4].set_("Aum Patcharapa",2,0);
    s[5].set_("Pancake Khemmanij",3,0);

    for(i=0;i<n;i++){
        v[i].set_Vote();
    }

    // for(i=0;i<n;i++){
    //     v[i].print_();
    // }

    // for(i=0;i<6;i++){
    //     s[i].print_();
    // }

    CheckAndPrintVote(v,n,s);

    return 0;
}



