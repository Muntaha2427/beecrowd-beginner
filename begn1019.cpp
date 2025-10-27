#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long N,sec,mins,hrs;
    cin>>N;
    sec=N%60;
    mins=(N/60)%60;
    hrs=(N/60)/60;
    cout<<hrs<<":"<<mins<<":"<<sec<<endl;
    return 0;

}

