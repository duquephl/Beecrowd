#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

int main (){
    int a,b;
    cin>>a>>b;
    cout<<fixed<<setprecision(3)<<((a*b)/12.0)<<endl;
    return 0;
}