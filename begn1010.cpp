#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long cdp1,unp1,cdp2,unp2;
    double prp1,prp2;
    cin>>cdp1>>unp1>>prp1;
    cin>>cdp2>>unp2>>prp2;
    cout<<fixed<<setprecision(2)<<"VALOR A PAGAR: R$ "<<(unp1*prp1)+(unp2*prp2)<<endl;
    return 0;
}
