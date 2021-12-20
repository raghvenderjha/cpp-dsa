#include <iostream>

using namespace std;

int main()
{
      int n,val=1;
      cout<<"ENTER THE VALUE OF N:"<<endl;
        cin>>n;
      int space=n/2;
      int star=1;
         for(int i=1;i<=n;i++)
         {
             for(int j=1;j<=space;j++)
             {
                 cout<<"\t";
             }
             int cval=val;
             for(int j=1;j<=star;j++)
             {
                 cout<<cval<<"\t";
                   if(j<=star/2)
                   {
                       cval++;
                   }
                   else
                   {
                       cval--;

                   }

             }
             cout<<endl;
             if(i<=n/2)
             {
                 space--;
                 star+=2;
                 val++;
             }
             else
             {
                 space++;
                 star-=2;
                 val--;
             }
         }
}
