#include <iostream>
using namespace std;
int main()
{
    char ch[1000];
    int n,cc = 0 ,vc = 0;

    cout  << "How many char you want to input : " ;

    cin >> n;

    for(int i = 0;i < n;i++)
    {
        cin >> ch[i];


        if(ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'o' || ch[i] == 'i' || ch[i] == 'u' || ch[i] == 'A' || ch[i] == 'E' || ch[i] == 'O' || ch[i] == 'I' || ch[i] == 'U')
            {
                vc++;


            }
        else if((ch[i] >= 65 && ch[i] >= 90) || (ch[i] >= 97 && ch[i] >= 122))
            {
                cc++;
            }
    }

    cout << "Consonant : " << cc << endl;
    cout << "Vowel : " << vc << endl;

}
