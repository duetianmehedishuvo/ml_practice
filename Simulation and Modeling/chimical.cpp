#include<bits/stdc++.h>
using namespace std;
int main()
{
    float k1=0.008,k2=0.002,a=100,b=50,c=0,dt=0.1,T=0,a_nw,b_nw,c_nw;
    cout<<"Time\t"<<"A\t"<<"B\t"<<"C"<<endl;
    for(int i=0; i<=10; i++)
    {
        cout<<fixed<<setprecision(2)<<T<<"\t"<<a<<"\t"<<b<<"\t"<<c<<endl;
        a_nw=a+((k2*c)-(k1*a*b))*dt;

        b_nw=b+((k2*c)-(k1*a*b))*dt;

        c_nw=c+((k1*a*b*2)-(k2*c))*dt;

        a=a_nw;
        b=b_nw;
        c=c_nw;
        T=T+dt;
    }

    return 0;
}
