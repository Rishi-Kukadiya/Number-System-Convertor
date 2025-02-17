#include <stdio.h>
#include <math.h>
#include <string.h>
void main()
{
    char str[100];
    printf("Enter the Hexadecimal number\n");
    scanf("%s", str);
    int n = strlen(str);
    int k = 0;
    int count = 0;
    while (str[k] != '.' && k < n)
    {
        k++;
    }
    count = k;
    printf("count is %d\n",count);
    if (count == n)
    {
            int j = 0;
            double sum = 0.0;
        for (int i = count - 1; i >= 0; i--)
        {
            int number ;
            if(str[i]>=48 && str[i]<=57)
            {
                number = str[i]-48;
            }
            else if (str[i]>=65 && str[i]<=70)
            {
                number = str[i]-65 + 10;
            }
            sum = sum + number*pow(16,j);
            j++;

        }
        printf("Decimal number is %0.0lf\n",sum);
    }
    else
    {
         int j = 0;
            double sum = 0.0;
        for (int i = count - 1; i >= 0; i--)
        {
            int number ;
            if(str[i]>=48 && str[i]<=57)
            {
                number = str[i]-48;
            }
            else if (str[i]>=65 && str[i]<=70)
            {
                number = str[i]-65 + 10;
            }
            sum = sum + number*pow(16,j);
            j++;


        }
        int d= 1;
        for(int i = count + 1 ; i<n ; i++)
        {
            int number;
            if(str[i]>=48 && str[i]<=57)
            {
                number = str[i]-48;
            }
            else if (str[i]>=65 && str[i]<=70)
            {
                number = str[i]-65 + 10;
            }
                sum = sum + number*pow(16,-d);
              d++;
         }
         printf("%lf\n",sum);
    }
}
