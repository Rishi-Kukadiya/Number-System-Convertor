#include <string.h>
#include <stdio.h>
#include <math.h>
void binary(int, int);
void main()
{
    char ch[100];
    printf("Enter the Hexadecimal number..\n");
    scanf("%s", ch);
    int n = strlen(ch);
    int k = 0;
    int count = 0;
    while (ch[k] != '.' && k < n)
    {
        k++;
    }
    count = k;
    if (count == n)
    {
        for (int i = 0; i < count; i++)
        {
            int number;
            if (ch[i] >= 48 && ch[i] <= 57)
            {
                number = ch[i] - 48;
            }
            else if (ch[i] >= 65 && ch[i] <= 70)
            {
                number = (ch[i] - 65) + 10;
            }
            binary(number, i);
        }
    }
}
void binary(int n, int i)
{
    int r, sum = 0, a[4], j = 0;
    while (n != 0)
    {
        r = n % 2;
        n = n / 2;
        a[j] = r;
        j++;
    }
    if (j == 1)
    {
        for (int i = j; i <= 3; i++)
        {
            a[i] = 0;
        }
    }
    else if (j == 2)
    {
        for (int i = j; i <= 3; i++)
        {
            a[i] = 0;
        }
    }
    else
    {
        for (int i = j; i <= 3; i++)
        {
            a[i] = 0;
        }
    }
    if (i == 0)
    {
        for (int i =j-1; i>=0; i--)
        {
            printf("%d", a[i]);
        }
    }
    else
    {
        for (int i = 3; i >= 0; i--)
        {
            printf("%d", a[i]);
        }
    }
}
