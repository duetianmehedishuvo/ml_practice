#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,flg=0;
    cout<<"Enter number of data you can insert"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the value of work time"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int star_t=0;
    cout<<"Documenation_no\t"<<"S_time\t"<<"W_time\t"<<"F_time\t"<<"C_time\t"<<"Break"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<i+1<<"\t\t";

        cout<<star_t<<"\t";
        star_t=star_t+arr[i];
        cout<<arr[i]<<"\t";
        cout<<star_t<<"\t";
        int c_time;
        c_time=c_time+arr[i];
        cout<<c_time<<"\t";
        if(c_time>=60)
        {
            c_time=0;
            star_t=star_t+5;
            flg=1;

        }
        cout<<flg<<"\t";
        flg=0;
         cout<<endl;
    }


    return 0;
}
