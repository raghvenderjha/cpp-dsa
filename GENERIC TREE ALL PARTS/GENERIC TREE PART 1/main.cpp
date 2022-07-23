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

    void display(node*temp)
    {
        string str=to_string(temp->data)+"->";
        for(node*child:temp->children)
        {
            str+=to_string(child->data)+",";
        }
        str+=".";
        cout<<str<<endl;

        for(node*child:temp->children)
        {
            display(child);
        }
    }

    int size(node*temp)
    {
        int s=0;
        for(node*child:temp->children)
        {
            int cs=size(child);
            s+=cs;
        }
        s+=1;

        return s;
    }

    int maximum(node*temp)
    {
        int m=INT_MIN;

        for(node*child:temp->children)
        {
            int cm=maximum(child);
            if(cm>m)
            {
                m=cm;
            }
        }

        if(temp->data>m)
        {
            m=temp->data;
        }

        return m;
    }

    int height(node*temp)
    {
        int h=-1;
        for(node*child:temp->children)
        {
            int ch=height(child);
            if(ch>h)
            {
                h=ch;
            }
        }
        h+=1;

        return h;
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

        display(root);

        int sz=size(root);
        cout<<sz<<endl;

        int mx=maximum(root);
        cout<<mx<<endl;

        int ht=height(root);
        cout<<ht<<endl;

        return 0;
    }
