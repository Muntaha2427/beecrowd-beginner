#include<bits/stdc++.h>
using namespace std;
int main()
{
    double A,B,C,pi,T,Cr,Tr,Sq,R;
    pi=3.14159;
    cin>>A>>B>>C;
    T=(1/2.0)*A*C;
    Cr=pi*C*C;
    Tr=((A+B)/2.0)*C;
    Sq=B*B;
    R=A*B;
    cout<<fixed<<setprecision(3)<<"TRIANGULO: "<<T<<endl;
    cout<<fixed<<setprecision(3)<<"CIRCULO: "<<Cr<<endl;
    cout<<fixed<<setprecision(3)<<"TRAPEZIO: "<<Tr<<endl;
    cout<<fixed<<setprecision(3)<<"QUADRADO: "<<Sq<<endl;
    cout<<fixed<<setprecision(3)<<"RETANGULO: "<<R<<endl;
    return 0;
}
