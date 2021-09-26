#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[150];
    int tc;
    scanf("%d", &tc);
    for(int i=1; i<=tc; i++){
    scanf("%s", &ch);
    int len=strlen(ch);
    if(len<=10){
        printf("%s\n", ch);
    }
    else{
       printf("%c%d%c\n", ch[0], len-2, ch[len-1]);
    }
    }
    return 0;
}

