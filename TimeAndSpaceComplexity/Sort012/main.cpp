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
       int i=0;
       int j=0;
       int k=n-1;


       //0 to j-1 -> 0
       //j to i-1 -> 1
       //i to k-1 -> unknown
       //k to end -> 2

               while(i<=k)
               {
                   if(A[i]==0)
                   {
                       int temp=A[i];
                       A[i]=A[j];
                       A[j]=temp;
                       i++;
                       j++;
                   }
                   else if(A[i]==1)
                   {
                       i++;
                   }
                   else
                   {
                       int temp=A[i];
                       A[i]=A[k];
                       A[k]=temp;
                       k--;


                   }
               }
            for(int i=0;i<n;i++)
            {
                cout<<A[i]<<"\t";
            }
}
