
        // GENERIC TREE

        // CONSTRUCT
#include <bits/stdc++.h>

 using namespace std;

   int main()
   {
       cout<<"a"<<endl;

       return 0;
   }
  /*
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

        return 0;
    }

      // DISPLAY
      // SIZE
      // MAXIMUM
      // HEIGHT
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

     // TRAVERSALS
     // LEVEL ORDER TRAVERSAL
     // LEVEL ORDER LINE WISE TRAVERSAL
     // LEVEL ORDER LINE WISE ZIG ZAG TRAVERSAL
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

    void traversals(node*temp)
    {
        cout<<"NODE PRE"<<temp->data<<endl;
        for(node*child:temp->children)
        {
            traversals(child);
        }
        cout<<"NODE POST"<<temp->data<<endl;
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
        int level=1;

        while(s.size()>0)
        {
            temp=s.top();
            s.pop();
            cout<<temp->data<<"\t";

            if(level%2!=0)
            {
                for(int i=0;i<temp->children.size();i++)
                {
                    node*child=temp->children[i];
                    cs.push(child);
                }
            }
            else
            {
                for(int i=temp->children.size()-1;i>=0;i--)
                {
                    node*child=temp->children[i];
                    cs.push(child);
                }
            }

            if(s.size()==0)
            {
                s=cs;
                stack<node*>cs_new;
                swap(cs,cs_new);
                level++;
                cout<<endl;
            }
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

        traversals(root);

        levelOrderTraversal(root);
        levelOrderLineWiseTraversal(root);
        levelOrderLineWiseZigZagTraversal(root);

        return 0;
    }

      // MIRROR TRANSFORM
      // REMOVE LEAVES
      // LINEARISE
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

    node*removeLeaves(node*temp)
    {
        for(int i=temp->children.size()-1;i>=0;i--)
        {
            node*child=temp->children[i];
            if(child->children.size()==0)
            {
                temp->children.erase(temp->children.begin()+i);
            }
        }

        for(node*child:temp->children)
        {
            removeLeaves(child);
        }

        return temp;
    }

    node*getTail(node*temp)
    {
        while(temp->children.size()>0)
        {
            temp=temp->children[0];
        }

        return temp;
    }

    node*linearise(node*temp)
    {
        for(node*child:temp->children)
        {
            linearise(child);
        }

        while(temp->children.size()>1)
        {
            node*last=temp->children.back();
            temp->children.pop_back();
            node*slast=temp->children.back();
            node*tail=getTail(slast);
            tail->children.push_back(last);
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

        removeLeaves(root);
        display(root);

        linearise(root);
        display(root);

        return 0;
    }

       // FIND ELEMENT
       // NODE TO ROOT PATH
       // LOWEST COMMON ANCESTOR
       // DISTANCE BETWEEN NODES
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
            vector<int>base;
            base.push_back(temp->data);
            return base;
        }

        vector<int>ans;
        for(node*child:temp->children)
        {
            vector<int>recAns=nodeToRootPath(child,val1);
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
        vector<int>onePath=nodeToRootPath(temp,val2);
        vector<int>twoPath=nodeToRootPath(temp,val3);

        int i=onePath.size()-1;
        int j=twoPath.size()-1;

        while(i>=0&&j>=0&&onePath[i]==twoPath[j])
        {
            i--;
            j--;
        }

        i++;
        j++;

        return onePath[i];
    }

    int distanceBetweenNodes(node*temp,int val4,int val5)
    {
        vector<int>onePath=nodeToRootPath(temp,val4);
        vector<int>twoPath=nodeToRootPath(temp,val5);

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
        vector<int>A(n,0);
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
            cout<<"TRUE"<<endl;
        }
        else
        {
            cout<<"FALSE"<<endl;
        }

        int val1;
        cin>>val1;
        vector<int>ans=nodeToRootPath(root,val1);
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

       // ARE SIMILAR
       // ARE MIRROR
       // IS SYMMETRIC
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

        // PREDECESSOR AND SUCCESSOR
        // CEIL AND FLOOR
        // KTH SMALLEST ELEMENT
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

    int state=0;
    node*pre;
    node*suc;
    void prnsc(node*temp,int val)
    {
        if(state==0)
        {
            if(temp->data==val)
            {
                state++;
            }
            else
            {
                pre=temp;
            }
        }
        else if(state==1)
        {
            suc=temp;
            state++;
        }

        for(node*child:temp->children)
        {
            prnsc(child,val);
        }
    }

    int c=INT_MAX;
    int f=INT_MIN;
    void cnf(node*temp,int val1)
    {
        if(temp->data>val1)
        {
            if(temp->data<c)
            {
                c=temp->data;
            }
        }
        else if(temp->data<val1)
        {
            if(temp->data>f)
            {
                f=temp->data;
            }
        }

        for(node*child:temp->children)
        {
            cnf(child,val1);
        }
    }

    int kthSmallestElement(node*temp,int k)
    {
        int val=INT_MIN;
        for(int i=0;i<k;i++)
        {
            cnf(temp,val);
            val=c;
            c=INT_MAX;
        }

        for(node*child:temp->children)
        {
            kthSmallestElement(child,k);
        }

        return val;
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

        int val;
        cin>>val;
        prnsc(root,val);
        if(pre==NULL)
        {
            cout<<"PREDECESSOR"<<"="<<"NOT FOUND"<<endl;
        }
        else
        {
            cout<<"PREDECESSOR"<<"="<<pre->data<<endl;
        }

        if(suc==NULL)
        {
            cout<<"SUCCESSOR"<<"="<<"NOT FOUND"<<endl;
        }
        else
        {
            cout<<"SUCCESSOR"<<"="<<suc->data<<endl;
        }

        int val1;
        cin>>val1;
        cnf(root,val1);
        cout<<"CEIL"<<"="<<c<<endl;
        cout<<"FLOOR"<<"="<<f<<endl;

        int k;
        cin>>k;
        int kse=kthSmallestElement(root,k);
        cout<<kse<<endl;

        return 0;
    }

        // NODE WITH MAXIMUM SUBTREE SUM
        // DIAMETER
        // ITERATIVE PRE AND POST ORDER
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

    int dia=0;
    int diameter(node*temp)
    {
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
            else
            {
                sdh=ch;
            }
        }

        if(dh+sdh+2>dia)
        {
            dia=dh+sdh+2;
        }

        dh+=1;
        return dh;
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

        nodeWithMaximumSubtreeSum(root);
        cout<<"MSUMNODE"<<"="<<msumnode<<endl;
        cout<<"MSUM"<<"="<<msum<<endl;

        diameter(root);
        cout<<"DIAMETER"<<"="<<dia<<endl;

        iterativePreAndPostOrder(root);

        return 0;
    }
    */



