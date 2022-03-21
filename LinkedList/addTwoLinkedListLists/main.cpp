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
        int addTwoListsHelper(node*one,int pv1,node*two,int pv2,linkedlist& res)
        {
            if(one==NULL&&two==NULL)
            {
                return 0;
            }

            int carry=0;
            int val=0;
            if(pv1>pv2){
            carry=addTwoListsHelper(one->next,pv1-1,two,pv2,res);
            val=one->data+carry;
            }
            else if(pv2>pv1){
            carry=addTwoListsHelper(one,pv1,two->next,pv2-1,res);
            val=two->data+carry;
            }
            else if(pv1==pv2){
            carry=addTwoListsHelper(one->next,pv1-1,two->next,pv2-1,res);
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
            int carry=addTwoListsHelper(one.head,one.size,two.head,two.size,res);
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


