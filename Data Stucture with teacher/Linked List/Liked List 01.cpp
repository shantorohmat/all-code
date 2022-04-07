#include <iostream>
using namespace std;

struct Node
{
    int date;
    struct Node *next;
}*first;
void create(int A)
{


    if(first == NULL)
    {
        first = new Node;
        first ->date = A;
        first ->next = NULL;

    }
    else
    {
        Node *last = first;

//        while(last->next != NULL)
//        {
//            last = last ->next;
//        }

        Node *t;

        t = new Node();

        t ->date = A;

        t ->next = NULL;

        last -> next = t;


    }
}
void Display(struct Node *p)
{
    while(p  != NULL)
    {
        cout << p ->date << endl;

        p = p ->next;
    }
}



int main()
{

    create(8);
    create(80);
    Display(first);

    return 0;
}


