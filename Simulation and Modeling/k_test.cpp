#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cout<<"Enter the value of N"<<endl;
    cin>>N;
    float arr[N],arr1[N],arr2[N],arr3[N],arr4[N],al;
    cout<<"Enter the value "<<endl;
    for(int i=0; i<N; i++)
    {
        cin>>arr[i];
        arr4[i]=i+1;
    }
    cout<<"Enter the value of alpa"<<endl;
    cin>>al;
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            if(arr[i]<arr[j])
            {
                swap(arr[i],arr[j]);
            }
        }
    }

    float va;
    for(int i=0; i<N; i++)
    {
        va=arr4[i]/N;
        arr1[i]=va;
    }

    for(int i=0; i<N; i++)
    {
        va=arr1[i]-arr[i];
        arr2[i]=va;
    }

    for(int i=0; i<N; i++)
    {
        va=arr[i]-((arr4[i]-1)/N);
        arr3[i]=va;
    }
    float D1=0,D2=0;
    for(int i=0; i<N; i++)
    {

        if(D1<arr2[i])
        {
            D1=arr2[i];
        }
        if(D2<arr3[i])
        {
            D2=arr3[i];
        }
    }
    float D=0;
    if(D1>D2)
    {
        D=D1;
    }
    else
    {
        D=D2;
    }
    cout<<"value of D : "<<D;
    if(al>D)
    {
        cout<<"Accept"<<endl;
    }
    else
    {
        cout<<"Reject"<<endl;
    }

    return 0;
}
