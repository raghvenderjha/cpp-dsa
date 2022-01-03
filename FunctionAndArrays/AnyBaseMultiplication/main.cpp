#include <iostream>

using namespace std;

  int PWASD(int n1,int d2,int b)
  {
      int ans=0;
      int pow=1;
      int carry=0;
          while(n1>0||carry>0)
          {
              int d1=n1%10;
                n1/=10;

              int prod=(d1*d2)+carry;

              int q=prod/b;
              int r=prod%b;

              carry=q;
              ans+=(r*pow);
              pow*=10;
          }
        return(ans);
  }

  int GetSum(int n1,int n2,int b)
  {
      int carry=0;
      int ans=0;
      int pow=1;
           while(n1>0||n2>0||carry>0)
           {
               int d1=n1%10;
                 n1/=10;

               int d2=n2%10;
                 n2/=10;

                int sum=d1+d2+carry;

                int q=sum/b;
                int r=sum%b;

                carry=q;
                ans+=(r*pow);
                pow*=10;
           }
        return(ans);
  }

   int GetProduct(int n1,int n2,int b)
   {
       int ans=0;
       int pow=1;
           while(n2>0)
           {
               int d2=n2%10;
                 n2/=10;

                int kemp=PWASD(n1,d2,b);
                ans=GetSum(ans,kemp*pow,b);
                  pow*=10;
           }
        return(ans);
   }

int main()
{
       int n1,n2,b;
       cout<<"ENTER THE FIRST NUMBER:"<<endl;
          cin>>n1;
       cout<<"ENTER THE SECOND NUMBER:"<<endl;
          cin>>n2;
        cout<<"ENTER THE  COMMON BASE FOR BOTH THE NUMBERS:"<<endl;
           cin>>b;
        int temp=GetProduct(n1,n2,b);

        cout<<temp<<endl;


}
