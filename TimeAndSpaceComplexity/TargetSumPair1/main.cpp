#include <iostream>

using namespace std;

int main()
{
      int n,A[50],target;
      cout<<"ENTER THE SIZE OF ARRAY A:"<<endl;
        cin>>n;
      cout<<"ENTER THE ELEMENTS OF ARRAY A:"<<endl;
         for(int i=0;i<n;i++)
         {
             cin>>A[i];
         }
      cout<<"ENTER THE VALUE OF TARGET:"<<endl;
         cin>>target;
      for(int i=0;i<n-1;i++)
      {
          for(int j=0;j<(n-i)-1;j++)
          {
              if(A[j]>A[j+1])
              {
                  int temp=A[j];
                  A[j]=A[j+1];
                  A[j+1]=temp;
              }
          }
      }
      int left=0,right=n-1;
             while(left<right)
             {
                 if(A[left]+A[right]<target)
                 {
                     left++;
                 }
                 else if(A[left]+A[right]>target)
                 {
                     right--;
                 }
                 else
                 {
                     cout<<A[left]<<","<<A[right]<<endl;
                     left++;
                     right--;
                 }
             }

}
