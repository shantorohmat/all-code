#include <iostream>
using namespace std;

struct Node
{
    int date;
    struct Node *next;
}*first;
void create(int A[],int n)
{


        first = new Node;
        first ->date = A[0];
        first ->next = NULL;



        Node *last = first;///make a copy  first node

        for(int i = 1;i < n;i++){

        Node *t;

        t = new Node;///create a new node

        t ->date = A[i];

        t ->next = NULL;

        last -> next = t;///link the last node with new node(t)

        last = t ;

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

    int A[] = {10,12,13,15,16,17,18,211};
    create(A,8);
    Display(first);

    return 0;
}

