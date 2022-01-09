#include <iostream>

using namespace std;

int main()
{
       int n,A[50];
       cout<<"ENTER THE SIZE OF ARRAY A:"<<endl;
          cin>>n;
       cout<<"ENTER THE ELEMENTS OF ARRAY A:"<<endl;
          for(int i=0;i<n;i++)
          {
              cin>>A[i];
          }
       for(int i=0;i<n-1;i++)
       {
           int min=i;
           for(int j=i+1;j<n;j++)
           {
               if(A[j]<A[min])
               {
                   min=j;
               }
           }
         int temp=A[i];
         A[i]=A[min];
         A[min]=temp;
       }
       for(int i=0;i<n;i++)
       {
           cout<<A[i]<<"\t";
       }
}
