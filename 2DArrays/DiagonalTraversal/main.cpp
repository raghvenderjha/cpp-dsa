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
        for(int g=0;g<m;g++)
        {
            for(int i=0,j=g;j<n;j++,i++)
            {
                cout<<A[i][j]<<"\t";
            }
        }
}
