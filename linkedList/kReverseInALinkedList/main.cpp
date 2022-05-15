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
                cout<<"LIST IS EMPTY:"<<endl;
            }
            else{
            return head->data;
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




