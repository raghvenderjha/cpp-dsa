#include <iostream>

using namespace std;

int main()
{
       int m,n,p,q,A[50][50],B[50][50],C[50][50];
       cout<<"ENTER THE SIZE OF MATRIX A:"<<endl;
          cin>>m>>n;
       cout<<"ENTER THE SIZE OF MATRIX B:"<<endl;
          cin>>p>>q;
        if(n==p)
        {
            cout<<"MULTIPLICATION BETWEEN MATRIX A AND B IS POSSIBLE:"<<endl;
        }
        else
        {
            cout<<"MULTIPLICATION BETWEEN MATRIX A AND B IS NOT POSSIBLE:"<<endl;
            exit(0);
        }
      cout<<"ENTER THE ELEMENTS OF MATRIX A:"<<endl;
         for(int i=0;i<m;i++)
         {
             for(int j=0;j<n;j++)
             {
                 cin>>A[i][j];
             }
         }
       cout<<"ENTER THE ELEMENTS OF MATRIX B:"<<endl;
           for(int i=0;i<p;i++)
           {
               for(int j=0;j<q;j++)
               {
                   cin>>B[i][j];
               }
           }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<q;j++)
            {
                C[i][j]=0;
                for(int k=0;k<n;k++)
                {
                    C[i][j]+=(A[i][k]*B[k][j]);
                }
            }
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<q;j++)
            {
                cout<<C[i][j]<<"\t";
            }
            cout<<endl;
        }
}
