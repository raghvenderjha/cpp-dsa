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

    void traversals(node*temp)
    {
        cout<<"node pre"<<temp->data<<endl;
        for(node*child:temp->children)
        {
            traversals(child);
        }
        cout<<"node post"<<temp->data<<endl;
    }

    void levelOrderTraversal(node*temp)
    {
        queue<node*>q;
        q.push(temp);
        while(q.size()>0)
        {
            temp=q.front();
            q.pop();
            cout<<temp->data<<"\t";
            for(node*child:temp->children)
            {
                q.push(child);
            }
        }
        cout<<endl;
    }

    void levelOrderLineWiseTraversal(node*temp)
    {
        queue<node*>q;
        q.push(temp);

        queue<node*>cq;
        while(q.size()>0)
        {
            temp=q.front();
            q.pop();
            cout<<temp->data<<"\t";
            for(node*child:temp->children)
            {
                cq.push(child);
            }

            if(q.size()==0)
            {
                q=cq;
                queue<node*>cq_new;
                swap(cq,cq_new);
                cout<<endl;
            }
        }

    }

    void levelOrderLineWiseZigZagTraversal(node*temp)
    {
        stack<node*>s;
        s.push(temp);

        stack<node*>cs;
        while(s.size()>0)
        {
            temp=s.top();
            s.pop();
            cout<<temp->data<<"\t";
            for(node*child:temp->children)
            {
                cs.push(child);
            }

            if(s.size()==0)
            {
                s=cs;
                stack<node*>cs_new;
                swap(cs,cs_new);
                cout<<endl;
            }
        }

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

        traversals(root);

        levelOrderTraversal(root);
        levelOrderLineWiseTraversal(root);
        levelOrderLineWiseZigZagTraversal(root);

        return 0;
    }


