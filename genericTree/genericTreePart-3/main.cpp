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
         if(temp->children.size()>0)
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
