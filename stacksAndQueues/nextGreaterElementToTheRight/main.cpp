#include <bits/stdc++.h>

using namespace std;

    vector<int> solve(vector<int>arr,vector<int>ngetr,int n)
    {
        ngetr[n-1]=-1;
        stack<int>st;
        st.push(arr[n-1]);
        for(int i=n-2;i>=0;i--)
        {
            while(st.size()>0&&st.top()<=arr[i])
            {
                st.pop();
            }
            if(st.size()==0)
            {
                ngetr[i]=-1;
            }
            else
            {
                ngetr[i]=st.top();
            }
            st.push(arr[i]);
        }
        return ngetr;
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

        vector<int>ngetr(n,0);
        ngetr=solve(arr,ngetr,n);

        for(int i=0;i<n;i++)
        {
            cout<<ngetr[i]<<"\t";
        }

        return 0;
    }


