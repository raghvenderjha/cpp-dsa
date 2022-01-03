#include <iostream>

using namespace std;

int main()
{
       int n1,n2,b;
       cout<<"ENTER THE FIRST NUMBER:"<<endl;
         cin>>n1;
       cout<<"ENTER THE SECOND NUMBER:"<<endl;
         cin>>n2;
       cout<<"ENTER THE COMMON BASE OF BOTH THE NUMBERS:"<<endl;
         cin>>b;
       int carry=0;
       int ans=0;
       int pow=1;
            while(n2>0)
            {
                int d1=n1%10;
                  n1/=10;

                int d2=n2%10;
                  n2/=10;

                int diff=0;
                 d2=d2+carry;

                if(d2>=d1)
                {
                    diff=(d2-d1);
                    carry=0;
                }
                else
                {
                    diff=(d2+b)-d1;
                     carry=-1;
                }
              ans+=(diff*pow);
                pow*=10;
            }
          cout<<ans<<endl;
}
