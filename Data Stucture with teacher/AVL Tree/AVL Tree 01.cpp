
#include <iostream>
using namespace std;

struct Node
{
    Node *lchild;
    int data;
    int height;
    Node *rchild;

};//*root = NULL;


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


int NodeHeight(Node *p)
{
    int hl,hr;

    if(p && p ->lchild)
    {
        hl = p ->lchild ->height;
    }
    else hl = 0;

     if(p && p ->rchild)
    {
        hr = p ->rchild ->height;
    }
    else hr = 0;

    if(hl > hr)
        return hl + 1;
    else
        return hr + 1;
}

int BalanceFactor(Node *p)
{
    int hl,hr;

    if(p && p ->lchild)
    {
        hl = p ->lchild -> height;
    }
    else hl = 0;

    if(p && p -> rchild)
    {
        hr = p ->rchild -> height;
    }
    else hr = 0;

    return hl - hr;
}


Node *LLRotation(Node *p)
{
    Node *pl = p ->lchild;
    Node *plr = pl ->rchild;

    pl ->rchild = p;
    p ->lchild = plr;

    p ->height = NodeHeight(p);
    pl ->height = NodeHeight(pl);

    if(root == p)
        root = pl;

    return pl;
}

Node *LRRotation(Node *p)
{
    Node *pl = p ->lchild;
    Node *plr = pl ->rchild;

    pl ->rchild = plr ->lchild;
    p ->lchild = plr ->rchild;

    plr -> lchild  = pl;
    plr ->rchild = p;


    p ->height = NodeHeight(p);
    pl ->height = NodeHeight(pl);
    plr ->height = NodeHeight(plr);

    if(root == p)
        root = pl;

    return pl;

}

Node *RRRotation(Node *p)
{
   return NULL;

}


Node *RLRotation(Node *p)
{
   return NULL;

}
Node *RInsert(Node *p,int key)
{
    Node *t = NULL;

    if(p == NULL)
    {
        t = new Node ;
        t ->height = 1;
        t ->data = key;
        t ->lchild = t ->rchild = NULL;

        return t;

    }

    if(key < p ->data)
    {
        p ->lchild = RInsert(p ->lchild,key);
    }
    else {
        p ->rchild = RInsert(p ->rchild,key);
    }

    p ->height = NodeHeight(p);


    if(BalanceFactor(p) == 2 && BalanceFactor(p ->lchild) == 1)
        return LLRotation(p);
    else if(BalanceFactor(p) == 2 && BalanceFactor(p ->lchild) == -1)
        return LRRotation(p);
    else if(BalanceFactor(p) == -2 && BalanceFactor(p ->rchild) == -1)
        return RRRotation(p);
    else if(BalanceFactor(p) == -2 && BalanceFactor(p ->lchild) == 1)
        return RLRotation(p);
    return p;

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
    root = RInsert(root,10);
    RInsert(root,45);

    cout  << endl << "Inorder Order : " << endl ;
    inorder(root);
     return 0;
}
