#include <iostream>

using namespace std;


    void MergeTwoSortedArrays(int A[],int left,int mid,int right)
    {
        int i=left;
        int j=mid+1;
        int k=left;

        int size=right+1;
        int C[size];

               while(i<=mid&&j<=right)
               {
                   if(A[i]<A[j])
                   {
                       C[k]=A[i];
                       i++;
                       k++;
                   }
                   else
                   {
                       C[k]=A[j];
                       j++;
                       k++;
                   }
               }
               while(i<=mid)
               {
                    C[k]=A[i];
                       i++;
                       k++;

               }
               while(j<=right)
               {
                   C[k]=A[j];
                       j++;
                       k++;

               }
            for(int i=left;i<size;i++)
            {
                A[i]=C[i];
            }
    }

    void MergeSort(int A[],int left,int right)
    {
        if(left<right)
        {
            int mid=(left+right)/2;
            MergeSort(A,left,mid);
            MergeSort(A,mid+1,right);
            MergeTwoSortedArrays(A,left,mid,right);
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
       MergeSort(A,0,n-1);

       for(int i=0;i<n;i++)
       {
           cout<<A[i]<<"\t";
       }
}
