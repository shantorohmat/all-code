#include <iostream>
#include <algorithm>
#include <list>
#include <math.h>
#include <cstring>
using namespace std;

void min(int m[],int n)
{
    list <int> b;

    for(int i = 0;i < n;i++)
    {
        b.push_back(m[i]);
    }

    auto a = min_element(b.begin(),b.end());

    cout << "The minimum number : " << *a << endl;

}

void max(int m[],int n)
{
    int* d = max_element(m,m+n);

    cout << "The maximum number : " <<  *d << endl;
}

void prime(int m[],int n)
{
    int c = 0;
    for(int i = 0;i < n;i++)
    {
        if(m[i] < 2) continue;

        if(m[i] == 2) {/*cout << m[i] << endl*/;c++;continue;}

        if(m[i]%2 == 0) continue;

        for(int j = 3;j < m[i];j = j+2)
        {
            if(m[i] % j == 0) break;
            else {c++;break;}

        }


    }
    cout << "The number of prime numbers : " << c << endl;
}

void palin(int m[],int n)
{
    int c = 0,s[100],x ,d[100],g = 0,h[100],k[100],q[100],l[100];
    for(int i = 0;i < n;i++) h[i] = m[i];

     for(int i = 0;i < n;i++) k[i] = m[i];

      for(int i = 0;i < n;i++) l[i] = m[i];

    for(int j =0;j < n;j++){ x = 0;/// cout << m[j] ;
    for(int i =0;m[j] != 0;i++)
    {
        int rem = m[j] % 10;
        if(rem > 0) x++;
        m[j] = m[j] / 10;

    }
    d[j] = x;
   /// cout << " : " << d[j] << endl;
    }

    for(int i = 0;i < n;i++)
    {
        if(h[i] < 10)
        {
            c++;
             ///cout << "c : " << h[i] << endl;
        }
        else{
                //cout << " s : ";
                for(int j = 0;h[i] != 0;j++)
             {
                 int rem = h[i] % 10;
                 s[j] = rem;
                // cout  << s[i]   ;
                 h[i] = h[i] / 10;
             }
            // cout << " " << k[i] << endl;
            // cout << "good " << endl;
//        for(int k = 0;k < d[i];k++)cout << s[k] << " ";
        //cout << endl;

                for(int j = d[i] -1;j >= 0;j--)
                {
                     int rem = k[i] % 10;
                    q[j] = rem;
                   // cout  << q[j]   ;
                   k[i] = k[i] / 10;

                } //cout << endl;
             for(int j =0 ;j < d[i];j++)
             {
                 if(q[j] == s[j]){
                    g = 1;
                    //cout << "c : y :"<< l[i] <<endl;
                    }
                 else
                 {
                     g = 0;
                      //cout << "c : X "<< l[i] <<endl;
                     break;
                 }
             }
             if(g == 1)c++;

        }
    }

    cout << "The number of palindrome numbers : " << c << endl;

}

void div(int m[],int n)

{
    int s[100],i,c;

   for(i = 0;i < n;i++)
   {
       c = 0;

       for(int j = 1;j <= m[i];j++)
       {
           if(m[i] % j == 0)
           {
               c++;
           }
       }
       s[i] = c;
       //cout << s[i] << endl;
   }
   int k =0,l = 0,x[100],e;

        int *it = max_element(s,s+n);
        ///cout << "max : " << *it << endl;

        for(int i = 0;i < n;i++)
                    if(*it == s[i]) k++;
        //cout << k << endl;
        if(k > 1){

        for(int i = 0 ;i < n;i++)
        {
            if(s[i] == *it)
            {
                x[l++] = m[i];
                //cout << m[i] << endl;
            }
        }
        for(int i = 0;i < k -1;i++){
          e = max(x[i],x[i+1]);
        }

         cout << "The number that has the maximum number of divisors : " << e << endl;
        }
        else
        {
            for(int i = 0;i < n;i++)
            if(s[i] == *it)
                cout << "The number that has the maximum number of divisors : " << m[i] << endl;
        }

}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;

    int m[101];

    for(int i = 0;i < n;i++)
        cin >> m[i];
    max(m,n);
    min(m,n);
    prime(m,n);
    div(m,n);
    palin(m,n);

}
