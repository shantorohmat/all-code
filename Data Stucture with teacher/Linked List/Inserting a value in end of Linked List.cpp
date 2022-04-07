#include <iostream>
using namespace std;
struct Node {
    int data;
    Node *next;
}*first;



void Insert(int x)
{

  Node *last = new Node;

   Node *t = new Node;
   t ->data = x;
   t ->next = NULL;
   last = first;

   if(last == NULL)
   {
       first = last = t;
   }
   else
   {

        while(last->next != NULL) last=last->next;
         last ->next = t;
         last = t;
   }

}

void Display(Node *p)
{
    while(p != NULL)
    {
        cout << p->data << " ";
        p  = p ->next;
    }
}
int main()
{


    Insert(9898);
    Insert(81);
    Insert(80);

    Display(first);


}

