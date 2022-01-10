#include <iostream>

using namespace std;

int main()
{
      int m,n,A[50][50],item;
      cout<<"ENTER THE SIZE OF ARRAY A:"<<endl;
         cin>>m>>n;
       cout<<"ENTER THE ELEMENTS OF ARRAY A:"<<endl;
          for(int i=0;i<m;i++)
          {
              for(int j=0;j<n;j++)
              {
                  cin>>A[i][j];
              }
          }
       cout<<"ENTER THE ELEMENT WHOSE POSITION NEED TO BE FOUND:"<<endl;
           cin>>item;
        int i=0;
        int j=n-1;

             while(i<m&&j>=0)
             {
                 if(A[i][j]==item)
                 {
                     cout<<i<<","<<j;
                     break;
                 }
                 else if(item>A[i][j])
                 {
                     i++;
                 }
                 else
                 {
                     j--;
                 }
             }

}
