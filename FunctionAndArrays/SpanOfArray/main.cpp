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
       int min=A[0];
         for(int i=1;i<n;i++)
         {
             if(A[i]<min)
             {
                 min=A[i];
             }
         }
       int range=max-min;
         cout<<range<<endl;
}
