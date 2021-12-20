#include <iostream>

using namespace std;

int main()
{
      int n,a=0,b=1,c;
      cout<<"ENTER THE VALUE OF N:"<<endl;
         cin>>n;
      int star=1;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=star;j++)
            {
                cout<<a<<"\t";
                  c=a+b;
                  a=b;
                  b=c;
            }
            cout<<endl;
            star++;
        }
}
