#include <stdio.h>
#include <stdlib.h>

int ctof(int c)
{
    return c * 9 / 5 + 32;
}

int main(int argc, char** argv)
{
    switch (argc)
    {
        case 1:
            int in;
            scanf("%d", &in);
            printf("%d\n", ctof(in));
            break;
        case 2:
            printf("%d\n", ctof(atoi(argv[1])));
            break;
        default:
            printf("Usage: %s {num}\n", argv[0]);
            break;
    }
}
