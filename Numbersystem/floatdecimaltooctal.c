#include <stdio.h>
void octal(int);
void main()
{
    int n1, n2 = 0;
    char c;
    printf("Enter the Float decima number..\n");
    scanf("%d", &n1);
    scanf(".");
    int nod = 0;
    while (1)
    {
        scanf("%c", &c);
        if (c == '\n')
        {
            break;
        }
        n2 = n2 * 10 + c - '0';
        nod++;
    }
    int k = pow(10, nod);
    float z = (float)n2 / k;
    octal(n1);
    if (n2 != 0)
    {
        printf(".");
        int x, i = 0, count2 = 0;
        int b[100];
        while (z != 1 || z != 2 || z != 3 || z != 4 || z != 5 || z != 6 || z != 7 || z != 0)
        {
            z = z * 8;
            x = z;
            b[i] = x;
            i++;
            if (z>=0 && z<=7)
            {

                break;
            }
            z = z - x;
        }
        count2 = i - 1;
        for (int i = 0; i <= count2; i++)
        {
            printf("%d", b[i]);
        }
    }
}
void octal(int n1)
{
    int r;
    int i = 0;
    int a[100];
    int count = 0;
    while (n1 != 0)
    {
        r = n1 % 8;
        n1 = n1 / 8;
        a[i] = r;
        i++;
    }
    count = i;

    printf("The octal number of given decimal number..\n");
    for (int i = count - 1; i >= 0; i--)
    {
        printf("%d", a[i]);
    }
}
