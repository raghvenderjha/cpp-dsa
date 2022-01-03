#include <iostream>

using namespace std;

int main()
{
       int m,A[50];
       cout<<"ENTER THE SIZE OF ARRAY A:"<<endl;
          cin>>m;
       cout<<"ENTER THE ELEMENTS OF ARRAY A:"<<endl;
          for(int i=0;i<m;i++)
          {
              cin>>A[i];
          }
       int n,B[50];
       cout<<"ENTER THE SIZE OF ARRAY B:"<<endl;
          cin>>n;
       cout<<"ENTER THE ELEMENTS OF ARRAY B:"<<endl;
          for(int i=0;i<n;i++)
          {
              cin>>B[i];
          }
      int*C=new int[n];

      int i=m-1;
      int j=n-1;
      int k=n-1;
      int carry=0;

             while(k>=0)
             {
                 int d=0;
                 int Aval=i>=0?A[i]:0;
                 if(B[j]+carry>=Aval)
                 {
                     d=(B[j]+carry)-Aval;
                        carry=0;
                 }
                 else
                 {
                     d=(B[j]+carry+10)-Aval;
                         carry=-1;
                 }
                C[k]=d;
                i--;
                j--;
                k--;
             }
          int index=0;
            while(index<n)
            {
                if(C[index]==0)
                {
                    index++;
                }
                else
                {
                    break;
                }
            }
          while(index<n)
          {
              cout<<C[index];
              index++;
          }
}
