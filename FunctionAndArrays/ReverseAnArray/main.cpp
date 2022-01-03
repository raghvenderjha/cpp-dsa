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
      int left=0,right=n-1;
         while(left<=right)
         {
             int temp=A[left];
               A[left]=A[right];
               A[right]=temp;
               left++;
               right--;
         }
        for(int i=0;i<n;i++)
        {
            cout<<A[i]<<"\t";
        }
}
