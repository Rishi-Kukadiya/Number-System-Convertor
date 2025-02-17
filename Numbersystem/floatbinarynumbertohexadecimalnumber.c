#include <stdio.h>
#include <string.h>
#include <math.h>
int madenumber(int a[4]);
int madenumber2(int y[], int);
void hexadecimal(int);
int decimal(int);
void main()
{
    char ch[100];
    printf("Enter the binary number..\n");
    scanf("%s", ch);
    int n = strlen(ch);
    int k = 0, count2;
    while (ch[k] != '.' && k < n)
    {
        k++;
    }
    count2 = k;
    if (k == n)
    {
        int i = k - 1;
        int a[4];
        int b[30];
        int p = 0, count = 0;
        while (i >= 0)
        {

            for (int j = 0; j < 4; j++)
            {
                a[j] = ch[i];
                if (a[j] == 48)
                {
                    a[j] = 0;
                }
                else if (a[j] == 49)
                {
                    a[j] = 1;
                }

                i--;
            }
            int n = madenumber(a);
            b[p] = decimal(n);
            p++;
        }
        count = p - 1;
        for (int i = count; i >= 0; i--)
        {
            int r = b[i];
            hexadecimal(r);
        }
    }
    else
    {
        int i = k - 1;
        int a[4];
        int b[30];
        int p = 0, count = 0;
        while (i >= 0)
        {

            for (int j = 0; j < 4; j++)
            {
                a[j] = ch[i];
                if (a[j] == 48)
                {
                    a[j] = 0;
                }
                else if (a[j] == 49)
                {
                    a[j] = 1;
                }

                i--;
            }
            int n = madenumber(a);
            b[p] = decimal(n);
            p++;
        }
        count = p - 1;
        for (int i = count; i >= 0; i--)
        {
            int r = b[i];
            hexadecimal(r);
        }
        printf(".");
        int y[4];
        int u[50];
        int f = 0, gantari = 0;
        int o = count2 + 1;
        int g = 0;
        while (o < n)
        {
            if (o == n)
            {
                break;
            }

            for (int j = 0; j < 4; j++)
            {
                y[j] = ch[o];
                if (y[j] == 48)
                {
                    y[j] = 0;
                    g++;
                }
                else if (y[j] == 49)
                {
                    y[j] = 1;
                    g++;
                }
                o++;
                if (o == n)
                {
                    break;
                }
            }
            int m = madenumber2(y, g);
            u[f] = decimal(m);
            f++;
        }
        gantari = f - 1;
        for (int i = 0; i <= gantari; i++)
        {
            int e = u[i];
            hexadecimal(e);
        }
    }
}
int madenumber2(int y[4], int g)
{

    int sum = 0, r = 3;
    for (int i = 0; i < 4; i++)
    {
        if (g >= 1)
        {
            sum = sum + y[i] * pow(10, r);
            r--;
            g--;
        }
    }

    return sum;
}

int madenumber(int a[4])

{

    int sum = 0;
    int j = 0;
    for (int i = 0; i < 4; i++)
    {

        sum = sum + a[i] * pow(10, j);
        j++;
    }
    return sum;
}
int decimal(int n)
{
    int i = 0;
    int r;
    int sum = 0;
    while (n != 0)
    {

        r = n % 10;
        n = n / 10;
        sum = sum + r * pow(2, i);
        i++;
    }
    return sum;
}
void hexadecimal(int r)
{
    char ch[100];
    int r1, count = 0, i, count2 = 0;
    int a[100];
    int j = 0;
    for (i = 0; r != 0; i++)
    {
        r1 = r % 16;
        r = r / 16;
        if (r1>= 10 && r1 <= 15)
        {
            a[i] = 100;

            for (int i = 10; i <= 15; i++)
            {
                if (i == r1)
                {
                    ch[j] = 65 + (i - 10);
                    j++;
                    break;
                }
            }
        }
        else
        {
            a[i] = r1;
        }
    }
    count2 = j - 1;
    count = i - 1;
    for (int i = count; i >= 0; i--)
    {
        if (a[i] == 100)
        {
            printf("%c", ch[count2]);
            count2--;
        }
        else
        {
            printf("%d", a[i]);
        }
    }
}
