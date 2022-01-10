#include <iostream>

using namespace std;

int main()
{
      int n,A[50],pivot;
      cout<<"ENTER THE SIZE OF ARRAY A:"<<endl;
         cin>>n;
      cout<<"ENTER THE ELEMENTS OF ARRAY A:"<<endl;
         for(int i=0;i<n;i++)
         {
             cin>>A[i];
         }
      cout<<"ENTER THE VALUE OF PIVOT:"<<endl;
         cin>>pivot;
      int i=0;
      int j=0;

      //i to end -> unknown
      //0 to j-1 -> <=pivot
      //j to i-1 -> >pivot

             while(i<n)
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
        for(int i=0;i<n;i++)
        {
            cout<<A[i]<<"\t";
        }
}
