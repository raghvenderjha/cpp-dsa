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
        void addFirst(int val)
        {
            node*temp=new node;
            temp->data=val;
            temp->next=head;
            head=temp;
            if(size==0)
            {
                tail=temp;
            }
            size++;
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
        void addAt(int idx,int val)
        {
            if(idx<0||idx>=size)
            {
                cout<<"INVALID ARGUMENTS"<<endl;
            }
            else if(idx==0)
            {
                addFirst(val);
            }
            else if(idx==size-1)
            {
                addLast(val);
            }
            else{
            node*kemp=new node;
            kemp->data=val;

            node*temp=head;
            for(int i=0;i<idx-1;i++)
            {
                temp=temp->next;
            }
            kemp->next=temp->next;
            temp->next=kemp;
            size++;
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
          else if(s=="addAt")
          {
              int idx,val;
              cin>>idx>>val;
              l1.addAt(idx,val);
          }
          else if(s=="display")
          {
              l1.display();
          }
          cin>>s;
      }
      return 0;
  }
