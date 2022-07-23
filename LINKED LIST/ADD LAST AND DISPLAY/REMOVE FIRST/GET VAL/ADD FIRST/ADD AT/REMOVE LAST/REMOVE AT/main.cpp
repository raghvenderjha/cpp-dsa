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
        void removeFirst()
        {
            if(size==0)
            {
                cout<<"LIST IS EMPTY"<<endl;
            }
            else if(size==1)
            {
                head=NULL;
                tail=NULL;
                size=0;
            }
            else{
            head=head->next;
            size--;
            }
        }
        void removeLast()
        {
            if(size==0)
            {
                cout<<"LIST IS EMPTY"<<endl;
            }
            else if(size==1)
            {
                head=NULL;
                tail=NULL;
                size=0;
            }
            else{
            node*temp=head;
            for(int i=0;i<size-2;i++)
            {
                temp=temp->next;
            }
            tail=temp;
            tail->next=NULL;
            size--;
            }
        }
        void removeAt(int idx)
        {
            if(idx<0||idx>=size)
            {
                cout<<"INVALID ARGUMENTS"<<endl;
            }
            else if(idx==0)
            {
                removeFirst();
            }
            else if(idx==size-1)
            {
                removeLast();
            }
            else{
            node*temp=head;
            for(int i=0;i<idx-1;i++)
            {
                temp=temp->next;
            }
            temp->next=temp->next->next;
            size--;
            }
        }
        void display()
        {
            for(node*temp=head;temp!=NULL;temp=temp->next)
            {
                cout<<temp->data<<"\t";
            }
            cout<<endl;
        }
    };
  int main()
  {
      linkedlist l1;
      string s;
      while(s!="quit")
      {
          if(s=="addLast")
          {
              int val;
              cin>>val;
              l1.addLast(val);
          }
          else if(s=="removeAt")
          {
              int idx;
              cin>>idx;
              l1.removeAt(idx);
          }
          else if(s=="display")
          {
              l1.display();
          }
          cin>>s;
      }
      return 0;
  }
