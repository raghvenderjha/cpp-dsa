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
        void getFirst()
        {
            if(size==0)
            {
                cout<<"LIST IS EMPTY:"<<endl;
            }
            else{
            cout<<head->data<<endl;
            }
        }
        void removeFirst()
        {
            if(size==0)
            {
                cout<<"LIST IS EMPTY:"<<endl;
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
                cout<<temp->data<<endl;
            }
        }
        void push(int val)
        {
            addFirst(val);
        }
        void pop()
        {
            getFirst();
            removeFirst();
        }
        void top()
        {
            getFirst();
        }


     };
  int main()
  {
      linkedlist l1;
      string s;
      while(s!="quit")
      {
          if(s=="push")
          {
              int val;
              cin>>val;
              l1.push(val);
          }
          else if(s=="pop")
          {
              l1.pop();
          }
          else if(s=="top")
          {
              l1.top();
          }
          else if(s=="display")
          {
              l1.display();
          }
          cin>>s;
      }
      return 0;
  }


