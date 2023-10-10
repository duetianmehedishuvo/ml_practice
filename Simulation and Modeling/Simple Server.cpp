#include <iostream>
using namespace std;
int atk[8]={0,10,15,20,25,10,10,10};
int st[8]={20,15,15,10,5,15,10,10};
int cat[8];
int idt[8]={0};
int ql[8]={0};
int cdt[8];
int nat;
int ndt;
int clock;
int dif;
int print();
int main()
{
    cat[0]=atk[0];
    for(int i=1;i<8;i++)
    {
        cat[i]=cat[i-1]+atk[i];
    }
    cout<<"CAT: ";
    for(int i=0;i<8;i++)
    {
        cout<<cat[i]<<" ";
    }
    cout<<endl;
        int i=1;
        int j=0;

        nat=cat[1];
        ndt=st[0];
        cdt[0]=st[0];
        clock=0;



while(1)
{
    if(i>8)
    {
       clock=ndt;
       cdt[j+1]=cdt[j]+st[j+1];
       ndt=cdt[j+1];
       j=j+1;
        cout<<"j "<<j<<" NdT "<<ndt<<" Clock "<<clock<<endl;
        if(j>=8)
        {
            print();
            break;
        }

    }
    else
    {
        dif=nat-ndt;
        if(dif<0)
        {
            clock=nat;
            nat=cat[i+1];
            ql[i]=i-j;
            i=i+1;
            cdt[0]=st[0];
              cout<<"i "<<i<<" NaT "<<nat<<" Clock "<<clock<<endl;
            if(j>=8)
        {
            print();
            break;
        }
        }
        else if(dif==0)
        {
            ql[i]=ql[i-1];
            clock=nat;
            nat=cat[i+1];
            cdt[j+1]=cat[i]+st[j+1];
            ndt=cdt[j+1];
            j=j+1;
            i=i+1;
             cout<<"i"<<i<<" j "<<j<<" NaT "<<nat<<" NdT "<<ndt<<" Clock "<<clock<<endl;
            if(j>=8)
        {
           print();
            break;
        }
        }
        else if(dif>0)
        {
          if((i-j)>1)
          {
               clock=ndt;
               cdt[j+1]=cdt[j]+st[j+1];
               ndt=cdt[j+1];
               j=j+1;
                cout<<"j "<<j<<" NdT "<<ndt<<" Clock "<<clock<<endl;
               if(j>=8)
                {
                    print();
                    break;
                }
          }
          else
          {
                idt[i]=dif;
                clock=nat;
                nat=cat[i+1];
                cdt[j+1]=cat[i]+st[j+1];
                ndt=cdt[j+1];
                j=j+1;
                i=i+1;
                cout<<"i"<<i<<" j "<<j<<" NaT "<<nat<<" NdT "<<ndt<<" Clock "<<clock<<endl;
                if(j>=8)
                {
                     print();
                     break;
                }
          }
        }

    }

}



    return 0;
}

int print()
{
    cout<<endl;
    cout<<"CDT: ";
    for(int i=0;i<8;i++)
    {
        cout<<cdt[i]<<" ";
    }

    cout<<endl;
    cout<<"QL: ";
    for(int i=0;i<8;i++)
    {
        cout<<ql[i]<<" ";
    }
    cout<<endl;
    cout<<"IDT: ";
    for(int i=0;i<8;i++)
    {
        cout<<idt[i]<<" ";
    }
}

