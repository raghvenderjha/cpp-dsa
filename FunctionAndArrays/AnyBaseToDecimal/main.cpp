#include <iostream>

using namespace std;

int main()
{
       int n,b;
       cout<<"ENTER THE NUMBER:"<<endl;
          cin>>n;
       cout<<"ENTER THE BASE OF THE NUMBER:"<<endl;
          cin>>b;
       int ans=0;
       int pow=1;
            while(n>0)
            {
                int digit=n%10;
                ans+=digit*pow;
                pow*=b;
                n/=10;
            }
        cout<<ans<<endl;

}
