#include <iostream>
using namespace std;
struct Node{
    int data;
    Node *next;

}*first;

void Display(Node *p)
{
    while(p != NULL)
    {
        cout << p ->data << " ";
        p = p ->next;
    }
}
void Create(int A[],int n)
{
    first = new Node;
    first ->data = A[0];
    first ->next = NULL;

    Node *last = new Node ;

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

int Isloop(Node *f)
{
    Node *q,*p;

    p = q = f;
    do
    {
        p = p ->next;
        q = q ->next;
        q = q ?q->next:q;


    }while(p && q && p != q);
    if(p == q)
        return 1;
    else return 0;
}

int main()
{
     cout << "How many number's do you want to input  : ";
    int n; cin >> n;

    int *A = new int[n];

    cout << "Enter " << n << " number's :  " ;

    for(int i = 0 ;i  < n;i++)
    {
        cin >> A[i];

    }
    Create(A,n);
    Node *t1,*t2;
    t1 =first ->next ->next;
    t2 =first ->next ->next ->next ->next;
    t2 ->next = t1;

    if(Isloop(first) == 1)
    {
        cout << "It is loop in Linked List" << endl;
    }
    else cout << "It's is Linear In Linked List" << endl;

    //Display(first);
}


