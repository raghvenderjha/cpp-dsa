#include <iostream>
#include <string>

using namespace std;

      class node
      {
      public:
        int data;
        node*next;
      };

      class LinkedList
      {
      public:
        node*head,*tail;
        int size=0;

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
        void display()
        {
            for(node*temp=head;temp!=NULL;temp=temp->next)
            {
                cout<<temp->data<<"\t";
            }
            cout<<endl;
        }
      };
    int main()
    {
        LinkedList l1;
        string s;
        while(s!="quit")
        {
            if(s=="addLast")
            {
                int val;
                cin>>val;
                l1.addLast(val);
            }
            else if(s=="display")
            {
                l1.display();
            }
            cin>>s;
        }
        return 0;
    }

