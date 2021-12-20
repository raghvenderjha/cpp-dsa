#include <iostream>

using namespace std;

int main()
{
     int n,val=1;
     cout<<"ENTER THE VALUE OF N:"<<endl;
       cin>>n;
      int star=1;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=star;j++)
            {
                cout<<val<<"\t";
                val++;
            }
            cout<<endl;
            star++;
        }
}
