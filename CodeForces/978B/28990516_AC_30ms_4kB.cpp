#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[105], ch2[105];
    int tc, x=0, count=0;
    cin >> tc >> ch;
    for(int i=0; i<tc; i++)
    {
        if(ch[i] == 'x')
        {
            x++;
            if(x==3)
            {
                count++;
            }
            else if(x>=3)
            {
                count++;
            }
        }
        else
        {
            x=0;
        }
    }
    cout << count << endl;
    return 0;
}
