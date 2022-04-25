#include <bits/stdc++.h>

using namespace std;

    void printInc(int n)
    {
        if(n==0)
        {
            return;
        }


        printInc(n-1);
        cout<<n<<endl;
    }

    int main()
    {
        int n;
        cin>>n;
        printInc(n);

        return 0;
    }




