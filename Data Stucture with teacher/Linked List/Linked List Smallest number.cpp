#include <iostream>
using namespace std;
struct Node{
    Node *next;
    int data;
}*first;
void Create(int A[],int n)
{
    first = new Node;
    first ->data = A[0];
    first ->next = NULL;

    Node *last = new Node;
    last = first;

    for(int i = 1;i < n;i++)
    {
        Node *t = new Node;
        t ->data = A[i];
        t ->next = NULL;

        last ->next= t;
        last = t;

    }


}
int Smallest(Node *p)
{
    int minA = p->data;

    while(p != NULL)
    {
        if(p->data < minA)
        {
            minA =  p ->data;

        }
        p = p->next;
    }
    return minA;
}
int main()
{
    cout << "How Many number you want to enter : ";
    int n;
    cin >> n;
    int *A = new int [n];

    for(int i = 0;i < n;i++)
    {
        cin >> A[i];
    }
    Create(A,n);
    cout << Smallest(first) << endl;;
}


