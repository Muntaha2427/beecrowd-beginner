#include<bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    double salary,sell_made,total;
    cin>>name>>salary>>sell_made;
    total=(sell_made*15/100)+salary;
    cout<<fixed<<setprecision(2)<<"TOTAL = R$ "<<total<<endl;
    return 0;
}
