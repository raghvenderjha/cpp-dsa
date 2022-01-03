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

     int p=max(m,n);
     int*C=new int[p];

     int i=m-1;
     int j=n-1;
     int k=p-1;
     int carry=0;

            while(k>=0)
            {
                int sum=carry;
                if(i>=0)
                {
                    sum+=A[i];
                }
                if(j>=0)
                {
                    sum+=B[j];
                }
              int q=sum/10;
              int r=sum%10;

              carry=q;
              C[k]=r;
              i--;
              j--;
              k--;
            }
        while(carry!=0)
        {
            cout<<carry;
        }
        for(int i=0;i<p;i++)
        {
            cout<<C[i];
        }
}
