#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*first;

void create(int A[],int n)
{
    int i;

    first = new Node;

    first -> data = A[0];

    first -> next = NULL;

    Node *last = first;

    for(i = 1; i < n;i++)
    {
        Node *t;

        t = new Node;

        t -> data = A[i];

        t -> next = NULL;

        last -> next = t;

         last =t ;
    }
}

void Display(struct Node *p)
{
    while(p  != NULL)
    {
        cout << p ->data << endl;

        p = p ->next;
    }
}



int main()
{
    int A[] = {10,12,13,15,16,17,18,211};
    create(A,8);
    Display(first);

    return 0;

}
