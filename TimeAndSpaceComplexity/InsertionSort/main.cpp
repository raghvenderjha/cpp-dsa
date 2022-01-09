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
        for(int i=1;i<n;i++)
        {
            for(int j=i-1;j>=0;j--)
            {
                if(A[j]>A[j+1])
                {
                    int temp=A[j];
                    A[j]=A[j+1];
                    A[j+1]=temp;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            cout<<A[i]<<"\t";
        }
}
