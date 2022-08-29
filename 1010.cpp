#include<iostream>
#include<iomanip>

using namespace std;

int main (){
    int cod1,cod2,quant1,quant2;
    float valor1,valor2,total;
    cin>>cod1>>quant1>>valor1>>cod2>>quant2>>valor2;
    total=(quant1*valor1+quant2*valor2);
    cout<<"VALOR A PAGAR: R$ "<<fixed<<setprecision(2)<<total<<endl;
    return 0;
}