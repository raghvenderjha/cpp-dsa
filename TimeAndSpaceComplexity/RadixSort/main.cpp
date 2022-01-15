#include <iostream>

using namespace std;


    void CountSort(int A[],int exp,int n)
    {
        int range=10;
        int freq[range];

        for(int i=0;i<range;i++)
        {
            freq[i]=0;
        }

        for(int i=0;i<n;i++)
        {

            freq[A[i]/exp%10]++;
        }
        for(int i=1;i<range;i++)
        {
            freq[i]=freq[i]+freq[i-1];
        }

        int ans[n];

        for(int i=n-1;i>=0;i--)
        {

            int pos=freq[A[i]/exp%10]-1;

            ans[pos]=A[i];
            freq[A[i]/exp%10]--;
        }

        for(int i=0;i<n;i++)
        {
            A[i]=ans[i];
        }
    }

     void RadixSort(int A[],int max,int n)
     {
         int exp=1;
             while(exp<=max)
             {
                 CountSort(A,exp,n);
                 exp*=10;
             }
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
        int max=A[0];
           for(int i=1;i<n;i++)
           {
               if(A[i]>max)
               {
                   max=A[i];
               }
           }
        RadixSort(A,max,n);

        for(int i=0;i<n;i++)
        {
            cout<<A[i]<<"\t";
        }
}
