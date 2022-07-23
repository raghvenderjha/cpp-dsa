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

    node*mirrorTransform(node*temp)
    {
        for(node*child:temp->children)
        {
            mirrorTransform(child);
        }

        for(int i=0,j=temp->children.size()-1;i<j;i++,j--)
        {
            node*kemp=temp->children[i];
            temp->children[i]=temp->children[j];
            temp->children[j]=kemp;
        }

        return temp;
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

        mirrorTransform(root);
        display(root);

        return 0;
    }

