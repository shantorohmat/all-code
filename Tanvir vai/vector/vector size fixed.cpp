#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v(10);//vector size declaration

    for(int i = 0;i < 10;i++)
        cin >> v[i];
    for(int i = 0;i < 10;i++)
        cout << v[i] << " ";

}
