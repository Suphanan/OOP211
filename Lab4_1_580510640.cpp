/*
Suphanan Mujarin
580510640
*/
#include <iostream>

using namespace std;


class Enroll
{
    private :
        char grade;
        int credit;

    public :
        void setgrade(){
            cout<<"Input Grade: ";
            cin>>grade;
        }
        void setcredit(){
            cout<<"Input Credit:";
            cin>>credit;
        }
        char getgrade(){
            return grade;
        }
        int getcredit(){
            return credit;
        }
        int gradepoint(){
            if(grade == 'A'){
                return 4;
            }
            else if(grade == 'B'){
                return 3;
            }
            else if(grade == 'C'){
                return 2;
            }
            else if(grade == 'D'){
                return 1;
            }
            else{
                return 0;
            }

        }
};

int main(){
    int n=0;
    cout<<"N = ";
    cin>>n;
    Enroll en[n];
    int i = 0;
    int pt = 0;
    int cr= 0;
    int keep_pt = 0;
    int keep_cr =0;
    float keep_total =0;
    float avg=0.0;
    for(;i<n;i++){
        cout<<"Subject #"<<i+1<<endl;
        en[i].setgrade();
        en[i].setcredit();
        cout<<"\n";
    }

    cout<<"-------------------------------------------------\n";
    cout<<"\t"<<" "<<"Grade"<<"  "<<"Gradepoint"<<"  "<<"Credit"<<"  "<<"TotalPoint"<<endl;
    for(i=0;i<n;i++){
        cout<<"subject"<<i+1<<"   ";
        pt = en[i].gradepoint();
        keep_pt+=pt;
        cr = en[i].getcredit();
        keep_cr+=cr;
        cout<<en[i].getgrade();
        keep_total +=(pt*cr);
        cout<<"\t"<<"    "<<pt;
        cout<<"\t"<<"      "<<cr;
        cout<<"\t"<<"\t"<<pt*cr<<"\n";
    }
    cout<<"Total"<<"\t"<<"\t"<<"\t"<<"      "<<keep_cr<<"\t"<<keep_total<<endl;
    avg =keep_total/keep_cr;
    cout<<"GPA ="<<avg;
    return 0;
}