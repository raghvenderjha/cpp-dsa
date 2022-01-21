#include <iostream>
#include <string>

using namespace std;

      class node
      {
      public:
        int data;
        node*next;
      };

      class LinkedList
      {
      public:
        node*head,*tail;
        int size=0;

      public:
        LinkedList()
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
        void getLast()
        {
            if(size==0)
            {
                cout<<"LIST IS EMPTY:"<<endl;
            }
            else{
            cout<<tail->data<<endl;
            }
        }
        void getAt(int idx)
        {
            if(size==0)
            {
                cout<<"LIST IS EMPTY:"<<endl;
            }
            else if(idx<0||idx>=size)
            {
                cout<<"INVALID ARGUMENTS:"<<endl;

            }
            else{
            node*temp=head;
            for(int i=0;i<idx;i++)
            {
                temp=temp->next;
            }
            cout<<temp->data<<endl;
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
        void addAt(int idx,int val)
        {
            if(idx<0||idx>=size)
            {
                cout<<"INVALID ARGUMENTS:"<<endl;
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
        void removeLast()
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
                cout<<"INVALID ARGUMENTS:"<<endl;
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
      LinkedList l1;
      string s;
      while(s!="quit")
      {
          if(s=="addLast")
          {
              int val;
              cin>>val;
              l1.addLast(val);
          }
          else if(s=="size")
          {
              cout<<l1.size<<endl;
          }
          else if(s=="display")
          {
              l1.display();
          }
          else if(s=="removeFirst")
          {
              l1.removeFirst();
          }
          else if(s=="getFirst")
          {
              l1.getFirst();
          }
          else if(s=="getLast")
          {
              l1.getLast();
          }
          else if(s=="getAt")
          {
              int idx;
              cin>>idx;
              l1.getAt(idx);
          }
          else if(s=="addFirst")
          {
              int val;
              cin>>val;
              l1.addFirst(val);
          }
          else if(s=="addAt")
          {
              int idx,val;
              cin>>idx;
              cin>>val;
              l1.addAt(idx,val);
          }
          else if(s=="removeLast")
          {
              l1.removeLast();
          }
          else if(s=="removeAt")
          {
              int idx;
              cin>>idx;
              l1.removeAt(idx);
          }
          else if(s=="reversePi")
          {
              l1.reversePi();
          }
          cin>>s;
      }
      return 0;
  }
