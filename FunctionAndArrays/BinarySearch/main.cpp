#include <iostream>

using namespace std;

int main()
{
      int n,A[50],item,pos=-1;
      cout<<"ENTER THE SIZE OF ARRAY A:"<<endl;
         cin>>n;
      cout<<"ENTER THE ELEMENTS OF ARRAY A:"<<endl;
         for(int i=0;i<n;i++)
         {
             cin>>A[i];
         }
      cout<<"ENTER THE ELEMENT TO BE SEARCHED FOR:"<<endl;
         cin>>item;
       int left=0,right=n-1;
          while(left<=right)
          {
              int mid=(left+right)/2;
              if(A[mid]==item)
              {
                  pos=mid;
                  break;
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
        cout<<pos<<endl;
}
