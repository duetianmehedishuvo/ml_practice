#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,N;
    float u,l,u_limit,expected_value,r,st[n],total_out,c_value;
    cout<<"how many number you try to enter"<<endl;
    cin>>n;
    float arr[n];
    cout<<"Enter the value of N"<<endl;
    cin>>N;
    cout<<"enter the range upper limit"<<endl;
    cin>>u;
    cout<<"lower limit"<<endl;
    cin>>l;
    cout<<"Enter the Critical value"<<endl;
    cin>>c_value;
    float rem=0;
    u_limit=u/N;
    float remu=u_limit;

    expected_value=n/N;

    for(int i=0;i<n;i++)
    {
        r = ((float) rand() / (RAND_MAX + 1));
        cout << fixed<<setprecision(2);

        arr[i]=r;
    }

    int cot=0;

    cout<<"Intervel\t\t"<<"O\t"<<"E\t"<<"O-E\t"<<"(O-E)2\t"<<"(O-E)2/E"<<endl;

    for(int i=0;i<expected_value;i++)
    {
        cout<<rem<<">to <="<<u_limit<<"\t\t";


        for(int j=0;j<n;j++)
        {
           if((rem<arr[j])&&(arr[j]<=u_limit))
              {
                  cot=cot+1;
              }
        }

        cout<<cot<<"\t";

        cout<<expected_value<<"\t";

        float observation=cot-expected_value;


        cout<<observation<<"\t";
        observation=observation*observation;
        cout<<observation<<"\t";
        float out;
        out=observation/expected_value;
        cout<<out<<"\t";
        total_out=total_out+out;
        observation=0;
        cot=0;
        rem=u_limit;
        u_limit=remu+u_limit;
        cout<<endl;
    }
   cout<<"total out "<<total_out<<endl;
   if(c_value>total_out)
   {
       cout<<"ACCEPT";
   }
   else
   {
       cout<<"REJECT";
   }
    return 0;
}
