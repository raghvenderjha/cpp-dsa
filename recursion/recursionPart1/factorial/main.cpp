#include <bits/stdc++.h>

using namespace std;

   int factorial(int n)
   {
       if(n==0)
       {
           return 1;
       }
       int fac=factorial(n-1);
       return fac*n;
   }

   int main()
   {
       int n;
       cin>>n;
       cout<<factorial(n);

       return 0;
   }


