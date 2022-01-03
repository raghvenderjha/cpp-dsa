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
        int inverse[50];
       for(int i=0;i<n;i++)
       {
           inverse[A[i]]=i;
       }
       for(int i=0;i<n;i++)
       {
           cout<<inverse[i]<<"\t";
       }
}
