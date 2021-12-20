#include <iostream>

using namespace std;

int main()
{
     int n;
     cout<<"ENTER THE VALUE OF N:"<<endl;
        cin>>n;
     int star=1;
       for(int i=0;i<n;i++)
       {
           int val=1;
           for(int j=0;j<star;j++)
           {
               cout<<val<<"\t";
               val=(val*(i-j))/(j+1);
           }
           cout<<endl;
           star++;
       }
}
