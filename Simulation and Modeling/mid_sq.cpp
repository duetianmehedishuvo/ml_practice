#include<bits/stdc++.h>
using namespace std;
int main()
{
    int z;
    int i=0;
    cout<<"Enter the value of Z0"<<endl;
    cin>>z;
    cout<<"Random number"<<endl;
    cout<<z<<endl;
    while(z)
    {
        int z1=((z*z)/100)%10000;
        cout<<i<<".   "<<z1<<endl;
        z=z1;
        i=i+1;
    }
    return 0;
}
