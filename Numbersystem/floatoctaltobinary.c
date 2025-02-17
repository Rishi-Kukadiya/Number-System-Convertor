#include<stdio.h>
#include<string.h>
int number(char );
void binary(int );
void main()
{
    char str[100];
    printf("Enter the octal number..\n");
    scanf("%s",str);
    int n = strlen(str);
    int k = 0 ,count = 0;
    while(str[k]!='.' && k<n)
    {
        k++;
    }
    count = k;
    int a[count];
    int q = n - count -1;
    int b[q];
    if(n==k)
    {
        int j = 0 ;
        for(int i= count-1 ; i>=0 ; i--)
        {
            a[j] = number(str[i]);
            j++;
        }

        printf("Binary Number of Given octal number.\n");
        for(int i= j - 1  ; i>=0  ; i--)
        {
             binary(a[i]);
        }
    }
    else
    {
         int j = 0 ;
        for(int i= count-1 ; i>=0 ; i--)
        {
            a[j] = number(str[i]);
            j++;
        }
        printf("Binary number of given octal is ..\n");
        for(int i= j - 1  ; i>=0  ; i--)
        {
             binary(a[i]);
        }
        printf(".");
        int e = 0;
        for(int i = count + 1 ; i<n ; i++)
        {
            b[e] = number(str[i]);
            e++; 
        }
        for(int i= 0 ; i<e ; i++)
        {
            binary(b[i]);
        }
    }
}
int number(char str)
{
    int a = str;
    for(int i = 48 ; i<=55 ; i++)
    {
        if (i==a)
        {
            int r = a- 48;
            return r ;
        }

    }
}
void  binary(int n)
{
     int r;
    int i=0 ;
    int a[100];
    int count = 0;
    while(n!=0)
    {
        r=n%2;
        n=n/2;
        a[i]=r;
        i++;
    }
    count = i;


     for(int i= count-1 ; i>=0 ; i--)
     {
        printf("%d",a[i]);
     }

}
