#include <iostream>

using namespace std;

int main()
{
       int n,b;
       cout<<"ENTER THE DECIMAL NUMBER:"<<endl;
          cin>>n;
       cout<<"ENTER THE BASE IN WHICH GIVEN NUMBER HAS TO BE CONVERTED:"<<endl;
          cin>>b;
       int ans=0;
       int pow=1;
            while(n>0)
            {
                int digit=n%b;
                ans+=digit*pow;
                pow*=10;
                n/=b;
            }
        cout<<ans<<endl;

}
