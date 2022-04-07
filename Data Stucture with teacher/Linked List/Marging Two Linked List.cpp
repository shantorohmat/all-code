#include <iostream>
using namespace  std;

struct Node{
    int data ;
    Node *next;
}*first,*second,*third;

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

    Node *last = new Node;
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


void Create2(int A[],int n)
{
    second = new Node;
    second ->data = A[0];
    second ->next = NULL;

    Node *last = new Node;
    last = second;

    for(int i = 1;i < n;i++)
    {
        Node *t = new Node;
        t ->data = A[i];
        t ->next = NULL;

        last ->next = t;
        last = t;

    }
}

void Marging(Node *p,Node *q)
{
    Node *last = new Node;
    if(p ->data < q ->data)
    {
        third = last = p;

        p = p ->next;

        third ->next = NULL;
    }

    else{
        third = last  = q;

        q = q ->next;

        third ->next = NULL;
    }

    while(p && q)
    {
        if(p ->data < q ->data)
        {
            last ->next = p;
            last = p;
            p = p ->next;
            last ->next = NULL;
        }
        else{
            last ->next = q;
            last = q;
            q = q ->next;
            last ->next = NULL;
        }
    }
    if(p) last ->next = p;
    if(q) last ->next = q;


}

int main()
{
    cout << "How many number's do you want to input (sorted) : ";
    int n; cin >> n;

    int *A = new int[n];

    cout << "Enter " << n << " number's : (sorted) " ;

    for(int i = 0 ;i  < n;i++)
    {
        cin >> A[i];

    }


    cout << "How many number's do you want to input (sorted) : ";
    int m; cin >> m;

    int *B = new int[m];

    cout << "Enter " << m << " number's (sorted) : " ;

    for(int i = 0 ;i  < m;i++)
    {
        cin >> B[i];

    }

    Create(A,n);
    Create2(B,n);
    Marging(first,second);
    Display(third);

}
