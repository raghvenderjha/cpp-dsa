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
        node*getFirst()
        {
            if(size==0)
            {
                cout<<"LIST IS EMPTY:"<<endl;
            }
            else{
            return head;
            }
        }
        node*getLast()
        {
            if(size==0)
            {
                cout<<"LIST IS EMPTY:"<<endl;
            }
            else{
            return tail;
            }
        }
        node*getAt(int idx)
        {
            if(idx<0||idx>=size)
            {
                cout<<"INVALID ARGUMENTS:"<<endl;
            }
            else if(idx==0)
            {
                getFirst();
            }
            else if(idx==size-1)
            {
                getLast();
            }
            else{
            node*temp=head;
            for(int i=0;i<idx;i++)
            {
                temp=temp->next;
            }
            return temp;
            }
        }
        void reverseDi()
        {
            int li=0;
            int ri=size-1;
            node*left=getAt(li);
            node*right=getAt(ri);
            int temp=left->data;
            left->data=right->data;
            right->data=temp;
            li++;
            ri--;
        }
     };
  int main()
  {
      linkedlist l1;
      string s;
      while(s!="quit")
      {
          if(s=="reverseDi")
          {
              l1.reverseDi();
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

