#include <iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
}*first,*second;

void Display(Node *p)
{
    while(p != NULL)
    {
        cout << p ->data << " ";
        p = p ->next;

    }
}
void  Create(int A[],int n)
{
    first = new Node;
    first ->data = A[0];
    first ->next = NULL;

    Node *last = new Node;

    last = first;

    for(int i = 1; i < n;i++)
    {
        Node *t = new Node;
        t -> data = A[i];
        t -> next = NULL;

        last ->next = t;
        last = t;

    }
}

void  Create2(int A[],int n)
{
    second = new Node;
    second ->data = A[0];
    second ->next = NULL;

    Node *last = new Node;

    last = second;

    for(int i = 1; i < n;i++)
    {
        Node *t = new Node;
        t -> data = A[i];
        t -> next = NULL;

        last ->next = t;
        last = t;

    }
}

void Concatenating(Node *p)
{
   p = first;

   while(p ->next != NULL)
   {
       p = p ->next;


   }
   p ->next = second;
   second = NULL;

}
int main()
{
    cout << " How many number's do you want to input : ";
    int n;cin >> n;

    int *A = new int[n];

    cout << "Input  " << n << " number's : " ;

    for(int i = 0;i < n;i++)
    {
        cin >> A[i];

    }
     cout << " How many number's do you want to input : ";
    int m;cin >> m;

    int *B = new int[m];

    cout << "Input  " << m << " number's : " ;

    for(int i = 0;i < m;i++)
    {
        cin >> B[i];

    }

    Create(A,n);
    Create2(B,m);

    Concatenating(first);

    Display(first);

}
