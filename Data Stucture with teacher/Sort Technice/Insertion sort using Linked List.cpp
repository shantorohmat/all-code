#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;

}*first=NULL;
void Display()
{
    Node *p = new Node;
    p = first;
    while(p != NULL){
        cout << p ->data << " ";
        p = p ->next;
    }

}

void Create(int A[],int n)
{
    first = new Node;
    first ->data = A[0];
    first ->next = NULL;

    Node *last = new Node;
    last = first;

    for(int i = 1 ;i < n;i++)
    {
        Node *t = new Node;
        t ->data = A[i];
        t ->next = NULL;

        last ->next = t;

        last = t;
    }


}
int  Insertion(int n)
{

    int x = first -> data;

    Node *p = first;
   // Node *q = NULL;
   while(p && p ->data < x)
    {
       // q = p;
        p = p ->next;
    }

    Node *t = new Node;
    t ->data = x;
    t ->next = p ->next;
    //t ->next = p ;
    p ->next = t;


}
int main()
{

   cout << " Enter You array size  : " ;
   int n; cin >> n;
   int *A = new int[n];
   for(int i = 0;i < n;i++)
    cin >> A[i];

    Create(A,n);
    Insertion(n);
    Display();
}
