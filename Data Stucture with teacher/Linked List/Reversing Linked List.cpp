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
        p  = p ->next;
    }
}

void Create(int A[],int n)
{
    first = new Node;
    first ->data = A[0];
    first ->next = NULL;

    Node *last = new Node;
    last = first;

    for(int i = 1; i < n;i++)
    {
        Node *t = new Node;
        t ->data = A[i];
        t ->next = NULL;

        last ->next = t;
        last = t;


    }
}

void Reversing(Node *p)
{
    p = first;
    int i = 0 ;
    int A[100];

    while(p != NULL)
    {
        A[i] = p ->data;
        p = p ->next;
        i++;

    }
    p = first ,i--;

    while(p != NULL)
    {
        p ->data = A[i];
        p = p ->next;
        i--;
    }

}

int main()
{
    cout << " How many number's do you want to input : ";
    int n;cin >> n;

    int *A = new int[n];

    cout << "Input  "<< n << " number's : " ;

    for(int i = 0;i < n;i++)
    {
        cin >> A[i];

    }

    Create(A,n);

    Reversing(first);

    Display(first);
}

