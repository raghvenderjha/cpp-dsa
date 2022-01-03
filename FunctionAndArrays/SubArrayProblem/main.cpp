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
       for(int i=0;i<n;i++)
       {
           for(int j=i;j<n;j++)
           {
               for(int k=i;k<=j;k++)
               {
                   cout<<A[k]<<"\t";
               }
               cout<<endl;
           }
       }
}
