#include<iostream>
#include<iomanip>
#define PI 3.14159

using namespace std;

int main (){
    double R,total;
    cin>>R;
    total=(4.0/3)*PI*(R*R*R);
    cout<<"VOLUME = "<<fixed<<setprecision(3)<<total<<endl;
    return 0;
}