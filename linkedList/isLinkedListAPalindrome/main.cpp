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
        bool isPalindromeHelper(node*right)
        {
            if(right==NULL)
            {
                return true;
            }
            bool rres=isPalindromeHelper(right->next);
            if(rres==false)
            {
                return false;
            }
            else if(left->data!=right->data)
            {
                return false;
            }
            else
            {
                left=left->next;
                return true;
            }
        }
        node*left;
        bool isPalindrome()
        {
            left=head;
            isPalindromeHelper(head);
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

      bool res=l1.isPalindrome();
      if(res==true)
      {
          cout<<"TRUE"<<endl;
      }
      else
      {
          cout<<"FALSE"<<endl;
      }

      return 0;
  }


