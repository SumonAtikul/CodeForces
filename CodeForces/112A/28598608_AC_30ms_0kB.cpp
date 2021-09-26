#include<stdio.h>
#include<string.h>
int main()
{
    char ch[105], st[105];
    scanf("%s %s", ch, st);
    int len=strlen(ch);
    for(int i=0; i<len; i++){
        if(ch[i]>='a' && ch[i]<='z'){
            ch[i]-=32;
        }
        if(st[i]>='a' && st[i]<='z'){
            st[i]-=32;

        }
    }

    int comp=strcmp(ch, st);
    printf("%d\n", comp);
    return 0;

}
