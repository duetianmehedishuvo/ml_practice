#include<iostream>
using namespace std;
int main()
{
    float value[5]={0.44,0.81,0.14,0.05,0.93};
    float D1[5],D2[5],temp,l;
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(value[i]>value[j])
            {
                temp=value[i];
                value[i]=value[j];
                value[j]=temp;
            }
        }
    }
    for(i=0;i<5;i++)
    {
        cout<<value[i]<<" ";
    }
    cout<<endl;
    for(i=1;i<=5;i++)
    {
        l=float(i/5.0)-value[i-1];
        //cout<<l<<" ";
        if(l<0)
        {
            D1[i-1]=0;
        }
        else
        {
             D1[i-1]=l;
        }
        l=value[i-1]-((i-1)/5.0);
        //cout<<l<<" ";
        if(l<0)
        {
            D2[i-1]=0;
        }
        else
        {
             D2[i-1]=l;
        }


    }
    l=D1[0];
    for(i=0;i<5;i++)
    {

        if(l<=D1[i])
        {
            l=D1[i];
        }
    }
    cout<<l<<endl;
    float l1=D2[0];
    for(i=0;i<5;i++)
    {

        if(l1<=D2[i])
        {
            l1=D2[i];
        }
    }
    cout<<l1<<endl;
    float max;
    if(l>l1)
    {
        max=l;
    }
    else
    {
        max=l1;
    }
    if(0.565>max)
    {
        cout<<"Accept"<<endl;
    }
    else
    {
        cout<<" Reject"<<endl;
    }
}
