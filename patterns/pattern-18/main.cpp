#include <iostream>

using namespace std;

int main()
{
     int n;
     cout<<"ENTER THE VALUE OF N:"<<endl;
       cin>>n;
      int star=n;
      int space=0;
         for(int i=1;i<=n;i++)
         {
             for(int j=1;j<=space;j++)
             {
                 cout<<"\t";
             }
             for(int j=1;j<=star;j++)
             {
                 if(i>1&&i<n/2+1&&j>1&&j<star)
                 {
                     cout<<"\t";
                 }
                 else
                 {


                 cout<<"*"<<"\t";
                 }
             }
             cout<<endl;
             if(i<=n/2)
             {
                 space++;
                 star-=2;
             }
             else
             {
                 space--;
                 star+=2;
             }
         }
}
