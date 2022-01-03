#include <iostream>

using namespace std;

   int AnyBaseToDecimal(int n,int b)
   {
       int ans=0;
       int pow=1;
            while(n>0)
            {
                int digit=n%10;
                ans+=digit*pow;
                pow*=b;
                n/=10;
            }
        return(ans);
   }
   int DecimalToAnyBase(int n,int b)
   {
       int ans=0;
       int pow=1;
            while(n>0)
            {
                int digit=n%b;
                ans+=digit*pow;
                pow*=10;
                n/=b;
            }
        return(ans);
   }

int main()
{
       int n,b1,b2;
       cout<<"ENTER THE NUMBER:"<<endl;
         cin>>n;
       cout<<"ENTER THE BASE OF THE NUMBER:"<<endl;
         cin>>b1;
       int temp=AnyBaseToDecimal(n,b1);
       cout<<"ENTER THE BASE IN WHICH GIVEN NUMBER HAS TO BE CONVERTED:"<<endl;
          cin>>b2;
        int kemp=DecimalToAnyBase(temp,b2);

        cout<<kemp<<endl;
}
