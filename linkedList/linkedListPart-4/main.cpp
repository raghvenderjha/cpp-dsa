
    //DISPLAY REVERSE RECURSIVE
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
        void displayReverseRecursiveHelper(node*temp)
        {
            if(temp==NULL)
            {
                return;
            }
            displayReverseRecursiveHelper(temp->next);
            cout<<temp->data<<"\t";
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

    //DISPLAY REVERSE POINTER RECURSIVE
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
        void displayReversePointerRecursiveHelper(node*temp)
        {
            if(temp==NULL)
            {
                return;
            }
            displayReversePointerRecursiveHelper(temp->next);
            if(temp==tail)
            {
                //NOT DO ANYTHING
            }
            else
            {
                temp->next->next=temp;
            }
        }
        void displayReversePointerRecursive()
        {
            displayReversePointerRecursiveHelper(head);
            head->next=NULL;
            node*temp=head;
            head=tail;
            tail=temp;
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

      l1.displayReversePointerRecursive();
      cout<<l1.toString()<<endl;

      return 0;
  }

    //IS LINKED LIST A PALINDROME
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

    //FOLD THE LINKED LIST
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
        void foldHelper(node*right,int floor)
        {
            if(right==NULL)
            {
                return;
            }
            foldHelper(right->next,floor+1);
            if(floor>size/2){
            node*temp=left->next;
            left->next=right;
            right->next=temp;
            left=temp;
            }
            else if(floor==size/2)
            {
                tail=right;
                tail->next=NULL;
            }
        }
        node*left;
        void fold()
        {
            left=head;
            foldHelper(head,0);
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

      l1.fold();
      cout<<l1.toString()<<endl;

      return 0;
  }

    //ADD TWO LINKED LISTS
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
        int addTwoLists(node*one,int pv1,node*two,int pv2,linkedlist&res)
        {
            while(one==NULL&&two==NULL)
            {
                return 0;
            }

            int carry=0;
            int val=0;

            if(pv1>pv2)
            {
                carry=addTwoLists(one->next,pv1-1,two,pv2,res);
                val=one->data+carry;
            }
            else if(pv2>pv1)
            {
                carry=addTwoLists(one,pv1,two->next,pv2-1,res);
                val=two->data+carry;
            }
            else if(pv1==pv2)
            {
                carry=addTwoLists(one->next,pv1-1,two->next,pv2-1,res);
                val=one->data+two->data+carry;
            }

            int nval=val%10;
            int ncarry=val/10;

            res.addFirst(nval);
            return ncarry;
        }
        linkedlist addTwoLists(linkedlist one,linkedlist two)
        {
            linkedlist res;
            int carry=addTwoLists(one.head,one.size,two.head,two.size,res);
            if(carry>0)
            {
                res.addFirst(carry);
            }
            return res;
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

      linkedlist ad=ad.addTwoLists(l1,l2);
      cout<<ad.toString()<<endl;

      return 0;
  }





