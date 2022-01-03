#include <iostream>

using namespace std;

int main()
{
       /* Digit Frequency*/
       int n,d;
       cout<<"ENTER THE NUMBER:"<<endl;
         cin>>n;
       cout<<"ENTER THE DIGIT:"<<endl;
         cin>>d;
       int count=0;
           while(n>0)
           {
               if(n%10==d)
               {
                   count++;
               }
               n/=10;
           }
        cout<<count<<endl;

}
