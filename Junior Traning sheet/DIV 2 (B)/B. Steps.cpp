#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    int nn = n + 7,mm = m + 7;
    int *arr = new int[nn*mm];
    for(int i = 0;i <= (n+1);i++)
    {
        for(int j = 0;j <= (m+1);j++)
        {

             *(arr+ i*m + j) = 0 ;
        }
    }

    int x,y;
    cin >> x >> y;
    int k;
    cin >> k;
    while(k--)
    {
        int a,b;
        cin >> a >> b;
        // cout << *(arr+1*m + 5) << endl;

        while(a <= n && b <= m)
        {
            *(arr + a*m + b) = 1;
             //cout << "(" << a << "," <<b << ")" << endl;

            a = a + x;
            b = b + y;
              //cout << "(" << a << "," <<b << ")" << endl;

        }
    }
    for(int i = 1;i <= n;i++)
    {
        for(int j = 1;j <= m;j++)
        {
            cout << *(arr+i*m + j) << " ";
        }
        cout << endl;
    }
     //cout << *(arr+1*m + 5) << endl;
     int CNT = 0;
     int A,B,C,D,E,F,G,H;

       for(int i = 1;i <= n;i++)
    {
        for(int j = 1;j <= m;j++)
        {

            A = *(arr+(i-1)*m+(j-1));
            B = *(arr+(i+1)*m+(j+1));
            C = *(arr+(i-1)*j);
            D = *(arr+(i+1)*j);
            E = *(arr+i*(j+1));
            F = *(arr+i*(j-1));
            G = *(arr+(i+1)*(j+1));
            H = *(arr+(i-1)*(j+1));
            if(*(arr+(i)*m + j) == 1)
            {
                if(A == 1 || B == 1 || C == 1 || D == 1 || E == 1 || F == 1 || G == 1 || H == 1 )
                {
                    CNT++;

                }
            }
        }

    }
        cout << CNT << endl;
}
