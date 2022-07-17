
      // ADD LAST IN A LINKED LIST
                 // AND
        //DISPLAY A LINKED LIST
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

      // REMOVE FIRST FROM A LINKED LIST
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
          else if(s=="removeFirst")
          {
              l1.removeFirst();
          }
          else if(s=="display")
          {
              l1.display();
          }
          cin>>s;
      }
      return 0;
  }

      // GET VALUE IN A LINKED LIST
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
        void getFirst()
        {
            if(size==0)
            {
                cout<<"LIST IS EMPTY"<<endl;
            }
            else{
            cout<<head->data<<endl;
            }
        }
        void getLast()
        {
            if(size==0)
            {
                cout<<"LIST IS EMPTY"<<endl;
            }
            else{
            cout<<tail->data<<endl;
            }
        }
        void getAt(int idx)
        {
            if(idx<0||idx>=size)
            {
                cout<<"INVALID ARGUMENTS"<<endl;
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
            cout<<temp->data<<endl;
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
          else if(s=="display")
          {
              l1.display();
          }
          cin>>s;
      }
      return 0;
  }

      // ADD FIRST IN A LINKED LIST
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
          else if(s=="display")
          {
              l1.display();
          }
          cin>>s;
      }
      return 0;
  }

      // ADD AT IN A LINKED LIST
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

     // REMOVE LAST FROM A LINKED LIST
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
          else if(s=="removeLast")
          {
              l1.removeLast();
          }
          else if(s=="display")
          {
              l1.display();
          }
          cin>>s;
      }
      return 0;
  }

      // REMOVE AT IN A LINKED LIST
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

      // REVERSE DATA ITERATIVE OF A LINKED LIST
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
                cout<<"LIST IS EMPTY"<<endl;
            }
            else{
            return head;
            }
        }
        node*getLast()
        {
            if(size==0)
            {
                cout<<"LIST IS EMPTY"<<endl;
            }
            else{
            return tail;
            }
        }
        node*getAt(int idx)
        {
            if(idx<0||idx>=size)
            {
                cout<<"INVALID ARGUMENTS"<<endl;
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

      // REVERSE POINTER ITERATIVE OF A LINKED LIST
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

      // LINKED LIST AS STACK ADAPTER
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
        void getFirst()
        {
            if(size==0)
            {
                cout<<"LIST IS EMPTY"<<endl;
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

      // LINKED LIST AS QUEUE ADAPTER
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
        void getFirst()
        {
            if(size==0)
            {
                cout<<"LIST IS EMPTY"<<endl;
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
          if(s=="add")
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

       // KTH NODE FROM LAST IN A LINKED LIST
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

       // MID OF A LINKED LIST
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

      // MERGE TWO SORTED LISTS
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
        void mergeTwoSortedLists(linkedlist l1,linkedlist l2)
        {
            node*one=l1.head;
            node*two=l2.head;

            while(one!=NULL&&two!=NULL)
            {
                if(one->data<two->data)
                {
                    this->addLast(one->data);
                    one=one->next;
                }
                else
                {
                    this->addLast(two->data);
                    two=two->next;
                }
            }

            while(one!=NULL)
            {
                this->addLast(one->data);
                one=one->next;
            }

            while(two!=NULL)
            {
                this->addLast(two->data);
                two=two->next;
            }
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

      linkedlist l2;
      int n2;
      cin>>n2;
      for(int i=0;i<n2;i++)
      {
          int val;
          cin>>val;
          l2.addLast(val);
      }

      linkedlist merged;
      merged.mergeTwoSortedLists(l1,l2);
      cout<<merged.toString()<<endl;

      return 0;
  }

       // MERGE SORT OF A LINKED LIST
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
        linkedlist mergeTwoSortedLists(linkedlist l1,linkedlist l2)
        {
            linkedlist ans;
            node*one=l1.head;
            node*two=l2.head;

            while(one!=NULL&&two!=NULL)
            {
                if(one->data<two->data)
                {
                    ans.addLast(one->data);
                    one=one->next;
                }
                else
                {
                    ans.addLast(two->data);
                    two=two->next;
                }
            }

            while(one!=NULL)
            {
                ans.addLast(one->data);
                one=one->next;
            }

            while(two!=NULL)
            {
                ans.addLast(two->data);
                two=two->next;
            }

            return ans;
        }
        node*getMid(node*head,node*tail)
        {
            node*slow=head;
            node*fast=head;

            while(fast!=tail&&fast->next!=tail)
            {
                slow=slow->next;
                fast=fast->next->next;
            }

            return slow;
        }
        linkedlist mergeSort(node*head,node*tail)
        {
            if(head==tail)
            {
                linkedlist base;
                base.addLast(head->data);
                return base;
            }

            node*mid=getMid(head,tail);
            linkedlist fsh=mergeSort(head,mid);
            linkedlist ssh=mergeSort(mid->next,tail);

            return mergeTwoSortedLists(fsh,ssh);
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

      linkedlist sorted=sorted.mergeSort(l1.head,l1.tail);
      cout<<sorted.toString()<<endl;

      return 0;
  }

      // REMOVE DUPLICATES FROM A LINKED LIST
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
        int getFirst()
        {
            if(size==0)
            {
                cout<<"LIST IS EMPTY"<<endl;
            }
            else{
            return head->data;
            }
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
        void removeDuplicates()
        {
            linkedlist ans;

            while(this->size>0)
            {
                int val=this->getFirst();
                this->removeFirst();

                if(ans.size==0||ans.tail->data!=val)
                {
                    ans.addLast(val);
                }
            }

            this->head=ans.head;
            this->tail=ans.tail;
            this->size=ans.size;
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

      l1.removeDuplicates();
      cout<<l1.toString()<<endl;

      return 0;
  }

      // ODD EVEN IN A LINKED LIST
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
        int getFirst()
        {
            if(size==0)
            {
                cout<<"LIST IS EMPTY";
            }
            else{
            return head->data;
            }
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
        void oddEven()
        {
            linkedlist odd;
            linkedlist even;

            while(this->size>0)
            {
                int val=this->getFirst();
                this->removFirst();

                if(val%2!=0)
                {
                    odd.addLast(val);
                }
                else
                {
                    even.addLast(val);
                }
            }

            if(odd.size>0&&even.size>0)
            {
                odd.tail->next=even.head;

                this->head=odd.head;
                this->tail=even.tail;
                this->size=odd.size+even.size;
            }
            else if(odd.size>0)
            {
                this->head=odd.head;
                this->tail=odd.tail;
                this->size=odd.size;
            }
            else if(even.size>0)
            {
                this->head=even.head;
                this->tail=even.tail;
                this->size=even.size;
            }
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

      l1.oddEven();
      cout<<l1.toString()<<endl;

      return 0;
  }

       //K REVERSE IN A LINKED LIST
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
        int getFirst()
        {
            if(size==0)
            {
                cout<<"LIST IS EMPTY"<<endl;
            }
            else{
            return head->data;
            }
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
        void kReverse(int k)
        {
            linkedlist prev;

            while(this->size>0)
            {
                linkedlist curr;

                if(this->size>=k)
                {
                    for(int i=0;i<k;i++)
                    {
                        int val=this->getFirst();
                        this->removeFirst();
                        curr.addFirst(val);
                    }
                }
                else
                {
                    int sz=this->size;
                    for(int i=0;i<sz;i++)
                    {
                        int val=this->getFirst();
                        this->removeFirst();
                        curr.addLast(val);
                    }
                }

                if(prev.size==0)
                {
                    prev=curr;
                }
                else
                {
                    prev.tail->next=curr.head;
                    prev.tail=curr.tail;
                    prev.size+=curr.size;
                }
            }

            this->head=prev.head;
            this->tail=prev.tail;
            this->size=prev.size;
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

      int k;
      cin>>k;
      l1.kReverse(k);
      cout<<l1.toString()<<endl;

      return 0;
  }
