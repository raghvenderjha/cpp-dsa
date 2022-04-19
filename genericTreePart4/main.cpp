#include <bits/stdc++.h>

using namespace std;

    struct node
    {
    public:
        int data;
        vector<node*>children;
    };

    node*construct(int A[],int n)
    {
        node*root=NULL;
        stack<node*>st;
        for(int i=0;i<n;i++)
        {
            if(A[i]==-1)
            {
                st.pop();
            }
            else
            {
                node*temp=new node;
                temp->data=A[i];
                if(st.size()>0)
                {
                    st.top()->children.push_back(temp);
                }
                else
                {
                    root=temp;
                }
                st.push(temp);
            }
        }

        return root;
    }

    bool findElement(node*temp,int val)
    {
        if(temp->data==val)
        {
            return true;
        }

        for(node*child:temp->children)
        {
            bool ans=findElement(child,val);
            if(ans==true)
            {
                return true;
            }
        }

        return false;
    }

    vector<int> nodeToRootPath(node*temp,int val1)
    {
        if(temp->data==val1)
        {
            vector<int> base;
            base.push_back(temp->data);
            return base;
        }

        vector<int> ans;
        for(node*child:temp->children)
        {
            vector<int> recAns=nodeToRootPath(child,val1);
            if(recAns.size()>0)
            {
                recAns.push_back(temp->data);
                return recAns;
            }
        }

        return ans;
    }

    int lowestCommonAncestor(node*temp,int val2,int val3)
    {
        vector<int> onePath=nodeToRootPath(temp,val2);
        vector<int> twoPath=nodeToRootPath(temp,val3);

        int i=onePath.size()-1;
        int j=twoPath.size()-1;
        while(i>=0&&j>=0&&onePath[i]==twoPath[j])
        {
            i--;
            j--;
        }

        return onePath[i+1];
    }

    int distanceBetweenNodes(node*temp,int val4,int val5)
    {
        vector<int> onePath=nodeToRootPath(temp,val4);
        vector<int> twoPath=nodeToRootPath(temp,val5);

        int i=onePath.size()-1;
        int j=twoPath.size()-1;
        while(i>=0&&j>=0&&onePath[i]==twoPath[j])
        {
            i--;
            j--;
        }
        i++;
        j++;

        return i+j;
    }


    int main()
    {
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }

        node*root=construct(A,n);

        int val;
        cin>>val;
        bool flag=findElement(root,val);
        if(flag==true)
        {
            cout<<"true"<<endl;
        }
        else
        {
            cout<<"false"<<endl;
        }

        int val1;
        cin>>val1;
        vector<int> ans=nodeToRootPath(root,val1);
        cout<<"[";
        for(int i=0;i<ans.size();i++)
        {
            cout<<ans[i];
            if(i!=ans.size()-1)
            {
                cout<<",";
            }
        }
        cout<<"]";
        cout<<endl;

        int val2;
        cin>>val2;
        int val3;
        cin>>val3;
        int lca=lowestCommonAncestor(root,val2,val3);
        cout<<lca<<endl;

        int val4;
        cin>>val4;
        int val5;
        cin>>val5;
        int dbn=distanceBetweenNodes(root,val4,val5);
        cout<<dbn<<endl;

        return 0;
    }


