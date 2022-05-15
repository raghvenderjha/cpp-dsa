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


