#include <iostream>

using namespace std;

int main()
{
      int n;
      cout<<"ENTER THE VALUE OF N:"<<endl;
        cin>>n;
       int ospace=n/2;
       int star=1;
       int ispace=-1;
          for(int i=1;i<=n;i++)
          {
              for(int j=1;j<=ospace;j++)
              {
                  cout<<"\t";
              }
              for(int j=1;j<=star;j++)
              {
                  cout<<"*"<<"\t";
              }
              for(int j=1;j<=ispace;j++)
              {
                  cout<<"\t";
              }
              for(int j=1;j<=star;j++)
              {
                  if(i>1&&i<n)
                  {


                  cout<<"*"<<"\t";
                  }
                  else
                  {
                      cout<<"\t";
                  }
              }
              cout<<endl;
              if(i<=n/2)
              {


              ospace--;
              ispace+=2;
              }
              else
              {
                  ospace++;
                  ispace-=2;
              }
          }
}
