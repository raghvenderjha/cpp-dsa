#include <bits/stdc++.h>

using namespace std;

    vector<int> solve(vector<int>arr,vector<int>ngetl,int n)
    {
        ngetl[0]=-1;
        stack<int>st;
        st.push(arr[0]);
        for(int i=1;i<n;i++)
        {
            while(st.size()>0&&st.top()<=arr[i])
            {
                st.pop();
            }
            if(st.size()==0)
            {
                ngetl[i]=-1;
            }
            else
            {
                ngetl[i]=st.top();
            }
            st.push(arr[i]);
        }
        return ngetl;
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

        vector<int>ngetl(n,0);
        ngetl=solve(arr,ngetl,n);

        for(int i=0;i<n;i++)
        {
            cout<<ngetl[i]<<"\t";
        }

        return 0;
    }






