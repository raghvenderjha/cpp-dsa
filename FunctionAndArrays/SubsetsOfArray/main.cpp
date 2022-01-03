#include <iostream>
#include <cmath>

using namespace std;

    int DecimalToBinary(int n)
    {
        int ans=0;
        int pow=1;
           while(n>0)
           {
               int digit=n%2;
               ans+=digit*pow;
               pow*=10;
               n/=2;
           }
        return(ans);
    }

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
       int subsets=pow(2,n);
       for(int i=0;i<subsets;i++)
       {
           int bn=DecimalToBinary(i);
           int div=pow(10,n-1);
           for(int j=0;j<n;j++)
           {
               int q=bn/div;
               int r=bn%div;

               if(q==0)
               {
                   cout<<"_"<<"\t";
               }
               else
               {
                   cout<<A[j]<<"\t";
               }
               bn=r;
               div/=10;
           }
           cout<<endl;
       }
}
