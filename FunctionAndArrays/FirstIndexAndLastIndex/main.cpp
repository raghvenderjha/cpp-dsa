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
       cout<<"ENTER THE ELEMENT WHOSE FIRST AND LAST INDEX TO BE KNOWN:"<<endl;
          cin>>item;
       int left=0,right=n-1;
       int fi=-1;
          while(left<=right)
          {
              int mid=(left+right)/2;
              if(A[mid]==item)
              {
                  fi=mid;
                  right=mid-1;
              }
              else if(item>A[mid])
              {
                  left=mid+1;
              }
              else
              {
                  right=mid-1;
              }
          }
        cout<<fi<<endl;
           left=0,right=n-1;
       int li=-1;
          while(left<=right)
          {
              int mid=(left+right)/2;
              if(A[mid]==item)
              {
                  li=mid;
                  left=mid+1;
              }
              else if(item>A[mid])
              {
                  left=mid+1;
              }
              else
              {
                  right=mid-1;
              }
          }
        cout<<li<<endl;
}
