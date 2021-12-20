#include <iostream>

using namespace std;

int main()
{
      int n;
      cout<<"ENTER THE VALUE OF N:"<<endl;
        cin>>n;
      int star=1;
      int space=n+1;
         for(int i=1;i<=n;i++)
         {
             int val=1;
             for(int j=1;j<=star;j++)
             {
                 cout<<val<<"\t";
                 val++;
             }
             for(int j=1;j<=space;j++)
             {
                 cout<<"\t";
             }
             if(i==n)
             {
                 val--;
                 star--;
             }
             for(int j=1;j<=star;j++)
             {
                 val--;
                 cout<<val<<"\t";
             }
             cout<<endl;
             star++;
             space-=2;
         }
}
