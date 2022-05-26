
    //MERGE TWO SORTED LINKED LISTS
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

    //MERGE SORT IN A LINKED LIST
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
                slow=slow->next;
                fast=fast->next->next;
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

    //REMOVE DUPLICATES FROM A LINKED LIST
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
        void removeDuplicates()
        {
            linkedlist ans;
            while(this->size>0)
            {
                int val=this->getFirst();
                this->removeFirst();

                if(ans.size==0||ans.tail->data!=val)
                {
                    ans.addLast(val);
                }
            }
            this->head=ans.head;
            this->tail=ans.tail;
            this->size=ans.size;
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

      l1.removeDuplicates();
      cout<<l1.toString()<<endl;

      return 0;
  }

    //ODD EVEN A LINKED LIST
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

                if(val%2!=0)
                {
                    odd.addLast(val);
                }
                else
                {
                    even.addLast(val);
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

    //KREVERSE A LINKED LIST
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








