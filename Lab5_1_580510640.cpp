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
        int operator==(Enroll);

};
int Enroll::operator==(Enroll en2){
    int mul1,mul2;
    mul1 = gradepoint()*credit;
    mul2 = en2.gradepoint()*en2.credit;

    if (mul1 == mul2){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    
    Enroll en1,en2;
    cout<<"Subject #1"<<endl;
    en1.setcredit();
    en1.setgrade();
    cout<<"Subject #2"<<endl;
    en2.setcredit();
    en2.setgrade();

    if (en1 == en2){
        cout<<"Points for both subjects are equal";
    }
    else{
        cout<<"Points for both subjects are not equal";
    }

    return 0;
}