#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,D,R1,R2;
    cin>>a>>b>>c;
    D=(b*b-4*a*c);
    if(D>=0 && a!=0)
    {
        R1 = ((-b+sqrt(D))/(2*a));
        R2 = ((-b-sqrt(D))/(2*a));
        cout<<fixed<<setprecision(5)<<"R1 = "<<R1<<endl<<"R2 = "<<R2<<endl;
    }
    else
    {
       cout<<"Impossivel calcular"<<endl;
    }
    return 0;
}

