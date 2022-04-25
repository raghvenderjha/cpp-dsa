#include <bits/stdc++.h>

using namespace std;

   void printZigZag(int n)
   {
       if(n==0)
       {
           return;
       }

       cout<<n<<"\t";
       printZigZag(n-1);
       cout<<n<<"\t";
       printZigZag(n-1);
       cout<<n<<"\t";
   }

   int main()
   {
       int n;
       cin>>n;
       printZigZag(n);

       return 0;
   }

