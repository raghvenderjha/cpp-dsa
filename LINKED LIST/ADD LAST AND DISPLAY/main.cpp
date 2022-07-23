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
          else if(s=="display")
          {
              l1.display();
          }
          cin>>s;
      }
      return 0;
  }
