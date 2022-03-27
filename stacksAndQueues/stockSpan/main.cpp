#include <bits/stdc++.h>

using namespace std;

    vector<int> solve(vector<int>arr,vector<int>span,int n)
    {
        span[0]=1;
        stack<int>st;
        st.push(0);
        for(int i=1;i<n;i++)
        {
            while(st.size()>0&&arr[st.top()]<=arr[i])
            {
                st.pop();
            }
            if(st.size()==0)
            {
                span[i]=i+1;
            }
            else
            {
                span[i]=i-st.top();
            }
            st.push(i);
        }
        return span;
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

        vector<int>span(n,0);
        span=solve(arr,span,n);

        for(int i=0;i<n;i++)
        {
            cout<<span[i]<<"\t";
        }

        return 0;
    }

