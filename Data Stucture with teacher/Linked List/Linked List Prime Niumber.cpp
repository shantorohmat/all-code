#include <iostream>
using namespace std;
struct Node
{
    Node *next;
    int data;

}*first;

void Create(int A[],int n)
{
    first = new Node;
    first ->data = A[0];
    first ->next = NULL;

    Node *last =  new Node;
    last = first;

    for(int i = 1;i < n;i++)
    {
        Node *t = new Node;

        t ->data = A[i];
        t ->next = NULL;

        last ->next = t;
        last = t;
    }
}
void Prime(Node *p)
{
    int i ;
    while(p != NULL){
    if(p->data < 2) i = 0;
    if(p->data == 2) i = 1;
    if(p->data % 2 == 0) i = 0;
    if(p->data % 2) i = 1;

    if(i == 1)
    {
        cout << p->data << " ";
    }
    p = p->next;
    }
}
int main()
{
    cout << "How Many number you want to enter : ";
    int n,m;
    cin >> n >> m;
    int x = m-n;
    int *A = new int [x];

    for(int i = 0,j = n;i < x;i++,j++)
    {
        A[i] = j;
    }
    Create(A,x);
     Prime(first);
}
