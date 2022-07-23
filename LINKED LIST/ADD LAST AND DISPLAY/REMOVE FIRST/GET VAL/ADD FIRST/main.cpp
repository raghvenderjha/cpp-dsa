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
          if(s=="addFirst")
          {
              int val;
              cin>>val;
              l1.addFirst(val);
          }
          else if(s=="addFirst")
          {
              int val;
              cin>>val;
              l1.addFirst(val);
          }
          else if(s=="display")
          {
              l1.display();
          }
          cin>>s;
      }
      return 0;
  }
