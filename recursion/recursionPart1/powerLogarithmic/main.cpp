#include <bits/stdc++.h>

using namespace std;

    int powerLog(int x,int n)
    {
        if(n==0)
        {
            return 1;
        }

        int pl=powerLog(x,n/2);
        if(n%2==0){
        return pl*pl;
        }
        else
        {
            return pl*pl*x;
        }
    }

    int main()
    {
        int x,n;
        cin>>x>>n;
        cout<<powerLog(x,n);

        return 0;
    }




