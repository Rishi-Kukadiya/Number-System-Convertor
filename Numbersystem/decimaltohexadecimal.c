#include <stdio.h>
void hexadecimmal(int);
void main()
{

   unsigned int n1, n2 = 0;
    int nod = 0;
    char c;
    printf("Enter the value of decimal number\n");
    scanf("%d", &n1);
    scanf(".");
    while (1)
    {
        scanf("%c", &c);
        if (c == '\n')
            break;
        n2 = n2 * 10 + c - '0';
        nod++;
    }
    float k = pow(10, nod);
    float z = (float)n2 / k;
    hexadecimmal(n1);
    int j = 7;
    if(n2!=0)
    {
        printf(".");
       unsigned int x;


        while ((z != 1 || z != 2 || z != 3 || z != 4 || z != 5 || z != 6 || z != 7 || z != 0 ||  z != 8 || z != 9 || z != 10 || z !=11 || z != 12 || z != 13 || z != 14 || z!=15) && j!=0)
        {
            z = z * 16;
             x = z;
            if(x>=10 && x<=15)
            {
                int y  = 65 + ( x - 10);
               printf("%c",y);
            }
            else
            {
                printf("%u",x);
            }
            if(z==15|| z==14 || z==13 || z==12 || z==11 || z==10 || z==9 || z==8 || z==7 || z==6 || z==5 || z==4 || z==3 || z==2 || z==1 || z==0)
            {
                break;
            }
            z = z -x ;
            j--;
        }


    }
}
void hexadecimmal(int n1)
{
    char ch[100];
    int r, count = 0, i, count2 = 0;
    int a[100];
    int j = 0;
    int k = 0 ;
    for (i = 0; n1 != 0; i++)
    {
        k = 1 ;
        r = n1 % 16;
        n1 = n1 / 16;
        if (r >= 10 && r <= 15)
        {
            a[i] = 100;

            for (int i = 10; i <= 15; i++)
            {
                if (i == r)
                {
                    ch[j] = 65 + (i - 10);
                    k = 1 ;
                    j++;
                    break;
                }
            }
        }
        else
        {
            a[i] = r;
            k = 1 ;
        }
    }
    if(k==0)
    {
        printf("0");
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
