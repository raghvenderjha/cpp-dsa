#include <iostream>

using namespace std;

      void CountSort(int A[],int max,int min,int n)
      {
          int range=max-min;
          int range1=range+1;
          int freq[range1];

          for(int i=0;i<range1;i++)
          {
              freq[i]=0;
          }

          for(int i=0;i<n;i++)
          {
              int index=A[i]-min;
              freq[index]++;
          }

          for(int i=1;i<range1;i++)
          {
              freq[i]=freq[i]+freq[i-1];
          }

          int ans[n];

          for(int i=n-1;i>=0;i--)
          {
              int val=A[i];
              int pos=freq[val-min];
              int index=pos-1;
              ans[index]=val;
              freq[val-min]--;
          }

          for(int i=0;i<n;i++)
          {
              A[i]=ans[i];
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
        int min=A[0];
           for(int i=1;i<n;i++)
           {
               if(A[i]<min)
               {
                   min=A[i];
               }
           }
        CountSort(A,max,min,n);

        for(int i=0;i<n;i++)
        {
            cout<<A[i]<<"\t";
        }
}
