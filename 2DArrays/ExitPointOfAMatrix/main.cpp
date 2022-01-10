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
        int i=0;
        int j=0;

        int dir=0;
        int count=0;
        int tne=m*n;

             while(count<tne)
             {
                 dir=(dir+A[i][j])%4;
                 count++;
                 if(dir==0)
                 {
                     j++;
                 }
                 else if(dir==1)
                 {
                     i++;
                 }
                 else if(dir==2)
                 {
                     j--;
                 }
                 else if(dir==3)
                 {
                     i--;
                 }

                 if(i<0)
                 {
                     i++;
                     break;
                 }
                 else if(j<0)
                 {
                     j++;
                     break;
                 }
                 else if(i==m)
                 {
                     i--;
                     break;
                 }
                 else if(j==n)
                 {
                     j--;
                     break;
                 }
             }
                cout<<i<<","<<j;

}
