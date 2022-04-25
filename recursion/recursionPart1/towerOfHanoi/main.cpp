#include <bits/stdc++.h>

using namespace std;

   void towerOfHanoi(int nd,int t1,int t2,int t3)
   {
       if(nd==0)
       {
           return;
       }

       towerOfHanoi(nd-1,t1,t3,t2);
       cout<<nd<<"["<<t1<<"->"<<t2<<"]"<<endl;
       towerOfHanoi(nd-1,t3,t2,t1);
   }

   int main()
   {
       int nd;
       cin>>nd;
       int t1,t2,t3;
       cin>>t1>>t2>>t3;
       towerOfHanoi(nd,t1,t2,t3);

       return 0;
   }


