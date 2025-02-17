#include <stdio.h>
#include <string.h>
#include <math.h>
void main()
{
    char ch[100];
    printf("Enter the Hexadecimal number..\n");
    scanf("%s", ch);
    int n = strlen(ch);
    printf("n==%d\n",n);
    int count = 0;
    int i = 0;
    for (i = 0; i < n; i++)
    {
        if (ch[i] == 46)
        {
            break;
        }
        count++;
    }
    printf("count == %d\n",count);
    if (n == count )
    {
        double sum = 0.0;
        int j = 0;
        for (int i = count-1 ; i >= 0; i--)
        {
            if (ch[i] >= 65 && ch[i] <= 70)
            {
                int x = ((int)(ch[i]) - 55);
               
                
                sum = sum + x * pow(16, j);
                

                j++;
            }
            else if (ch[i] >= 48 && ch[i] <= 57)
            {
                int y = ((int)(ch[i]) - 48);
               
                sum = sum + y * pow(16, j);
               
                j++;
            }
        }
        printf("%0.0lf", sum);
    }
    else
    {
        double sum = 0;
        int j = 0;
        for (int i = count - 1; i >= 0; i--)
        {
            if (ch[i] >= 65 && ch[i] <= 70)
            {
                int x = ((int)(ch[i]) - 55);

                sum = sum + x * pow(16, j);

                j++;
            }
            else if (ch[i] >= 48 && ch[i] <= 57)
            {
                int y = ((int)(ch[i]) - 48);

                sum = sum + y * pow(16, j);

                j++;
            }
        }
        printf("%0.0lf", sum);
        printf(".");
        int d = 1;
        float b[15];
        int k = 0;
        for (int i = count + 1; i < n; i++)
        {

            if (ch[i] >= 65 && ch[i] <= 70)
            {

                int x = ((int)(ch[i]) - 55);

                b[k] = x * pow(16, -d);
                k++;
                d++;
            }
            else if (ch[i] >= 48 && ch[i] <= 57)
            {

                int y = ((int)(ch[i]) - 48);

                b[k] = y * pow(16, -d);
                k++;
                d++;
            }
        }
        double sum2 = 0;
        for (int i = 0; i < k; i++)
        {
            sum2 = sum2 + b[i];
        }
        sum2 = sum2 * pow(10, 6);
        printf("%0.0lf", sum2);
    }
}
