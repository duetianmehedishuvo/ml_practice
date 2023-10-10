#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float R[30]={0.12,0.01,0.23,0.28,0.89,0.31,0.64,0.28,0.83,0.93,0.99,0.15,0.33,0.35,0.91,0.41,0.60,0.27,0.75,0.88,0.68,0.49,0.05,0.43,0.95,0.58,0.19,0.39,0.69,0.80};
    int l,i,N,j,t=3,t1=8,t2=13,M;
    float sum=0,st,z,x=1.9,y=0.06,w;
    l=t1-t,i=t;
    for(j=1;i+(j+1)*l<=30;j++);
    M=j-1;
    for(j=0;j<=M;j++)
    {
        sum=sum+R[i+j*l]*R[i+(j+1)*l];
    }
    sum=(1/(M+1))*sum-0.25;
    st=(sqrt(13*M+7)/(12*(M+1)));
    z=sum/st;
    w=x+y;
    if(-w<=z)
    {
        if(z<=w)
        {
            cout<<"Accepct"<<endl;
        }
        else
        {
            cout<<"Reject"<<endl;
        }
    }
    else
    {
        cout<<"Reject "<<endl;
    }


}
