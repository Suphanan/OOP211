/*
Suphanan Mujarin
580510640
*/

#include <iostream>
#include <math.h>

using namespace std;

class Distance
{
    private :
        float feet;
        float inch;

    public :
        void setDis(){
            cout<<"Feet:";
            cin>>feet;
            cout<<"Inch:";
            cin>>inch;
        }
        
        Distance operator - (Distance);
        void showDist(){
            cout<<"Difference distant = "<<feet<<" feet "<<inch<<" inch";
        }
};

Distance Distance :: operator - (Distance dis2){
    Distance minusDis;
    int in1;
    int in2;
    int in;
    in1 = (feet*12)+(inch);
    in2 = (dis2.feet*12)+(dis2.inch);

    in = fabs(in1-in2);
    minusDis.feet= in/12;
    minusDis.inch=in%12;
    
    return minusDis;
}


        

int main(){

    Distance dis1,dis2,dis12;
    cout<<"Enter Ditance #1"<<endl;
    dis1.setDis();
    cout<<"Enter Ditance #2"<<endl;
    dis2.setDis();

    dis12 = dis1-dis2;
    dis12.showDist();
    return 0;
}