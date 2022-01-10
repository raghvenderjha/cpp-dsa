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
      int minr=0;
      int minc=0;

      int maxr=m-1;
      int maxc=n-1;

      int tne=m*n;
      int count=0;

            while(count<tne)
            {
                for(int i=minr;i<=maxr&&count<tne;i++)
                {
                    cout<<A[i][minc]<<"\t";
                    count++;
                }
                minc++;
                for(int j=minc;j<=maxc&&count<tne;j++)
                {
                    cout<<A[maxr][j]<<"\t";
                    count++;
                }
                maxr--;
                for(int i=maxr;i>=minr&&count<tne;i--)
                {
                    cout<<A[i][maxc]<<"\t";
                    count++;
                }
                maxc--;
                for(int j=maxc;j>=minc&&count<tne;j--)
                {
                    cout<<A[minr][j]<<"\t";
                    count++;
                }
                minr++;
            }
}
