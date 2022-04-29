#include<stdlib.h>
#include<stdio.h>

int main(int argc, char *argv[])
{
    int i = 0;
    int m;

    if (argc != 3)
    {
        printf("Error\n");
        return (1);
    }
    else
    {
        m = atoi(argv[1]) * atoi(argv[2]);
        printf("%d",m);
    }

}