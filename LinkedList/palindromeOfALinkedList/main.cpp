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
        int isPalindromeHelper(node*right)
        {
            if(right==NULL)
            {
                return 1;
            }
            int rres=isPalindromeHelper(right->next);
            if(rres==0)
            {
                return 0;
            }
            else if(pleft->data!=right->data)
            {
                return 0;
            }
            else
            {
                pleft=pleft->next;
                return 1;
            }
        }
        node*pleft;
        int isPalindrome()
        {
            pleft=head;
            isPalindromeHelper(pleft);

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

      int res=l1.isPalindrome();
      if(res==1)
      {
          cout<<"true"<<endl;
      }
      else
      {
          cout<<"false"<<endl;
      }

      return 0;
  }


