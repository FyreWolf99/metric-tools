#include <stdio.h>
#include <stdlib.h>

int ftoc(int f)
{
    return (f - 32) * 5 / 9;
}

int main(int argc, char** argv)
{
    switch (argc)
    {
        case 1:
            int in;
            scanf("%d", &in);
            printf("%d\n", ftoc(in));
            break;
        case 2:
            printf("%d\n", ftoc(atoi(argv[1])));
            break;
        default:
            printf("Usage: %s {num}\n", argv[0]);
            break;
    }
}
