#include <iostream>

using namespace std;

int main()
{
       int m,n,A[50][50];
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
       for(int i=0;i<m;i++)
       {
           for(int j=i;j<n;j++)
           {
               int temp=A[i][j];
               A[i][j]=A[j][i];
               A[j][i]=temp;

           }
       }
       for(int i=0;i<m;i++)
       {
           int left=0,right=m-1;
              while(left<=right)
              {
                  int temp=A[i][left];
                  A[i][left]=A[i][right];
                  A[i][right]=temp;
                  left++;
                  right--;
              }
       }
       for(int i=0;i<m;i++)
       {
           for(int j=0;j<n;j++)
           {
               cout<<A[i][j]<<"\t";
           }
           cout<<endl;
       }
}
