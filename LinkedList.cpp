#include <iostream>
class list{
private:
    struct node
    {
        int data;
        node *next;
    };
    node *head, *tail;
public:
    list();
    void create_node(int value);
    void print();
    void insert_start(int value);
    void insert_end(int value);
    void insert_position(int pos, int value);

};
list::list()
    {
        head = NULL;
        tail = NULL;
    }
void list::create_node(int value)
{
    node *temp = new node;
    temp->data = value;
    temp->next = NULL;
    if(NULL == head)
    {
        head = temp;
        tail = temp;
        temp = NULL;
    }
    else
    {
        tail->next = temp;
        tail = temp;
    }
}
void    list::print()
    {
        node *temp = new node;
        temp = head;
        while ( temp != NULL)
        {
            std::cout<<temp<<temp->data<<"  ";
            temp = temp->next;
        }

    }
  void  list::insert_start(int value)
    {
    node *temp = new node;
    temp->data = value;
    temp->next=head;
    head = temp;
    }
void    list::insert_end(int value)
    {

        node *temp = new node;
        temp->data = value;
        temp->next = NULL;
        tail->next = temp;
        tail = temp;
    }
void    list::insert_position(int pos, int value)
    {
        node *pre = new node;
        node *cur = new node;
        node *temp = new node;
        cur = head;
        for ( int i; i<pos; i++);
        {
            pre = cur;
            cur = cur->next;
        }
        temp->data = value;
        pre->next = temp;
        temp->next = cur;
    }
