#include <iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
}*first;
Display(Node *p)
{
    while(p != NULL)
    {
        cout << p ->data << " ";
        p = p ->next;
    }

}
void Insert(Node *p,int val)
{

    Node *t,*q = NULL ;
    t = new Node;
    t ->data = val;
    t ->next = NULL;

    if(first == NULL)
    {
        first = t;
    }
    else {
    while(p && p ->data < val)
    {
        q = p;
        p = p ->next;
    }
    if(p == first)
    {
        t->next = first;
        first = t;
    }
    else {
         t ->next = q ->next;
         q ->next = t;
    }
    }

}

void Create(int A[],int n)
{
    first = new Node;
    first ->data = A[0];
    first ->next = NULL;

    Node *last  = new Node;

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
int main()
{
    cout << "How many Number's do you want  input : " << endl;

    int n; cin >> n;

    cout << "Enter " << n << " number's  (Sorted) : " << endl;

    int *A = new int [n];

    for(int i = 0 ;i < n;i++)
    {
        cin >> A[i];
    }

    Create(A,n);

    cout << "Which value   do you want to input : " ;

    int x; cin >> x;

      Insert(first,x);

    Display(first);


}


