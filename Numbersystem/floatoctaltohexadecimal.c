#include <stdio.h>
#include <string.h>
#include <math.h>
void hexadecimal(int a[], int);
void decihex(int);
void main()
{
    char str[100];
    printf("Enter the Octal number\n");
    scanf("%s", str);
    int n = strlen(str);
    int k = 0, count = 0;
    while (str[k] != '.' && k < n)
    {
        k++;
    }
    count = k;
    int q = n - count;
    if (count == n)
    {
        int s = n * 3;
        int u = s - 1;

        int a[s];
        for (int i = n - 1; i >= 0; i--)
        {
            int number = ((int)(str[i]) - 48);
            if (number == 0)
            {
                a[u] = 0;
                a[u - 1] = 0;
                a[u - 2] = 0;
                u = u - 3;
                
            }
            else if (number == 1)
            {
                a[u] = 1;
                a[u - 1] = 0;
                a[u - 2] = 0;
                u = u - 3;
              
            }
            else if (number == 2)
            {
                a[u] = 0;
                a[u - 1] = 1;
                a[u - 2] = 0;
                u = u - 3;
               
            }
            else if (number == 3)
            {
                a[u] = 1;
                a[u - 1] = 1;
                a[u - 2] = 0;
                u = u - 3;
                
            }
            else if (number == 4)
            {
                a[u] = 0;
                a[u - 1] = 0;
                a[u - 2] = 1;
                u = u - 3;
                
            }
            else if (number == 5)
            {
                a[u] = 1;
                a[u - 1] = 0;
                a[u - 2] = 1;
                u = u - 3;
              
            }
            else if (number == 6)
            {
                a[u] = 0;
                a[u - 1] = 1;
                a[u - 2] = 1;
                u = u - 3;
                
            }
            else if (number == 7)
            {
                a[u] = 1;
                a[u - 1] = 1;
                a[u - 2] = 1;
                u = u - 3;
                
            }
        }
       

        int size;
        if (s % 4 == 0)
        {
            size = s / 4;
        }
        else
        {
            size = s / 4 + 1;
        }
       
        int c[size];
        int y = size - 1;
        int e = s - 1;
       
        while (e >= 0)
        {

            int j = 3;
            int sum = 0, o = 0;
            while (j >= 0)
            {
                sum = sum + a[e] * pow(10, o);
                o++;
                j--;
                e--;
                if (e == -1)
                {
                    break;
                }
            }
            
           
            c[y] = sum;
            y--;
        }
       

        hexadecimal(c, size);
    }
    else
    {
        int s = count * 3;
        int u = s - 1;

        int a[s];
        for (int i = count - 1; i >= 0; i--)
        {
            int number = ((int)(str[i]) - 48);
            if (number == 0)
            {
                a[u] = 0;
                a[u - 1] = 0;
                a[u - 2] = 0;
                u = u - 3;

            }
            else if (number == 1)
            {
                a[u] = 1;
                a[u - 1] = 0;
                a[u - 2] = 0;
                u = u - 3;
                
            }
            else if (number == 2)
            {
                a[u] = 0;
                a[u - 1] = 1;
                a[u - 2] = 0;
                u = u - 3;

            }
            else if (number == 3)
            {
                a[u] = 1;
                a[u - 1] = 1;
                a[u - 2] = 0;
                u = u - 3;
                
            }
            else if (number == 4)
            {
                a[u] = 0;
                a[u - 1] = 0;
                a[u - 2] = 1;
                u = u - 3;

            }
            else if (number == 5)
            {
                a[u] = 1;
                a[u - 1] = 0;
                a[u - 2] = 1;
                u = u - 3;
                
            }
            else if (number == 6)
            {
                a[u] = 0;
                a[u - 1] = 1;
                a[u - 2] = 1;
                u = u - 3;
                
            }
            else if (number == 7)
            {
                a[u] = 1;
                a[u - 1] = 1;
                a[u - 2] = 1;
                u = u - 3;
            }
        }
        

        int size;
        if (s % 4 == 0)
        {
            size = s / 4;
        }
        else
        {
            size = s / 4 + 1;
        }
    
        int c[size];
        int y = size - 1;
        int e = s - 1;
        while (e >= 0)
        {

            int j = 3;
            int sum = 0, o = 0;
            while (j >= 0)
            {
                sum = sum + a[e] * pow(10, o);
                o++;
                j--;
                e--;
                if (e == -1)
                {
                    break;
                }
            }
        

            c[y] = sum;
            y--;
        }
        
        printf("\n");
        hexadecimal(c, size);
        printf(".");
        int f = (n - count - 1) * 3;
        int z = f;
        int b = f / 3;
        for (int i = 1; i < 30; i++)
        {
            if(b%4==0)
            {
                break;
            }
            if (b == i)
            {
                f = f + b;
                break;
            }
        }
        
        int op[f];
        int m = 0;
        for (int i = count + 1; i < n; i++)
        {
            int number = (int)(str[i]) - 48;
            if (number == 0)
            {
                op[m] = 0;
                op[m + 1] = 0;
                op[m + 2] = 0;
                m = m + 3;
               
            }
            else if (number == 1)
            {
                op[m] = 0;
                op[m + 1] = 0;
                op[m + 2] = 1;
                m = m + 3;
               
            }
            else if (number == 2)
            {
                op[m] = 0;
                op[m + 1] = 1;
                op[m + 2] = 0;
                m = m + 3;
              
            }
            else if (number == 3)
            {
                op[m] = 0;
                op[m + 1] = 1;
                op[m + 2] = 1;
                m = m + 3;
              
            }
            else if (number == 4)
            {
                op[m] = 1;
                op[m + 1] = 0;
                op[m + 2] = 0;
                m = m + 3;
               
            }
            else if (number == 5)
            {
                op[m] = 1;
                op[m + 1] = 0;
                op[m + 2] = 1;
                m = m + 3;
                
            }
            else if (number == 6)
            {
                op[m] = 1;
                op[m + 1] = 1;
                op[m + 2] = 0;
                m = m + 3;
              
            }
            else if (number == 7)
            {
                op[m] = 1;
                op[m + 1] = 1;
                op[m + 2] = 1;
                m = m + 3;
                
            }
        }
            
           for(int i=m ; i<f ; i++)
           {
             op[i] = 0;
           }
            
           
            int size2 = f / 4;
            int hg[size2];
            int tg = 0,frac=0;
            while (tg < f)
            {
                int j = 3;
                int sum = 0, o = 3;
                while (j >= 0)
                {
                    sum = sum + op[tg] * pow(10, o);
                    o--;
                    j--;
                    tg++;
                    if (e == f)
                    {
                        break;
                    }
                    
                }
                hg[frac]=sum;
                frac++;
            }
           
            hexadecimal(hg,size2); 
        }
    }


void hexadecimal(int a[], int n)
{
    if (a[0] == 0)
    {
        for (int i = 1; i < n; i++)
        {
            decihex(a[i]);
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            decihex(a[i]);
        }
    }
}
void decihex(int n)
{
    int r, sum = 0, i = 0;
    while (n != 0)
    {
        r = n % 10;
        n = n / 10;
        sum = sum + r * pow(2, i);
        i++;
    }
    if (sum >= 0 && sum <= 9)
    {
        printf("%d", sum);
    }
    else
    {
        printf("%c", sum + 55);
    }
}