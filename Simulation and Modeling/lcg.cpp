#include<bits/stdc++.h>
using namespace std;
int main()
{
    int X,A,C,M;
    cout<<"enter the value of X0"<<endl;
    cin>>X;
    cout<<"enter the value of A"<<endl;
    cin>>A;
    cout<<"Enter the value of C"<<endl;
    cin>>C;
    cout<<"Enter the value of M"<<endl;
    cin>>M;
    int X1=0;
    int rem=X;
    cout<<rem<<endl;
    while(1)
    {
        X1=(X*A+C)%M;
        cout<<X1<<endl;
        if(rem==X1)
        {
            break;
        }
        X=X1;
    }
    return 0;
}
