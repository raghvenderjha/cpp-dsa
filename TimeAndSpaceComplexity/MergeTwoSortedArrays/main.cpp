#include <iostream>

using namespace std;

int main()
{
      int m,A[50];
      cout<<"ENTER THE SIZE OF ARRAY A:"<<endl;
         cin>>m;
       cout<<"ENTER THE ELEMENTS OF ARRAY A:"<<endl;
          for(int i=0;i<m;i++)
          {
              cin>>A[i];
          }
       int n,B[50];
      cout<<"ENTER THE SIZE OF ARRAY B:"<<endl;
         cin>>n;
       cout<<"ENTER THE ELEMENTS OF ARRAY B:"<<endl;
          for(int i=0;i<n;i++)
          {
              cin>>B[i];
          }
       int C[m+n];

        int i=0;
        int j=0;
        int k=0;

             while(i<m&&j<n)
             {
                 if(A[i]<B[j])
                 {
                     C[k]=A[i];
                     i++;
                     k++;
                 }
                 else
                 {
                     C[k]=B[j];
                     j++;
                     k++;
                 }
             }
             while(i<m)
             {
                  C[k]=A[i];
                     i++;
                     k++;

             }
             while(j<n)
             {
                  C[k]=B[j];
                     j++;
                     k++;

             }
         for(int i=0;i<m+n;i++)
         {
             cout<<C[i]<<"\t";
         }
}
