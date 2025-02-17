#include<stdio.h>
#include<string.h>
#include<math.h>
int number(char );
void main()

{
   char ch[100];
    printf("Enter the Octal number..\n");
    scanf("%s", ch);
    int n = strlen(ch);
    int k = 0, count2;
    while (ch[k] != '.' && k < n)
    {
        k++;
    }
    count2 = k;
    int q = n - count2 -1;
    int b[q];
    int a[count2];
    if(count2==n)
    {
        int j = 0 ;
        for(int i= count2 - 1 ; i>=0 ; i--)
        {
           a[j] = number(ch[i]);
           j++;
        }
        double sum = 0;
        for(int i = 0 ; i<j ; i++)
        {
            sum = sum + a[i]*pow(8,i);

        }
        printf("Decimal number is %0.0lf\n",sum);
    }
    else
    {
         int j = 0 ;
        for(int i= count2 - 1 ; i>=0 ; i--)
        {
           a[j] = number(ch[i]);
           j++;
        }
        double sum = 0;
        for(int i = 0 ; i<j ; i++)
        {
            sum = sum + a[i]*pow(8,i);

        }
        int o = 0 ;
        int t = 1;
        for(int i = count2 + 1 ; i<n ; i++)
        {
            b[o] = number(ch[i]);
            o++;
        }
        for(int i=0 ; i<o ; i++)
        {
            sum = sum + b[i]*pow(8,-t);
            t++;
        }
        printf("Decimal number is %lf",sum);


    }
}
int number(char ch)
{
    int a = ch;
    for(int i = 48 ; i<=55 ; i++)
    {

        if(a==i)
        {

            int r = a - 48;
            return r;
        }
    }

}
