#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
}*first;

void create(int A[],int n){

    first = new Node;
    first ->data = A[0];
    first ->next = NULL;

    Node *Last = new Node;
    Last = first;

    for(int i = 1;i < n;i++)
    {
        Node *t = new Node;
        t ->data  = A[i];
        t ->next = NULL;

        Last ->next = t;

        Last = t;

    }



}

void Display(Node *p)
{
    while(p  != NULL)
    {
        cout << p ->data << " ";
        p = p ->next;
    }
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

    Display(first);


}
