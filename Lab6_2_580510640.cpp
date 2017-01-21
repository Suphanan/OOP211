/*
Suphanan Mujarin
580510640
*/

#include <iostream>
#include <string>

using namespace std;

class Score_{
friend void find_max_avg_countS(Score_ *sc,int n);   
    private :
        char name[50];
        float score=0.0;

    public :
        void set_student(){
            cout<<"input  name: ";
            cin>>name;
            cout<<"input   score: ";
            cin>>score;
        }
};

void find_max_avg_countS(Score_ *sc,int n){
    int i=0;
    float max_=0.0;
    float sum=0.0;
    float avg=0.0;
    int count_low=0;
    string name;
    for(;i<n;i++){
        sum+=sc[i].score;
        if(sc[i].score>max_){
            max_= sc[i].score;
            name = sc[i].name;

        }
    }
    cout<<"\n\nMaximum Score is "<<max_;
    cout<<"  Name is "<<name;
    avg=sum/n;
    cout<<"\nAverage Score="<<avg;
    //----------------------------
    for(i=0;i<n;i++){
        if(sc[i].score<avg){
            count_low+=1;
        }
    }
    cout<<"\nNumber of students who get score which is less than average score="<<count_low;

}

    


int main(){
    int n=0;
    int i=0;
    cout<<"INPUT N:";
    cin>>n;
    Score_ sc[n];
    for(;i<n;i++){
        sc[i].set_student();
    }
    find_max_avg_countS(sc,n);


    return 0;
}