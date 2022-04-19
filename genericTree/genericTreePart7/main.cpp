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

    int msumnode=0;
    int msum=0;
    int nodeWithMaximumSubtreeSum(node*temp)
    {
        int sum=0;
        for(node*child:temp->children)
        {
            int csum=nodeWithMaximumSubtreeSum(child);
            sum+=csum;
        }

        sum+=temp->data;

        if(sum>msum)
        {
            msumnode=temp->data;
            msum=sum;
        }

        return sum;
    }

    int diameter(node*temp)
    {
        int dia=0;
        int dh=-1;
        int sdh=-1;
        for(node*child:temp->children)
        {
            int ch=diameter(child);
            if(ch>dh)
            {
                sdh=dh;
                dh=ch;
            }
            else if(ch>sdh)
            {
                sdh=ch;
            }
        }

        dia=dh+sdh+2;

        return dia;
    }

    void iterativePreAndPostOrder(node*temp)
    {
        stack<pair<node*,int>>st;
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
            else if(top.second!=top.first->children.size())
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
        cout<<"preorder"<<"="<<preorder<<endl;
        cout<<"postorder"<<"="<<postorder<<endl;
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

        nodeWithMaximumSubtreeSum(root);
        cout<<"msumnode"<<"="<<msumnode<<endl;
        cout<<"msum"<<"="<<msum<<endl;

        int dm=diameter(root);
        cout<<dm<<endl;

        iterativePreAndPostOrder(root);

        return 0;
    }

