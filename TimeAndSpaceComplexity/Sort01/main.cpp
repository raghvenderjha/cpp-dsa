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

       //i to end -> unknown
       //0 to j-1 -> 0
       //j to i-1 -> 1

             while(i<n)
             {
                 if(A[i]==1)
                 {
                     i++;
                 }
                 else if(A[i]==0)
                 {
                     int temp=A[i];
                     A[i]=A[j];
                     A[j]=temp;
                     i++;
                     j++;
                 }
             }
         for(int i=0;i<n;i++)
         {
             cout<<A[i]<<"\t";
         }
}
