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
        int mergePoint(linkedlist l1,linkedlist l2)
        {
            node*one=l1.head;
            node*two=l2.head;
            if(l1.size>l2.size)
            {
                for(int i=0;i<(l1.size-l2.size);i++)
                {
                    one=one->next;
                }
            }
            else
            {
                for(int i=0;i<(l2.size-l1.size);i++)
                {
                    two=two->next;
                }
            }
            while(one->data!=two->data)
            {
                one=one->next;
                two=two->next;
            }
            return one->data;
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

      linkedlist mp;
      int m=mp.mergePoint(l1,l2);
      cout<<m<<endl;

      return 0;
  }

