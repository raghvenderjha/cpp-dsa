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
        for(int j=0;j<n;j++)
        {
            if(j%2==0)
            {
                for(int i=0;i<m;i++)
                {
                    cout<<A[i][j]<<"\t";
                }
            }
            else
            {
                for(int i=m-1;i>=0;i--)
                {
                    cout<<A[i][j]<<"\t";
                }
            }
        }
}
