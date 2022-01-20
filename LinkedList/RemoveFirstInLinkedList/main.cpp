#include <iostream>
#include <string>

using namespace std;

    class node
    {
    public:
        int data;
        node*next;
    };

    class linked_list
    {
    public:
        node*head,*tail;
        int size=0;

    public:
        linked_list()
        {
            head=NULL;
            tail=NULL;
        }
        void addLast(int n)
        {
            node*temp=new node;
            temp->data=n;
            temp->next=NULL;
            if(head==NULL)
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
     void testList() {
    for (node* temp = head; temp != NULL; temp = temp->next) {
      cout << temp->data << endl;
    }
    cout << size << endl;

    if (size > 0) {
      cout << tail->data << endl;
    }
  }
};


int main() {


  string str;
  linked_list l;
  while (true) {
    getline(cin, str);
    if (str[0] == 'q') {
      break;
    }
    else if (str[0] == 'a') {
      string ss = str.substr(8, 2);
      int n = stoi(ss);
      l.addLast( n);

    }
    else if (str[0] == 's') {
      cout << l.size << endl;
    }
    else if (str[0] == 'd') {
      l.display();
    }
    else if (str[0] == 'r') {
      l.removeFirst();
    }
  }


  return 0;

}


