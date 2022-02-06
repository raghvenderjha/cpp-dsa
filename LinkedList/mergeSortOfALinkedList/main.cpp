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
                fast=fast->next->next;
                slow=slow->next;
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



