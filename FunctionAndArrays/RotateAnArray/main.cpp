#include <iostream>

using namespace std;

    int reverse(int A[],int left,int right)
    {

           while(left<=right)
           {
               int temp=A[left];
                 A[left]=A[right];
                 A[right]=temp;
                 left++;
                 right--;
           }
    }

int main()
{
       int n,A[50],r;
       cout<<"ENTER THE SIZE OF ARRAY A:"<<endl;
          cin>>n;
       cout<<"ENTER THE ELEMENTS OF ARRAY A:"<<endl;
          for(int i=0;i<n;i++)
          {
              cin>>A[i];
          }
       cout<<"ENTER THE ROTATION POLICY FACTOR:"<<endl;
          cin>>r;
       reverse(A,0,n-r-1);
       reverse(A,n-r,n-1);
       reverse(A,0,n-1);

       for(int i=0;i<n;i++)
       {
           cout<<A[i]<<"\t";
       }
}
