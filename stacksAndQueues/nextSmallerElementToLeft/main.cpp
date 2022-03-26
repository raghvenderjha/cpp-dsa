#include <bits/stdc++.h>

using namespace std;

    vector<int> solve(vector<int>arr,vector<int>nsetl,int n)
    {
        nsetl[0]=-1;
        stack<int>st;
        st.push(arr[0]);
        for(int i=1;i<n;i++)
        {
            while(st.size()>0&&st.top()>=arr[i])
            {
                st.pop();
            }
            if(st.size()==0)
            {
                nsetl[i]=-1;
            }
            else
            {
                nsetl[i]=st.top();
            }
            st.push(arr[i]);
        }
        return nsetl;
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

        vector<int>nsetl(n,0);
        nsetl=solve(arr,nsetl,n);

        for(int i=0;i<n;i++)
        {
            cout<<nsetl[i]<<"\t";
        }

        return 0;
    }






