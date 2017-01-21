//Suphanan Mujarin580510640
using namespace std;
#include <iostream>
void countQ(float x,float y,int *q1,int *q2,int *q3,int *q4,int *q5);
int main() {
    float x;
    float y;
    int n,q1=0,q2=0,q3=0,q4=0,q5=0;
    cout<<"enter n :";
    cin>>n;

    for(int i=1;i <= n;i++){
         cout<<"enter x and y :";
         cin>>x>>y;
         countQ(x,y,&q1,&q2,&q3,&q4,&q5);
    }
    cout<<"quadrant1 have " <<q1 << "\n";
    cout<<"quadrant2 have " <<q2 << "\n";
    cout<<"quadrant3 have " <<q3 << "\n";
    cout<<"quadrant4 have " <<q4 << "\n";
    cout<<"quadrant5 have " <<q5 << "\n";


}
void countQ(float x,float y,int *q1,int *q2,int *q3,int *q4,int *q5){
    if ((x>0)&&(y>0)){
        (*q1)++;
    }
    else if ((x<0)&&(y>0)){
        (*q2)++;
    }
        else if((x<0)&&(y<0)){
            (*q3)++;
        }
            else if((x>0)&&(y<0)){
                (*q4)++;
            }
                else{
                    (*q5)++;
                }
}

