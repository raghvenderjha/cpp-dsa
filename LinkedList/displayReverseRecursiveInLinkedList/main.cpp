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
        void displayReverseRecursiveHelper(node*Node)
        {
            if(Node==NULL)
            {
                return;
            }
            displayReverseRecursiveHelper(Node->next);
            cout<<Node->data<<"\t";
        }
        void displayReverseRecursive()
        {
            displayReverseRecursiveHelper(head);
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

      l1.displayReverseRecursive();

      return 0;
  }

