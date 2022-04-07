#include <iostream>
using namespace std;

int main()
{
    int n,count = 0;

    cin >> n;

    for(int r = 1;r <= (2*n)-1;r++)
    {
        if(r == 1 || r == n){


        for(int c = 1;c <= 1;c++)
        {
            cout << " ";

        }


        for(int c = 1;c <= n;c++)
        {
            cout << "7";
        }
        cout << endl;


        }
        else if(r > 1 && r <= ((n/2)+1))
        {

            count++;
            for(int c = 1;c <= 1;c++)
            {
                cout << "7";
            }
            cout << endl;

        }
        else if(r > n)
        {

            if(r == ((2*n)-1))
            {

                for(int c = 1;c <= 1;c++)
                {
                    cout << " ";
                }


                for(int c = 1;c <= (n);c++)
                {
                    cout << "7";
                }
                cout << endl;


            }
           else if(r <= n+count)
            {

            for(int c = 1;c <= n+1;c++)
            {
                cout << " ";
            }


            for(int c = 1;c <= 1;c++)
            {
                cout << "7";
            }
            cout << endl;
            }
        }

    }
   cout << endl;
   cout << endl;
   cout << endl;

    for(int r = 1;r <= n;r++)
    {
        for(int c = 1;c <= 1;c++)
        {
            cout << "7";
        }
        for(int c = 1;c <= n;c++)
        {
            cout << " ";
        }
        for(int c = 1;c <= 1;c++)
        {
            cout << "7";
        }
        cout << endl;
        if(r == ((n/2)))
        {
            for(int c = 1;c <= n+2;c++)
            {
                cout << "7";
            }
            cout << endl;
        }
    }
    cout << endl;
    cout << endl;
    cout << endl;

    int k = 0;
    for(int r = 1;r <= n;r++)
    {


        for(int c = 1;c <= n - r;c++)
        {
            cout << " ";
        }

        for(int c = 1;c <= 1;c++)
        {
            if(r == ((n/2) +1))continue;
            cout << "7";
        }
        for(int c = 1;c <= ((2*k) -1);c++)
        {

        if(r == ((n/2) +1))
        {
            for(int c = 1;c <= n;c++)
            {
                cout << "7";


            }
            //if(r == (n/2)+1)
                break;
        }
        else
         cout << " ";

        }
        k++;
        for(int c = 1;c <= 1;c++)
        {   if(r == 1)continue;
            cout << "7";
        }

        cout << endl;

    }
    cout << endl;
    cout << endl;
    cout << endl;


    for(int r = 1;r <= n;r++)
    {

       for(int c = 1;c <= 1;c++ )
       {
           cout << "7";
       }
       if(r == 1)
       {
           for(int c = 1;c <= 1;c++)
           {
               cout << "7";
           }
       }
       if(r > 1){
       for(int c = 1;c <= r - 1;c++)
       {
           cout << " ";
       }
       }
       if(r > 1){
       for(int c = 1;c <= 1;c++)
       {
           cout << "7";
       }

       }
       if( r < (n)){
       for(int c = n-r+1;c > 1;c--)
       {
           cout << " ";
       }
       }


           for(int c = 1;c <= 1;c++)
           {
               cout << "7";
           }
        cout << endl;

    }

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;

    for(int r = 1;r <= n;r++)
    {
        if(r == 1){
        for(int c = 1;c <= (2*n);c++)
        {
            cout << "7";
        }
        }
        else if(r >1){
        for(int c = 1;c <= n;c++)
        {
            cout << " ";
        }
        for(int c = 1;c <= 1;c++)
        {
            cout << "7";
        }

        }
        cout << endl;
    }
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;

    for(int r = 1;r <= n+1;r++)
    {
        if(r == 1 || r == n+1)
        {
            for(int c = 1;c <= 1;c++)
            {
                cout << " ";
            }
            for(int c = 1;c <= n ;c++)
            {
                cout << "7";
            }
        }
        else
        {
            for(int c = 1;c <= 1;c++)
            {
                cout << "7";
            }
            for(int c = 1;c <= n ;c++)
            {

                cout << " ";

            }
            for(int c = 1;c <= 1;c++)
            {
                cout << "7";
            }
        }
        cout << endl;
    }
}
