#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long N,days,mnths,yrs;
    cin>>N;
    //calculating
    yrs=N/365;
    mnths=(N%365)/30;
    days=(N%365)%30;

    cout<<yrs<<" ano(s)"<<endl;
    cout<<mnths<<" mes(es)"<<endl;
    cout<<days<<" dia(s)"<<endl;
    return 0;

}

