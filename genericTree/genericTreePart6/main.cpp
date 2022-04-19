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
                 if(st.size()>0){
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
              state++;
              suc=temp;
          }

          for(node*child:temp->children)
          {
              prnsc(child,val);
          }
     }

     int c=INT_MAX;
     int flloor=INT_MIN;
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
             if(temp->data>flloor)
             {
                 flloor=temp->data;
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
         int A[n];
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
             cout<<"predecessor"<<"="<<"is not found"<<endl;
         }
         else
         {
             cout<<"predecessor"<<"="<<pre->data<<endl;
         }

         if(suc==NULL)
         {
             cout<<"successor"<<"="<<"is not found"<<endl;
         }
         else
         {
             cout<<"successor"<<"="<<suc->data<<endl;
         }

         int val1;
         cin>>val1;
         cnf(root,val1);
         cout<<"ceil"<<"="<<c<<endl;
         cout<<"floor"<<"="<<flloor<<endl;

         int k;
         cin>>k;
         int kse=kthSmallestElement(root,k);
         cout<<kse<<endl;

         return 0;
     }


