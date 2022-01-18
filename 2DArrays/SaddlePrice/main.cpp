#include <iostream>

using namespace std;

int main()
{
      int m,n,A[50][50];
      cout<<"ENTER THE SIZE OF ARRAY A:"<<endl;
         cin>>m>>n;
      cout<<"ENTER THE ELEMENTS OF ARRAY A:"<<endl;
         for(int i=0;i<m;i++)
         {
             for(int j=0;j<n;j++)
             {
                 cin>>A[i][j];
             }
         }
       for(int i=0;i<m;i++)
       {
           int svj=0;
           for(int j=1;j<n;j++)
           {
               if(A[i][j]<A[i][svj])
               {
                   svj=j;
               }
           }
           bool flag=true;
           for(int k=0;k<m;k++)
           {
               if(A[k][svj]>A[i][svj])
               {
                   flag=false;
                   break;
               }
           }
           if(flag==true)
           {
               cout<<A[i][svj];
           }
       }
}
