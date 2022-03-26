#include <bits/stdc++.h>

using namespace std;

    vector<int> solve(vector<int>arr,vector<int>nsetr,int n)
    {
        nsetr[n-1]=-1;
        stack<int>st;
        st.push(arr[n-1]);
        for(int i=n-2;i>=0;i--)
        {
            while(st.size()>0&&st.top()>=arr[i])
            {
                st.pop();
            }
            if(st.size()==0)
            {
                nsetr[i]=-1;
            }
            else
            {
                nsetr[i]=st.top();
            }
            st.push(arr[i]);
        }
        return nsetr;
    }

    int main()
    {
        int n;
        cin>>n;
        vector<int>arr(n,0);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        vector<int>nsetr(n,0);
        nsetr=solve(arr,nsetr,n);

        for(int i=0;i<n;i++)
        {
            cout<<nsetr[i]<<"\t";
        }

        return 0;
    }




