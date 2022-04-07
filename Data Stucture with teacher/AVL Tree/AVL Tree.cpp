#include <iostream>
using namespace std;

struct Node
{
    Node *lchild;
    int data;
    int height;
    Node *rchild;

}*root = NULL;



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

int main()
{
    root = RInsert(root,10);
    RInsert(root,45);
     return 0;
}
