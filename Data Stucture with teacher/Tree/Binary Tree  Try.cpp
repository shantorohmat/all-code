#include <iostream>
using namespace std;

struct Node
{
    struct Node *lchild;
    int data;
    struct Node *rchild;
};
struct Queue
{
    int size;
    int front;
    int rear;
    struct Node **Q;
};

void create(struct Queue *q,int size)
{
    q ->size = size;
    q ->front = q ->rear = 0;
    q ->Q = new Node*[q ->size];
}

void enqueue(struct Queue *q,struct Node *x)
{
    if((q ->rear+1)%q ->size == q ->front )
    {
        cout << "Queue is full" << endl;
    }
    else {
        q ->rear  = (q ->rear +1)% q ->size;
        q ->Q[q ->rear] = x;
    }
}

struct Node *dequeue(struct Queue *q)
{
    struct Node *x = NULL;
    if(q ->rear == q ->front)
    {
        cout << "Queue is empty" << endl;
    }
    else{
        q ->front = (q ->front + 1) % q ->size;
        x = q ->Q[q ->front];
    }
    return x;
}
int isEmpty(struct Queue q)
{
    return q.front == q.rear;
}

struct Node *root = NULL;
void treecreate()
{
    Node *p,*t;
    Queue q;
    create(&q,100);
    int x;

    cout << "Enter a root value : ";
    cin >> x;

    root = new Node;
    root ->data = x;
    root ->lchild = root ->rchild = NULL;

    enqueue(&q,root);

    while(!isEmpty(q))
    {
        p = dequeue(&q);

        cout << "Enter a value for left child of  " << p ->data << " : " << endl;
        cin >> x;
        if(x != -1){
        t = new Node ;
        t ->data = x;
        t ->lchild = t ->rchild = NULL;

        p ->lchild = t;
        enqueue(&q,t);
        }

         cout << "Enter a value for right child of  " << p ->data << " : " << endl;
        cin >> x;
        if(x != -1){
        t = new Node ;
        t ->data = x;
        t ->lchild = t ->rchild = NULL;

        p ->rchild = t;
        enqueue(&q,t);
        }

    }
}

void preorder(Node *p)
{
    if(p)
    {
        cout << p ->data << " ";
        preorder(p ->lchild);
        preorder(p ->rchild);
    }

}


void postorder(Node *p)
{
    if(p)
    {

        postorder(p ->lchild);
        postorder(p ->rchild);
        cout << p ->data << " ";
    }

}


void inorder(Node *p)
{
    if(p)
    {

        inorder(p ->lchild);
        cout << p ->data << " ";
        inorder(p ->rchild);
    }

}

int main()
{
    treecreate();
    cout << "preorder : " << endl ;
    preorder(root);
    cout << endl << "Post Order : " << endl ;
    postorder(root);
    cout  << endl << "Inorder Order : " << endl ;
    inorder(root);
}

