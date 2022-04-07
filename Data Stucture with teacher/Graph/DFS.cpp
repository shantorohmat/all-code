#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
}*front = NULL,*rear = NULL;

void enqueue(int x)
{
    Node *t = new Node;

    if(t == NULL)
    {
        cout << "Queue is full" << endl;
    }
    else {
        t ->data = x;
        t ->next = NULL;

        if(front == NULL)
        {
            front = rear =  t;
        }
        else{
            rear ->next = t;
            rear = t;
        }
    }
}

int  dequeue()
{
    Node *p = new Node;

    int x = -1;

    if(front == NULL)
    {
        cout << "queue is empty" << endl;
    }
    else{
        p = front;
        front = front ->next;
        x = p ->data ;

        delete p;
    }
    return x;
}

int isEmpty()
{
    return front == NULL;
}

void DFS(int G[][7],int i,int n)
{
    int u = i,v;
    static int visited[7] = {0};

    if(visited[u] == 0){
    cout << u << " ";


    visited[u] = 1;




        for(v = 1;v < n;v++)

            if(G[u][v] == 1 && visited[v] == 0)
            {
                DFS(G,v,n);

            }

    }

}


int main()
{
 int G[7][7]={{0,0,0,0,0,0,0},
 {0,0,1,1,0,0,0},
 {0,1,0,0,1,0,0},
 {0,1,0,0,1,0,0},
 {0,0,1,1,0,1,1},
 {0,0,0,0,1,0,0},
 {0,0,0,0,1,0,0}};
 DFS(G,1,7);

 return 0;
}
