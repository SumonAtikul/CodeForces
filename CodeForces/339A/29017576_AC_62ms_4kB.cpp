#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[105];
    cin >> s;
    int x=strlen(s), a[x], i=0, j=0;
    while(s[i]!='\0')
    {
        if(s[i]!='+')
        {
            a[j++]=s[i];
        }
        i++;
    }
    sort(a, a+j);
    for(int i=0; i<j; i++)
    {
        if(i==j-1)
        {
            printf("%c", a[i]);
        }
        else{
            printf("%c+", a[i]);
        }
    }
    return 0;
}
