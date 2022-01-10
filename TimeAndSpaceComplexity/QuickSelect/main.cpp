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

    int QuickSelect(int A[],int left,int right,int k)
    {
        if(left<right)
        {
            int pivot=A[right];
            int pidx=Par(A,left,right,pivot);
            if(k<pivot)
            {
                QuickSelect(A,left,pidx-1,k);

            }
            else if(k>pivot)
            {
                QuickSelect(A,pidx+1,right,k);
            }
            else
            {
                return pidx;
            }
        }
    }

int main()
{
       int n,A[50],k;
       cout<<"ENTER THE SIZE OF ARRAY A:"<<endl;
          cin>>n;
       cout<<"ENTER THE ELEMENTS OF ARRAY A:"<<endl;
          for(int i=0;i<n;i++)
          {
              cin>>A[i];
          }
        cout<<"ENTER THE POSITION OF SMALLEST ELEMENT TO BE FOUND:"<<endl;
           cin>>k;
        int temp=QuickSelect(A,0,n-1,k-1);

           cout<<A[temp]<<"\t";
}
