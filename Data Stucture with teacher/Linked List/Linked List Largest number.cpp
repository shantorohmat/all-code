#include <iostream>
#include <stdlib.h>
using namespace std;
struct Node{
    int data;
    Node *next;
}*first;

void Create(int A[],int n)
{
    first = new Node;
    first ->data = A[0];
    first ->next = NULL;

    Node *Last = new Node;
    Last = first;

    for(int i = 1;i < n;i++)
    {
        Node *t = new Node;
        t ->data = A[i];
        t ->next = NULL;

        Last ->next = t;
        Last  = t;
    }


}
int Largest(Node *p)
{
    int maxA = INT64_MIN;
    //int  maxA = p->data;

    while(p != NULL)
    {
        if(p->data > maxA)
        {
            maxA =  p ->data;

        }
        p = p->next;
    }
    return maxA;
}
int main()
{
    cout << "How Many number you want to enter : ";
    int n;
    cin >> n;
    int *A = new int [n];
    cout << "Give Your Number :";

    for(int i = 0;i < n;i++)
    {
        cin >> A[i];
    }
    Create(A,n);
    cout << Largest(first) << endl;;
}
