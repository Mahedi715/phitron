#include <stdio.h>

int main()
{
    int N, k = 0, s;
    scanf("%d", &N);
    s = N - 1;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 0; j < s; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d", i);
        }

        k++;
        s--;
        printf("\n");
    }
}