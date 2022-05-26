
    //REVERSE A LINKED LIST USING DATA ITERATIVE
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

            while(li<ri)
            {
                node*left=getAt(li);
                node*right=getAt(ri);

                int temp=left->data;
                left->data=right->data;
                right->data=temp;
                li++;
                ri--;
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
          else if(s=="reverseDi")
          {
              l1.reverseDi();
          }
          else if(s=="display")
          {
              l1.display();
          }
          cin>>s;
      }
      return 0;
  }

    //REVERSE A LINKED LIST USING POINTER ITERATIVE
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
          else if(s=="reversePi")
          {
              l1.reversePi();
          }
          else if(s=="display")
          {
              l1.display();
          }
          cin>>s;
      }
      return 0;
  }

    //LINKED LIST AS STACK ADAPTER
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
        void display()
        {
            for(node*temp=head;temp!=NULL;temp=temp->next)
            {
                cout<<temp->data<<endl;
            }

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
          else if(s=="push")
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

    //LINKED LIST AS QUEUE ADAPTER
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
        void add(int val)
        {
            addLast(val);
        }
        void remove()
        {
            getFirst();
            removeFirst();
        }
        void peek()
        {
            getFirst();
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
          else if(s=="add")
          {
              int val;
              cin>>val;
              l1.add(val);
          }
          else if(s=="remove")
          {
              l1.remove();
          }
          else if(s=="peek")
          {
              l1.peek();
          }
          else if(s=="display")
          {
              l1.display();
          }
          cin>>s;
      }
      return 0;
  }

    //KTH NODE FROM LAST IN A LINKED LIST
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
        void kthNodeFromLast(int k)
        {
            node*slow=head;
            node*fast=head;

            for(int i=0;i<k;i++)
            {
                fast=fast->next;
            }

            while(fast->next!=NULL)
            {
                slow=slow->next;
                fast=fast->next;
            }

            cout<<slow->data<<endl;
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
          else if(s=="kthNodeFromLast")
          {
              int k;
              cin>>k;
              l1.kthNodeFromLast(k);
          }
          else if(s=="display")
          {
              l1.display();
          }
          cin>>s;
      }
      return 0;
  }

    //MID OF A LINKED LIST
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
        void mid()
        {
            node*slow=head;
            node*fast=head;

            while(fast->next!=NULL&&fast->next->next!=NULL)
            {
                slow=slow->next;
                fast=fast->next->next;
            }

            cout<<slow->data<<endl;
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
          else if(s=="mid")
          {
              l1.mid();
          }
          else if(s=="display")
          {
              l1.display();
          }
          cin>>s;
      }
      return 0;
  }






