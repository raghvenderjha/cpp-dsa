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
                this->removeFirst();
                if(val%2==0)
                {
                    even.addLast(val);
                }
                else
                {
                    odd.addLast(val);
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


