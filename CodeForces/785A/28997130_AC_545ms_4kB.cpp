#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int tc, sum=0;
    cin >> tc;
    for(int i=0; i<tc; i++)
    {
        cin >> s;
        if(s=="Tetrahedron")
        {
            sum+=4;
        }
        if(s=="Cube")
        {
            sum+=6;
        }
        if(s=="Octahedron")
        {
            sum+=8;
        }
        if(s=="Dodecahedron")
        {
            sum+=12;
        }
        if(s=="Icosahedron")
        {
            sum+=20;
        }

    }
    cout << sum << endl;
    return 0;

}
