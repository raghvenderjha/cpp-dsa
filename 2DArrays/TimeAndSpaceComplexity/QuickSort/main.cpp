#include <iostream>

using namespace std;

    int Par(int A[],int left,int right,int pivot)
    {
        int i=left;
        int j=left;

        //i to end -> unknown
        //0 to j-1 -> <=pivot
        //j to i-1 -> >pivot

               while(i<=right)
               {
                   if(A[i]>pivot)
                   {
                       i++;
                   }
                   else
                   {
                       int temp=A[i];
                       A[i]=A[j];
                       A[j]=temp;
                       i++;
                       j++;
                   }
               }
            return(j-1);
    }

    void QuickSort(int A[],int left,int right)
    {
        if(left<right)
        {
            int pivot=A[right];
            int pidx=Par(A,left,right,pivot);
            QuickSort(A,left,pidx-1);
            QuickSort(A,pidx+1,right);
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
      QuickSort(A,0,n-1);

      for(int i=0;i<n;i++)
      {
          cout<<A[i]<<"\t";
      }
}

