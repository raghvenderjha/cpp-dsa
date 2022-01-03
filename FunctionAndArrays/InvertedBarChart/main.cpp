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
       int max=A[0];
         for(int i=1;i<n;i++)
         {
             if(A[i]>max)
             {
                 max=A[i];
             }
         }
        for(int i=1;i<=max;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(A[j]>=i)
                {
                    cout<<"*"<<"\t";
                }
                else
                {
                    cout<<"\t";
                }
            }
            cout<<endl;
        }
}
