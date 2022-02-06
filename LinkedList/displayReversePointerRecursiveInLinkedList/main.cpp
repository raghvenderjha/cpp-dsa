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
        void displayReversePointerRecursiveHelper(node*Node)
        {
            if(Node==NULL)
            {
                return;
            }
            displayReversePointerRecursiveHelper(Node->next);
            if(Node==tail)
            {
                //NOTHING TO DO
            }
            else
            {
                Node->next->next=Node;
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


