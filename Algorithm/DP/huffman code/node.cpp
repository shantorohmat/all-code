#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <vector>
#include <map>
#include <set>
#include <queue>
#define ll unsigned long long int
#define ld long long double
#define I INT_MAX
using namespace std;

const int Size = 1e5;

int mod = 1e9+7;
int fast()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}

int fix_mod(int a,int b)
{
    return (((a&b) + b)%b);
}

int mod_add(int a,int b)
{
    return (a%mod + b%mod) % mod;
}

int add(int a,int b)
{
    if(a < 0) a += mod;
    if(b < 0) b += mod;
    if(a+b >= mod) return a+b-mod;
    return a+b;
}
ll gcd(ll a,ll b)
{
    if(b == 0LL) return a;
    return gcd(b,a%b);
}

struct node
{
    int data;
    struct node *next;
}*first;

void create(int A[],int n)
{
    first = new node;
    first ->data = A[0];
    first ->next = NULL;

    node *last = first;

    for(int i = 1;i  < n;i++)
    {
        node *t = new node;
        t ->data = A[i];
        t ->next = NULL;

        last ->next = t;
        last = t;

    }
}

void Display(struct node *p)
{
    while(p != NULL)
    {
        cout << p ->data << endl;
        p = p ->next;
    }

}
int main()
{

    int A[] = {10,12,13,15,16,17,18,211};
    create(A,8);
    Display(first);

    return 0;
}
