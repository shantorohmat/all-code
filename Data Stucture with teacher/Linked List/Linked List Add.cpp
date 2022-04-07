#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
}*first;

void create(int A[],int n)
{
    first = new Node;

    first ->data = A[0];
    first ->next = NULL;

    Node *last;

    last = first;

    for(int i = 1;i < n;i++)
    {
        Node *t = new Node ;

        t ->data = A[i];
        t ->next = NULL;

        last ->next = t;

        last = t;
    }


}

int  Add(Node *p)
{
    int sum = 0 ;
    while(p !=NULL)
    {
        sum += p->data;
        p = p ->next;
    }

    return sum;

}

int main()
{
    int n;

    cin >> n;

    int *A = new int [n];

    for(int i = 0;i < n;i++)
    {
        cin >> A[i];
    }
    create(A,n);

    cout << Add(first) << endl;

}
