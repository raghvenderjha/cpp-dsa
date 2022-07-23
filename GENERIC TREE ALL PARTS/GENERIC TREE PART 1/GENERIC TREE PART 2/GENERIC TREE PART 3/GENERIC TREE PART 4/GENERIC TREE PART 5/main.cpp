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

    bool areSimilar(node*n1,node*n2)
    {
        if(n1->children.size()!=n2->children.size())
        {
            return false;
        }

        for(int i=0;i<n1->children.size();i++)
        {
            node*c1=n1->children[i];
            node*c2=n2->children[i];

            if(areSimilar(c1,c2)==false)
            {
                return false;
            }
        }

        return true;
    }

    bool areMirror(node*n1,node*n2)
    {
        if(n1->children.size()!=n2->children.size())
        {
            return false;
        }

        for(int i=0;i<n1->children.size();i++)
        {
            int j=n2->children.size()-1-i;
            node*c1=n1->children[i];
            node*c2=n2->children[j];

            if(areMirror(c1,c2)==false)
            {
                return false;
            }
        }

        return true;
    }

    bool isSym(node*n1)
    {
        return areMirror(n1,n1);
    }

    int main()
    {
        int n1;
        cin>>n1;
        vector<int>A1(n1,0);
        for(int i=0;i<n1;i++)
        {
            cin>>A1[i];
        }

        node*root1=construct(A1,n1);

        int n2;
        cin>>n2;
        vector<int>A2(n2,0);
        for(int i=0;i<n2;i++)
        {
            cin>>A2[i];
        }

        node*root2=construct(A2,n2);

        bool similar=areSimilar(root1,root2);
        if(similar==true)
        {
            cout<<"TRUE"<<endl;
        }
        else
        {
            cout<<"FALSE"<<endl;
        }

        bool mirror=areMirror(root1,root2);
        if(mirror==true)
        {
            cout<<"TRUE"<<endl;
        }
        else
        {
            cout<<"FALSE"<<endl;
        }

        bool sym=isSym(root1);
        if(sym==true)
        {
            cout<<"TRUE"<<endl;
        }
        else
        {
            cout<<"FALSE"<<endl;
        }


        return 0;
    }
