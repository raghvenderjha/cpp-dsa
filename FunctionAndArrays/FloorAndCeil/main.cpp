#include <iostream>

using namespace std;

int main()
{
      int n,A[50],item;
      cout<<"ENTER THE SIZE OF ARRAY A:"<<endl;
        cin>>n;
      cout<<"ENTER THE ELEMENTS OF ARRAY A:"<<endl;
         for(int i=0;i<n;i++)
         {
             cin>>A[i];
         }
       cout<<"ENTER THE ELEMENT WHOSE FLOOR AND CEIL TO BE KNOWN:"<<endl;
          cin>>item;
       int left=0,right=n-1;
       int floor=-1,ceil=-1;
          while(left<=right)
          {
              int mid=(left+right)/2;
              if(A[mid]==item)
              {
                  floor=A[mid];
                  ceil=A[mid];
                  break;
              }
              else if(item>A[mid])
              {
                  left=mid+1;
                  floor=A[mid];
              }
              else
              {
                  right=mid-1;
                  ceil=A[mid];
              }
          }
        cout<<floor<<endl;
        cout<<ceil<<endl;
}
