#include <stdio.h>
#include <string.h>
#include <math.h>
int array[200];
int p = 0;
int far[200];
int u = 0;
void binary2(int);
void binary(int);
void main()
{
    char ch[100];
    printf("Enter the Hexadecimal number\n");
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
        for (int i = 0; i < n; i++)
        {
        
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
                binary(number);
        
            }
        }
        
        int final[15];
        int h=14;
        for(int i=p-1 ; i>=0 ; )
        {
            int y = 3; int sum = 0;
            int o = 0;
            while(y>=1)
            {
                sum = sum + array[i]*pow(10,o);
                i--;
                o++;
                y--;
            }
            final[h]=sum ;
            h--;

        }
        printf("Octal number is :\n");
        for(int i = h+1 ; i<15 ; i++)
        {
            int r , sum = 0 , p =0 , rishi = 0 ;
            while(final[i]!=0)
            {
                r = final[i]%10;
                final[i] = final[i]/10;
                rishi = 1;
                sum = sum + r*pow(2,p);
                p++;
            }
            if(rishi==1 || i!=h+1)
            {
                 printf("%d",sum);
            }
           
        }

    }
    else
    {
     for (int i = 0; i < count ; i++)
        {
        
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
                binary(number);
        
            }
        }
        int final[15];
        int h=14;
        for(int i=p-1 ; i>=0 ; )
        {
            int y = 3; int sum = 0;
            int o = 0;
            while(y>=1)
            {
                sum = sum + array[i]*pow(10,o);
                i--;
                o++;
                y--;
            }
            final[h]=sum ;
            h--;

        }
        printf("Octal number is :\n");
        for(int i = h+1 ; i<15 ; i++)
        {
            int r , sum = 0 , p =0 , rishi = 0 ;
            while(final[i]!=0)
            {
                r = final[i]%10;
                final[i] = final[i]/10;
                rishi = 1;
                sum = sum + r*pow(2,p);
                p++;
            }
            if(rishi==1 || i!=h+1)
            {
                 printf("%d",sum);
            }
           
        }
        printf(".");
        for(int i = count+1 ; i<n ; i++)
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
                binary2(number);
        }
       int kalpo[15];
       int t = 0 ;
       for(int i = 0 ; i<u ; )
       {
            int e = 3,sum = 0,m=2 ;
            while(e>=1)
            {
                sum = sum + far[i]*pow(10,m);
                m--;
                e--;
                i++;

            }
            kalpo[t]=sum;
            t++;

       }
       for(int i=0 ; i<t ; i++)
       {
             int r , sum = 0 , p =0 ;
              while(kalpo[i]!=0)
            {
                r = kalpo[i]%10;
                kalpo[i] = kalpo[i]/10;
                sum = sum + r*pow(2,p);
                p++;
            }
            printf("%d",sum);
       }
      

    }
}
void binary(int n)
{
    int r, sum = 0, a[4], j = 0;
    while (n != 0)
    {
        r = n % 2;
        n = n / 2;
        a[j] = r;
        j++;
    }
    
    
    {
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
        for (int i = 3; i >= 0; i--)
        {
            array[p] = a[i];
            p++;
        }
    }
}
void binary2(int n)
{
         int r, sum = 0, a[4], j = 0;
    while (n != 0)
    {
        r = n % 2;
        n = n / 2;
        a[j] = r;
        j++;
    }
    
    
    {
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
        for (int i = 3; i >= 0; i--)
        {
            far[u] = a[i];
            u++;
        }
    }
}