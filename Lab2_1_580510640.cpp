//Suphanan Mujarin580510640

#include <iostream>
using namespace std;

int return_odd(int a,int b);

int main(){
    int N1;
    int N2;
    int ans;
    cout<<"Begin number: ";
    cin>>N1;
    cout<<"Last number: ";
    cin>>N2;

    while(N2<N1){
        cin>>N1;
    }
    cout<<"Input N1 = "<<N1  <<"  N2 ="<<N2<<endl;
    ans = return_odd(N1,N2);
    cout<<endl<<"       "<<ans<<" numbers" <<endl;

    return 0;
}

int return_odd(int a,int b){
    int count = 0;
    int i = a;
    cout<<"Output ";
    for(; i<=b ;i++){
        if ((i%2)==0){
            cout<<i<<" ";
            count+=1;
        }
    }
    return count;
}