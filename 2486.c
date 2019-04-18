#include <stdio.h>
#include <string.h>

int check(int a, char str[])

{
    char c;
    int x;

    if (strcmp(str, "suco de laranja")==0)
        c='s';

    else if (strcmp(str, "morango fresco")==0)
        c='f';

    else if (strcmp(str, "mamao")==0)
        c='o';

    else if (strcmp(str, "goiaba vermelha")==0)
        c='g';

    else if (strcmp(str, "manga")==0)
        c='m';

    else if (strcmp(str, "laranja")==0)
        c='l';

    else if (strcmp(str, "brocolis")==0)
        c='b';

    switch (c)
    {
    case 's':
        x=a*120;
        break;

    case 'f':
        x=a*85;
        break;
    case 'o':
        x=a*85;
        break;
    case 'g':
        x=a*70;
        break;
    case 'm':
        x=a*56;
        break;
    case 'l':
        x=a*50;
        break;
    case 'b':
        x=a*34;
        break;
    }

    return x;

}

void calculate(int x)

{
    int n;

    if (x>=110 && x<=130)
        printf("%i mg\n", x);

    else if (x<110)
    {
        n=110-x;

        printf("Mais %i mg\n", n);
    }

    else
    {
        n=x-130;

        printf("Menos %i mg\n", n);
    }
}

int main(void)

{
    char c, str[50];
    int i, j, a, b, n;

    while (1)
    {
        scanf("%i", &n);

        b=0;

        if (n==0)
            break;

        for (i=0; i<n; ++i)
        {
            scanf("%i %[^\n\r]", &a, str);

            b+=check(a, str);
        }

        calculate(b);
    }

    return 0;
}
