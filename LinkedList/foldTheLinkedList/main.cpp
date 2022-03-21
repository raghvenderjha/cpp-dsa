#include <bits/stdc++.h>

using namespace std;

     class node
     {
     public:
        int data;
        node*next;
     };

     class linkedlist
     {
     public:
        node*head,*tail;
        int size=0;

     public:
        linkedlist()
        {
            head=NULL;
            tail=NULL;
        }
        string toString()
        {
            node*curr=this->head;
            string sb="";
            while(curr!=NULL)
            {
                sb+=to_string(curr->data);
                if(curr->next!=NULL)
                {
                    sb+="\t";
                }
                curr=curr->next;
            }
            return sb;
        }
        void addLast(int val)
        {
            node*temp=new node;
            temp->data=val;
            temp->next=NULL;
            if(size==0)
            {
                head=temp;
                tail=temp;
            }
            else
            {
                tail->next=temp;
                tail=tail->next;
            }
            size++;
        }
        void foldHelper(node*right,int floor)
        {
            if(right==NULL)
            {
                return;
            }
            foldHelper(right->next,floor+1);
            if(floor>size/2){
            right->next=left->next;
            left->next=right;
            left=right->next;
            }
            else if(floor==size/2)
            {
                tail=right;
                tail->next=NULL;
            }
        }
        node*left;
        void fold()
        {
            left=head;
            foldHelper(head,0);
        }
     };
  int main()
  {
      linkedlist l1;
      int n1;
      cin>>n1;
      for(int i=0;i<n1;i++)
      {
          int val;
          cin>>val;
          l1.addLast(val);
      }

      l1.fold();
      cout<<l1.toString()<<endl;

      return 0;
  }

