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
         for(int i=0;i<n;i++)
         {
             if(A[i]==item)
             {
                 pos=i;
             }
         }
        cout<<pos<<endl;
}
