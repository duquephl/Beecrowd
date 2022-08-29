#include<iostream>
#include<iomanip>
#define PI 3.14159

using namespace std;

int main (){
    float a,b,c;
    cin>>a>>b>>c;
    cout<<"TRIANGULO: "<<fixed<<setprecision(3)<<((a*c)/2)<<endl;
    cout<<"CIRCULO: "<<fixed<<setprecision(3)<<(c*c*PI)<<endl;
    cout<<"TRAPEZIO: "<<fixed<<setprecision(3)<<(((a+b)*c)/2)<<endl;
    cout<<"QUADRADO: "<<fixed<<setprecision(3)<<(b*b)<<endl;
    cout<<"RETANGULO: "<<fixed<<setprecision(3)<<(a*b)<<endl;
    return 0;
}