#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[105];
    int i, j, n, count=0;
    cin >> n;
    ///getline(cin, a);
    getchar();
    gets(a);
    for(i=0; i<n; i++)
    {
        if(a[i]>='A' && a[i]<='Z')
        {
            a[i]+=32;
        }
    }
    sort(a,a+n);
    for(i=0; i<n-1; i++)
    {
        if(a[i]!=a[i+1])
        {
            count++;
        }
    }
    count++;
    if(count==26)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
