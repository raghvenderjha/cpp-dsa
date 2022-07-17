#include <bits/stdc++.h>

 using namespace std;

    struct node
    {
    public:
        int data;
        vector<node*>children;
    };

    node*construct(vector<int>A,int n)
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

    void iterativePreAndPostOrder(node*temp)
    {
        stack<pair<node*,-1>>st;
        st.push({temp,-1});

        string preorder;
        string postorder;

        while(st.size()>0)
        {
            pair<node*,int>top=st.top();
            st.pop();
            if(top.second==-1)
            {
                preorder+=to_string(top.first->data)+"\t";
                top.second++;
                st.push(top);
            }
            else if(top.second!=top.first->children.size[top.second])
            {
                pair<node*,int>cp(top.first->children[top.second],-1);
                top.second++;
                st.push(top);
                st.push(cp);
            }
            else
            {
                postorder+=to_string(top.first->data)+"\t";
            }
        }
        cout<<"PREORDER"<<"="<<preorder<<endl;
        cout<<"POSTORDER"<<"="<<postorder<<endl;
    }

    int main()
    {
        int n;
        cin>>n;
        vector<int>A(n,0);
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }

        node*root=construct(A,n);

        iterativePreAndPostOrder(root);

        return 0;
    }
