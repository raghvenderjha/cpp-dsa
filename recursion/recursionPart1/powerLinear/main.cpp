#include <bits/stdc++.h>

using namespace std;

    int powerLinear(int x,int n)
    {
        if(n==0)
        {
            return 1;
        }

        int pl=powerLinear(x,n-1);
        return pl*x;
    }

    int main()
    {
        int x,n;
        cin>>x>>n;
        cout<<powerLinear(x,n);

        return 0;
    }


