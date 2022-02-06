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
        void display()
        {
            for(node*temp=head;temp!=NULL;temp=temp->next)
            {
                cout<<temp->data<<"\t";
            }
            cout<<endl;
        }
        void reversePi()
        {
            node*prev=NULL;
            node*curr=head;
            while(curr!=NULL)
            {
                node*next=curr->next;
                curr->next=prev;
                prev=curr;
                curr=next;
            }
            node*temp=head;
            head=tail;
            tail=temp;
        }
     };
  int main()
  {
      linkedlist l1;
      string s;
      while(s!="quit")
      {
          if(s=="reversePi")
          {
              l1.reversePi();
          }
          else if(s=="addLast")
          {
              int val;
              cin>>val;
              l1.addLast(val);
          }
          else if(s=="display")
          {
              l1.display();
          }
          cin>>s;
      }
      return 0;
  }


