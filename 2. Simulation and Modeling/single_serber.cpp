#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"ENTER THE VALUE OF N"<<endl;
    cin>>n;
    int A[n],ST[n],k=1,CAT[n],IDT[n],QL[n],NAT,CDT[n],NDT,DIF=0;
    CAT[1]=0;
    cout<<"enter the value of arival time"<<endl;
    int cum=0;
    for(int i=1; i<=n; i++)
    {
        cin>>A[i];
        cum=cum+A[i];
        CAT[i]=cum;
    }
    cout<<"enter the value of service time"<<endl;
    for(int i=1; i<=n; i++)
    {
        cin>>ST[i];
        IDT[i]=0;
        QL[i]=0;
    }
    int clock=0;
    A[1]=0;
    int I=2;
    int J=1;
    NAT=CAT[2];
    NDT=ST[1];
    CDT[1]=ST[1];
    while(1)
    {
        l3:
        if(I>n)
        {
            goto l1;
        }
        else
        {
            DIF=NAT-NDT;
            if(DIF<0)
            {
                clock=NAT;
                NAT=CAT[I+1];
                QL[I]=I-J;
                I=I+1;
                goto l3;
            }
            else if(DIF>0)
            {
                if((I-J)>1)
                {
                    l1:
                    clock=NDT;
                    CDT[J+1]=CDT[J]+ST[J+1];
                    NDT=CDT[J+1];
                    J=J+1;
                    goto l2;
                }
                else
                {
                    IDT[I]=DIF;
                    goto l4;
                }
            }
            else
            {
                QL[I]=QL[I-1];
                l4:
                clock=NAT;
                NAT=CAT[I+1];
                CDT[J+1]=CAT[I]+ST[J+1];
                NDT=CDT[J+1];
                J=J+1;
                I=I+1;
            }
        }
        l2:

        if(J>=n)
        {
            break;
        }
    }
    cout<<"Output"<<endl;
    cout<<"CAT : ";
    for(int i=1; i<=n; i++)
    {
        cout<<CAT[i]<<" ";
    }
    cout<<endl;
    cout<<"CDT : ";
    for(int i=1; i<=n; i++)
    {
        cout<<CDT[i]<<" ";
    }
    cout<<endl;
    cout<<"IDT : ";
    for(int i=1; i<=n; i++)
    {
        cout<<IDT[i]<<" ";
    }
    cout<<endl;
    cout<<"QL : ";
    for(int i=1; i<=n; i++)
    {
        cout<<QL[i]<<" ";
    }
    cout<<endl;

    return 0;
}
