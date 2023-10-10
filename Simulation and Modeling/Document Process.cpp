#include<iostream>
using namespace std;
int main()
{
    int i,j,st[100],wt[100],ft[100],ct[100],bt[100],N;
    cout<<"Enter the Job Number"<<endl;
    cin>>N;
    cout<<"Enter the Work Time"<<endl;
    for(int i=0;i<N;i++)
    {
        cin>>wt[i];
    }
    st[0]=0;
    ct[0]=0;
    int rest=60;
    int flag=0;
     for(int i=0;i<N-1;i++)
        {
            if(wt[i]+st[i]>=rest)
            {
                st[i+1]=st[i]+wt[i]+5;
                flag=1;
            }
            else if(wt[i]+st[i]<rest)
                st[i+1]=st[i]+wt[i];

            if(flag==1)
            {
                flag=0;
                rest=rest+rest;
            }

        }
    for(int i=0;i<N;i++)
    {
         ft[i]=st[i]+wt[i];
         bt[i]=0;
    }



    ct[0]=wt[0];
    int flag1=ct[0];
    for(int i=0;i<N-1;i++)
    {

       if(flag1+wt[i+1]>=60)
       {
           ct[i+1]=flag1+wt[i+1];
           flag1=0;
           bt[i+1]=1;
       }
       else
       {
           ct[i+1]=flag1+wt[i+1];
           flag1=ct[i+1];

       }
    }
    cout<<"Document Number"<<"\t"<<"Start Time"<<"\t"<<"Work Time"<<"\t"<<"Finish Time"<<"\t"<<"Cumulative Time"<<"\t"<<"Break Time"<<"\t"<<"Number Of Job"<<endl;
    int n=N;
    for(int i=0;i<n;i++)
    {
      cout<<i<<"\t\t"<<st[i]<<"\t\t"<<wt[i]<<"\t\t"<<ft[i]<<"\t\t"<<ct[i]<<"\t\t"<<bt[i]<<"\t\t"<<N<<endl;
      N=N-1;
    }

}
