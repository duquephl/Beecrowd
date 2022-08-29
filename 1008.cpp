#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int A,B;
    float C;
    cin>>A>>B>>C;
    cout<<"NUMBER = "<<A<<"\nSALARY = U$ ";
    cout<<fixed <<setprecision(2);
    cout<<B*C<<endl;
    return 0;
}