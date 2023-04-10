#include <stdio.h>
int main() {
    int a;
    int b, cnt = 0, c, on = 0;
    char A[100];
    scanf("%d %d",&a,&b);
    while(1)
    {
        c = a % b;
        a = a / b;
        if(c >= 10)
        {
            A[cnt] = (char)((c - 10) + 65);
        }
        else
        {
            A[cnt] = c;
        }
        if (a <= 1)
        {
            on++;
            if (on > 1) break;
        }
        cnt++;
    }
    if (A[cnt] == 0)
    {
        cnt --;
    }
    for (int i = cnt; i >= 0; i--)
    {

       if ((0 <= ((int)A[i])) && ((int)A[i]) <= 9)
       {
           printf("%d",A[i]);
       }
       else
       {
           printf("%c",A[i]);
       }
    }
}
