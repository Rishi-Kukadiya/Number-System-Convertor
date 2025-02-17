#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void decimaltohexadecimal();
void binarytohexadecimal();
void binarytodecimal();
void binarytooctal();
void decimaltobinary();
void decimaltooctal();
void hexadecimaltodecimal();
void octaltodecimal();
void octaltobinary();
void octaltohexadecimal();
void hexadecimaltobinary();
void hexadecimaltooctal();
int number(char ch);
void octal(int);
void hexadecimmal(int);
int madenumber(int a[3]);
int madenumber2(int c[3], int);
int decimal(int);
int decimal2(int n);
int madenumber3(int a[4], int);
int madenumber4(int c[4], int);
void hexadecimal(int a[], int);
void decihex(int);
void binary(int, int);
void binary2(int);
void binary3(int);
void clearscreen()
{

#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}
void main()
{
    printf("\n");
    printf("\t\t\t\t\tWelcome To Numbersystem Convertor\n\t\t\t");
    for (int i = 1; i < 70; i++)
    {
        printf("=");
    }
    printf("\n\n\t\t\t\t\tAre You New User ?\n");
    printf("\n\t\t\t\t\tYes Or No : ");
    char de[3];
    gets(de);
    if (strcmpi("yes", de) == 0)
    {
    end:
        clearscreen();
        printf("\n");
        printf("\t\t\t\t\tWelcome To Numbersystem Convertor\n\t\t\t");
        for (int i = 1; i < 70; i++)
        {
            printf("=");
        }
        printf("\n\t\t\t\t\tTerms and Condition\t\t\t\t\t\t\t");
        printf("\n\n\t\t\t\t\t1> Please Enter The Valid Number\n\t\t\t\t\tAccording To Source Base System.\n\t\t\t\t\tExample :\n\t\t\t\t\tYour Base System is octal then it\n\t\t\t\t\tmust to Enter Number between (0-7). ");
        printf("\n\n\t\t\t\t\t2> When you want to convert any\n\t\t\t\t\tdecimal Number into any other Number\n\t\t\t\t\tPlease enter the number in range of integer\n\t\t\t\t\tData type.");
        printf("\n\n\t\t\t\t\t3> Enter Agree to Countinue\n\t\t\t\t\t ");
        char beg[5];
        scanf(" %s", beg);
        if (strcmpi("Agree", beg) == 0)
            goto start;
        else
            goto end;
    }
    else
    {
    start:
    other:
        clearscreen();
        printf("\n");
        printf("\n\t\t\t\t\t\t  Number System\n\t\t\t");

        for (int i = 1; i < 70; i++)
        {
            printf("=");
        }
        printf("\n\t\t\t\tIn Which System Do You Want To Enter The Number : ");
        char to[12];
        scanf("%s", &to);
        printf("\n\t\t\t");
        printf("\tIn Which System Do You Get Your Answer Number : ");
        char from[12];
        scanf("%s", from);
        if (strcmpi("Decimal", to) == 0 && strcmpi("Binary", from) == 0)
        {
            decimaltobinary();
            clearscreen();
            printf("\n");
            printf("\n\t\t\t\t\t\t  Number System\n\t\t\t");

            for (int i = 1; i < 70; i++)
            {
                printf("=");
            }

            printf("\n\t\t\t\tWould You like to Convert Any other Number");
            char dex[3];
            printf("\n\t\t\t\t");
            scanf("%s", dex);
            if (strcmpi("Yes", dex) == 0)
            {
                goto other;
            }
        }
        else if (strcmpi("Decimal", to) == 0 && strcmpi("Octal", from) == 0)
        {
            decimaltooctal();
            clearscreen();
            printf("\n");
            printf("\n\t\t\t\t\t\t  Number System\n\t\t\t");

            for (int i = 1; i < 70; i++)
            {
                printf("=");
            }

            printf("\n\t\t\t\tWould You like to Convert Any other Number");
            char dex[3];
            printf("\n\t\t\t\t");
            scanf("%s", dex);
            if (strcmpi("Yes", dex) == 0)
            {
                goto other;
            }
        }
        else if (strcmpi("Decimal", to) == 0 && strcmpi("Hexadecimal", from) == 0)
        {
            decimaltohexadecimal();
            clearscreen();
            printf("\n");
            printf("\n\t\t\t\t\t\t  Number System\n\t\t\t");

            for (int i = 1; i < 70; i++)
            {
                printf("=");
            }

            printf("\n\t\t\t\tWould You like to Convert Any other Number");
            char dex[3];
            printf("\n\t\t\t\t");
            scanf("%s", dex);
            if (strcmpi("Yes", dex) == 0)
            {
                goto other;
            }
        }
        else if (strcmpi("Binary", to) == 0 && strcmpi("Decimal", from) == 0)
        {
            binarytodecimal();
            clearscreen();
            printf("\n");
            printf("\n\t\t\t\t\t\t  Number System\n\t\t\t");

            for (int i = 1; i < 70; i++)
            {
                printf("=");
            }

            printf("\n\t\t\t\tWould You like to Convert Any other Number");
            char dex[3];
            printf("\n\t\t\t\t");
            scanf("%s", dex);
            if (strcmpi("Yes", dex) == 0)
            {
                goto other;
            }
        }
        else if (strcmpi("Binary", to) == 0 && strcmpi("Octal", from) == 0)
        {
            binarytooctal();
            clearscreen();
            printf("\n");
            printf("\n\t\t\t\t\t\t  Number System\n\t\t\t");
            for (int i = 1; i < 70; i++)
            {
                printf("=");
            }
            printf("\n\t\t\t\tWould You like to Convert Any other Number");
            char dex[3];
            printf("\n\t\t\t\t");
            scanf("%s", dex);
            if (strcmpi("Yes", dex) == 0)
            {
                goto other;
            }
        }
        else if (strcmpi("Binary", to) == 0 && strcmpi("Hexadecimal", from) == 0)
        {
            binarytohexadecimal();
            clearscreen();
            printf("\n");
            printf("\n\t\t\t\t\t\t  Number System\n\t\t\t");
            for (int i = 1; i < 70; i++)
            {
                printf("=");
            }
            printf("\n\t\t\t\tWould You like to Convert Any other Number");
            char dex[3];
            printf("\n\t\t\t\t");
            scanf("%s", dex);
            if (strcmpi("Yes", dex) == 0)
            {
                goto other;
            }
        }
        else if (strcmpi("Octal", to) == 0 && strcmpi("Decimal", from) == 0)
        {
            octaltodecimal();
            clearscreen();
            printf("\n");
            printf("\n\t\t\t\t\t\t  Number System\n\t\t\t");

            for (int i = 1; i < 70; i++)
            {
                printf("=");
            }

            printf("\n\t\t\t\tWould You like to Convert Any other Number");
            char dex[3];
            printf("\n\t\t\t\t");
            scanf("%s", dex);
            if (strcmpi("Yes", dex) == 0)
            {
                goto other;
            }
        }
        else if (strcmpi("Octal", to) == 0 && strcmpi("Binary", from) == 0)
        {
            octaltobinary();
            clearscreen();
            printf("\n");
            printf("\n\t\t\t\t\t\t  Number System\n\t\t\t");

            for (int i = 1; i < 70; i++)
            {
                printf("=");
            }

            printf("\n\t\t\t\tWould You like to Convert Any other Number");
            char dex[3];
            printf("\n\t\t\t\t");
            scanf("%s", dex);
            if (strcmpi("Yes", dex) == 0)
            {
                goto other;
            }
        }
        else if (strcmpi("Octal", to) == 0 && strcmpi("Hexadecimal", from) == 0)
        {
            octaltohexadecimal();
            clearscreen();
            printf("\n");
            printf("\n\t\t\t\t\t\t  Number System\n\t\t\t");

            for (int i = 1; i < 70; i++)
            {
                printf("=");
            }

            printf("\n\t\t\t\tWould You like to Convert Any other Number");
            char dex[3];
            printf("\n\t\t\t\t");
            scanf("%s", dex);
            if (strcmpi("Yes", dex) == 0)
            {
                goto other;
            }
        }
        else if (strcmpi("Hexadecimal", to) == 0 && strcmpi("Decimal", from) == 0)
        {
            hexadecimaltodecimal();
            clearscreen();
            printf("\n");
            printf("\n\t\t\t\t\t\t  Number System\n\t\t\t");

            for (int i = 1; i < 70; i++)
            {
                printf("=");
            }

            printf("\n\t\t\t\tWould You like to Convert Any other Number");
            char dex[3];
            printf("\n\t\t\t\t");
            scanf("%s", dex);
            if (strcmpi("Yes", dex) == 0)
            {
                goto other;
            }
        }
        else if (strcmpi("Hexadecimal", to) == 0 && strcmpi("Binary", from) == 0)
        {
            hexadecimaltobinary();
            clearscreen();
            printf("\n");
            printf("\n\t\t\t\t\t\t  Number System\n\t\t\t");

            for (int i = 1; i < 70; i++)
            {
                printf("=");
            }

            printf("\n\t\t\t\tWould You like to Convert Any other Number");
            char dex[3];
            printf("\n\t\t\t\t");
            scanf("%s", dex);
            if (strcmpi("Yes", dex) == 0)
            {
                goto other;
            }
        }
        else if (strcmpi("Hexadecimal", to) == 0 && strcmpi("Octal", from) == 0)
        {
            hexadecimaltooctal();
            clearscreen();
            printf("\n");
            printf("\n\t\t\t\t\t\t  Number System\n\t\t\t");

            for (int i = 1; i < 70; i++)
            {
                printf("=");
            }

            printf("\n\t\t\t\tWould You like to Convert Any other Number");
            char dex[3];
            printf("\n\t\t\t\t");
            scanf("%s", dex);
            if (strcmpi("Yes", dex) == 0)
            {
                goto other;
            }
        }
        else if (strcmpi(from, to) == 0)
        {
            clearscreen();
            printf("\n");
            printf("\n\t\t\t\t\t\t  Number System\n\t\t\t");
            for (int i = 1; i < 70; i++)
            {
                printf("=");
            }
            printf("\n\t\t\t\tERROR : ");
            printf("\n\n\t\t\t\tSorry , You Enter The Same System in Both ");
            printf("\n\n\t\t\t\tPlease Enter Diffrent System in Both ");
            printf("\n\n\t\t\t\tWould You like to Convert Any other Number");
            char dex[3];
            printf("\n\t\t\t\t");
            scanf("%s", dex);
            if (strcmpi("Yes", dex) == 0)
            {
                goto other;
            }
            else
            {
                clearscreen();
                printf("\n");
                printf("\n\t\t\t\t\t\t  Number System\n\t\t\t");
                for (int i = 1; i < 70; i++)
                {
                    printf("=");
                }
                printf("\n\n\t\t\t\t\t\t Thank You !\n\n\n\n");
                exit(0);
            }
        }
        else
        {
            clearscreen();
            printf("\n");
            printf("\n\t\t\t\t\t\t  Number System\n\t\t\t");

            for (int i = 1; i < 70; i++)
            {
                printf("=");
            }
            printf("\n\t\t\tYou Enter the Wrong Spelling of Number system");
            printf("\n\n\t\t\tPlease Enter Agree to Refer Spelling : ");
            char beg[5];
            scanf(" %s", beg);
            if (strcmpi("Agree", beg) == 0)
            {
                clearscreen();
                printf("\n");
                printf("\n\t\t\t\t\t\t  Number System\n\t\t\t");
                for (int i = 1; i < 70; i++)
                {
                    printf("=");
                }
                printf("\n\t\t\t\t\t\t  1> Binary\n\t\t\t");
                printf("\n\t\t\t\t\t\t  2> Decimal\n\t\t\t");
                printf("\n\t\t\t\t\t\t  3> Octal\n\t\t\t");
                printf("\n\t\t\t\t\t\t  4> Hexadecimal\n\t\t\t");
                printf("\n\t\t\t\t\t\t  Hope that You understand properly\n\t\t\t");
                printf("\n\t\t\t\t\t\t  Please Enter Agree to Enter the Number : ");
                char beg[5];
                scanf(" %s", beg);
                if (strcmpi("Agree", beg) == 0)
                {
                    goto other;
                }
            }
            else
            {
                clearscreen();
                printf("\n");
                printf("\n\t\t\t\t\t\t  Number System\n\t\t\t");
                for (int i = 1; i < 70; i++)
                {
                    printf("=");
                }
                printf("\n\t\t\tHope that You understand properly\n\t\t\t");
                printf("\n\t\t\tPlease Enter Agree to Enter the Number : ");
                char beg[5];
                scanf(" %s", beg);
                if (strcmpi("Agree", beg) == 0)
                {
                    goto other;
                }
            }
        }
    }
    clearscreen();
    printf("\n");
    printf("\n\t\t\t\t\t\t  Number System\n\t\t\t");
    for (int i = 1; i < 70; i++)
    {
        printf("=");
    }
    printf("\n\t\t\t\t  Any Improvement Do You Want");
    printf("\n\n\t\t\t\t  If You Want , Enter Yes to Give Feedback : ");
    char beg[5];
    scanf(" %s", beg);
    if (strcmpi("Yes", beg) == 0)
    {
        clearscreen();
        printf("\n");
        printf("\n\t\t\t\t\t\t  Number System\n\t\t");
        for (int i = 1; i < 90; i++)
        {
            printf("=");
        }
        char ch[10000];
        printf("\n\t\t\tWrite Here Your Feedback : ");
        fflush(stdin);
        gets(ch);
        printf("\n\n\t\t\tDo You Want to Give Rating : ");
        char beg[5];
        scanf(" %s", beg);
        if (strcmpi("Yes", beg) == 0)
        {
            clearscreen();
            printf("\n");
            printf("\n\t\t\t\t\t\t  Number System\n\t\t\t");
            for (int i = 1; i < 70; i++)
            {
                printf("=");
            }
            printf("\n\n\t\t\tEnter How Many Rate Do You Give to This");
            printf("\n\n\n\t\t\tEnter The Number Out Of 10 : ");
            int n;
            scanf("%d", &n);
            printf("\n\t\t\t\t");
            for (int i = 1; i <= n; i++)
            {
                printf("* ");
            }
            printf("\n\n\t\t\tWe Will Do Our Work On Your Feedback !");
            printf("\n\n\t\t\tThank You !\n\n\n");
        }
        else
        {
            clearscreen();
            printf("\n");
            printf("\n\t\t\t\t\t\t  Number System\n\t\t\t");
            for (int i = 1; i < 70; i++)
            {
                printf("=");
            }
            printf("\n\t\t\t\t We Will Do Our Work On Your Feedback !");
            printf("\n\n\t\t\t\t Thank You !\n\n\n");
        }
    }
    else
    {
        clearscreen();
        printf("\n");
        printf("\n\t\t\t\t\t\t  Number System\n\t\t\t");
        for (int i = 1; i < 70; i++)
        {
            printf("=");
        }
        printf("\n\n\t\t\t\tDo You want to Give Rating : ");
        char beg[5];
        scanf(" %s", beg);
        if (strcmpi("Yes", beg) == 0)
        {
            clearscreen();
            printf("\n");
            printf("\n\t\t\t\t\t\t  Number System\n\t\t\t");
            for (int i = 1; i < 70; i++)
            {
                printf("=");
            }
            printf("\n\n\t\t\tEnter How Many Rate Do You Give to This");
            printf("\n\n\n\t\t\tEnter The Number Out Of 10 : ");
            int n;
            scanf("%d", &n);
            printf("\n\t\t\t\t");
            for (int i = 1; i <= n; i++)
            {
                printf("* ");
            }
            printf("\n\n\t\t\tWe Will Do Our Work On Your Feedback !");
            printf("\n\n\t\t\tThank You !\n\n\n");
        }
        else
        {
            clearscreen();
            printf("\n");
            printf("\n\t\t\t\t\t\t  Number System\n\t\t\t");
            for (int i = 1; i < 70; i++)
            {
                printf("=");
            }
            printf("\n\n\t\t\t\t\t\t Thank You !\n\n\n\n");
        }
    }
}
void decimaltobinary()
{
    clearscreen();
    int a[50];
    printf("\n");
    printf("\n\t\t\t\t\t\t  Number System\n\t\t\t");
    printf("\n\t\t\t\t       Welcome to  Decimal to Binary Convertor\n\t\t\t");

    for (int i = 1; i < 70; i++)
    {
        printf("=");
    }
    char str[100];
    printf("\n\n\t\t\t\tEnter the Decimal Number : ");
    scanf("%s", str);
    int n = strlen(str);
    int k = 0;
    int count = 0;
    while (str[k] != '.' && k < n)
    {
        k++;
    }
    count = k;
    if (count == n)
    {
        unsigned int number = 0;
        unsigned int sum;
        int j = 0;
        for (int i = count - 1; i >= 0; i--)
        {
            str[i] = str[i] - 48;
            sum = sum + str[i] * pow(10, j);
            j++;
        }
        number = sum;
        int r;
        int u = 49;
        while (number != 0)
        {
            r = number % 2;
            number = number / 2;
            a[u] = r;
            u--;
        }
        printf("\n\t\t\t\tBinary Number is : ");
        for (int i = u + 1; i < 50; i++)
        {
            printf("%d", a[i]);
        }
    }
    else
    {
        unsigned int number = 0;
        unsigned int sum;
        int j = 0;
        for (int i = count - 1; i >= 0; i--)
        {
            str[i] = str[i] - 48;
            sum = sum + str[i] * pow(10, j);
            j++;
        }
        number = sum;
        int r, a[50], u = 0;
        while (number != 0)
        {
            r = number % 2;
            number = number / 2;
            a[u] = r;
            u++;
        }
        printf("\n\t\t\t\tBinary Number is : ");
        for (int i = u - 1; i >= 0; i--)
        {
            printf("%d", a[i]);
        }
        printf(".");
        unsigned int sum2 = 0;
        int p = 0;
        unsigned int number2;
        int count2 = 0;
        for (int i = n - 1; i >= count + 1; i--)
        {
            str[i] = str[i] - 48;
            sum2 = sum2 + str[i] * pow(10, p);
            p++;
            count2++;
        }
        number2 = sum2;
        float number3 = number2 / (pow(10, count2));
        int b[50];
        int tu = 0, yu = 7;
        while (number3 != 1 && yu != 1)
        {
            number3 = number3 * 2;
            int x = number3;
            b[tu] = x;
            tu++;
            yu--;
            number3 = number3 - x;
        }
        for (int i = 0; i < tu; i++)
        {
            printf("%d", b[i]);
        }
    }
    printf("\n\n\t\t\t\tWould You like to Countinue this Convertion");
    char decision[3];
    printf("\n\t\t\t\t");
    scanf("%s", decision);
    if (strcmpi("yes", decision) == 0)
    {
        decimaltobinary();
    }
}
void decimaltooctal()
{

    clearscreen();
    printf("\n");
    printf("\n\t\t\t\t\t\t  Number System\n\t\t\t");
    printf("\n\t\t\t\t       Welcome to  Decimal to Octal Convertor\n\t\t\t");
    for (int i = 1; i < 70; i++)
    {
        printf("=");
    }
    int n1, n2 = 0;
    char c;
    printf("\n\n\t\t\t\tEnter the Decimal Number : ");
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
            if (z == 1 || z == 2 || z == 3 || z == 4 || z == 5 || z == 6 || z == 7 || z == 0)
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
    printf("\n\n\t\t\t\tWould You like to Countinue this Convertion");
    char decision[3];
    printf("\n\t\t\t\t");
    scanf("%s", decision);
    if (strcmpi("yes", decision) == 0)
    {
        decimaltooctal();
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
    printf("\n\t\t\t\tOctal Number is : ");
    for (int i = count - 1; i >= 0; i--)
    {
        printf("%d", a[i]);
    }
}
void decimaltohexadecimal()
{
    clearscreen();
    printf("\n");
    printf("\n\t\t\t\t\t\t  Number System\n\t\t\t");
    printf("\n\t\t\t\t       Welcome to  Decimal to Hexadecimal Convertor\n\t\t\t");
    for (int i = 1; i < 70; i++)
    {
        printf("=");
    }
    int n1, n2 = 0;
    int nod = 0;
    char c;
    printf("\n\n\t\t\t\tEnter the Decimal Number : ");
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
    if (n2 != 0)
    {
        printf(".");
        unsigned int x;

        while ((z != 1 || z != 2 || z != 3 || z != 4 || z != 5 || z != 6 || z != 7 || z != 0 || z != 8 || z != 9 || z != 10 || z != 11 || z != 12 || z != 13 || z != 14 || z != 15) && j != 0)
        {
            z = z * 16;
            x = z;
            if (x >= 10 && x <= 15)
            {
                int y = 65 + (x - 10);
                printf("%c", y);
            }
            else
            {
                printf("%u", x);
            }
            if (z == 15 || z == 14 || z == 13 || z == 12 || z == 11 || z == 10 || z == 9 || z == 8 || z == 7 || z == 6 || z == 5 || z == 4 || z == 3 || z == 2 || z == 1 || z == 0)
            {
                break;
            }
            z = z - x;
            j--;
        }
    }
    printf("\n\n\t\t\t\tWould You like to Countinue this Convertion");
    char decision[3];
    printf("\n\t\t\t\t");
    scanf("%s", decision);
    if (strcmpi("yes", decision) == 0)
    {
        decimaltohexadecimal();
    }
}
void hexadecimmal(int n1)
{
    char ch[100];
    int r, count = 0, i, count2 = 0;
    int a[100];
    int j = 0;
    int k = 0;
    for (i = 0; n1 != 0; i++)
    {
        k = 1;
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
                    k = 1;
                    j++;
                    break;
                }
            }
        }
        else
        {
            a[i] = r;
            k = 1;
        }
    }
    printf("\n\t\t\t\tHexadecimal Number is : ");
    if (k == 0)
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
void binarytodecimal()
{
    clearscreen();
    printf("\n");
    printf("\n\t\t\t\t\t\t  Number System\n\t\t\t");
    printf("\n\t\t\t\t       Welcome to Binary to Decimal Convertor\n\t\t\t");
    for (int i = 1; i < 70; i++)
    {
        printf("=");
    }
    char str[100];
    printf("\n\n\t\t\t\tEnter the Binary Number : ");
    scanf("%s", str);
    int n = strlen(str);
    int k = 0;
    int count = 0;
    while (str[k] != '.' && k < n)
    {
        k++;
    }
    count = k;
    if (count == n)
    {
        double sum = 0, j = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            int number;
            if (str[i] == 49)
            {
                str[i] = 1;
            }
            else
            {
                str[i] = 0;
            }
            sum = sum + str[i] * pow(2, j);
            j++;
        }
        printf("\n\t\t\t\tDecima number is : %0.0lf", sum);
    }
    else
    {
        double sum = 0, j = 0;
        for (int i = count - 1; i >= 0; i--)
        {
            int number;
            if (str[i] == 49)
            {
                str[i] = 1;
            }
            else
            {
                str[i] = 0;
            }
            sum = sum + str[i] * pow(2, j);
            j++;
        }
        int d = 1;
        for (int i = count + 1; i < n; i++)
        {
            int number;
            if (str[i] == 49)
            {
                str[i] = 1;
            }
            else
            {
                str[i] = 0;
            }
            sum = sum + str[i] * pow(2, -d);
            d++;
        }
        printf("\n\t\t\t\tDecima number is : %lf", sum);
    }
    printf("\n\n\t\t\t\tWould You like to Countinue this Convertion");
    char decision[3];
    printf("\n\t\t\t\t");
    scanf("%s", decision);
    if (strcmpi("yes", decision) == 0)
    {
        binarytodecimal();
    }
}
void binarytooctal()
{
    clearscreen();
    printf("\n");
    printf("\n\t\t\t\t\t\t  Number System\n\t\t\t");
    printf("\n\t\t\t\t       Welcome to Binary to Octal Convertor\n\t\t\t");
    for (int i = 1; i < 70; i++)
    {
        printf("=");
    }
    char ch[100];
    printf("\n\n\t\t\t\tEnter the Binary Number : ");
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
        int i = n - 1;
        int a[3];
        int b[30];
        int p = 0, count2 = 0;
        while (i >= 0)
        {
            for (int j = 0; j < 3; j++)
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
        count2 = p - 1;
        printf("\n\t\t\t\tOctal Number is : ");
        for (int i = count2; i >= 0; i--)
        {
            printf("%d", b[i]);
        }
    }
    else
    {
        int i = count - 1;
        int a[3];
        int b[30];
        int p = 0, count2 = 0;
        while (i >= 0)
        {
            for (int j = 0; j < 3; j++)
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
        count2 = p - 1;
        printf("\n\t\t\t\tOctal Number is : ");
        for (int i = count2; i >= 0; i--)
        {
             printf("%d", b[i]);
        }
        printf(".");
        int c[3], d[30], l = 0;
        for (int i = count + 1; i < n;)
        {
            int f = 0;
            for (int j = 0; j < 3; j++)
            {
                c[j] = ch[i];
                if (c[j] == 48)
                {
                    c[j] = 0;
                }
                else if (c[j] == 49)
                {
                    c[j] = 1;
                }
                i++;
                if (i == n)
                {
                    break;
                }
                f++;
            }
            int n = madenumber2(c, f + 1);
            d[l] = decimal(n);
            l++;
        }
        for (int i = 0; i < l; i++)
        {
            printf("%d", d[i]);
        }
    }
    printf("\n\n\t\t\t\tWould You like to Countinue this Convertion");
    char decision[3];
    printf("\n\t\t\t\t");
    scanf("%s", decision);
    if (strcmpi("yes", decision) == 0)
    {
        binarytooctal();
    }
}
int madenumber2(int c[], int n)
{
    int sum = 0;
    int j = 2;
    for (int i = 0; i < n; i++)
    {
        sum = sum + c[i] * pow(10, j);
        j--;
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
int madenumber(int a[3])
{
    int sum = 0;
    int j = 0;
    for (int i = 0; i < 3; i++)
    {
        sum = sum + a[i] * pow(10, j);
        j++;
    }
    return sum;
}
void binarytohexadecimal()
{
    clearscreen();
    printf("\n");
    printf("\n\t\t\t\t\t\t  Number System\n\t\t\t");
    printf("\n\t\t\t\t       Welcome to Binary to Hexadecimal Convertor\n\t\t\t");
    for (int i = 1; i < 70; i++)
    {
        printf("=");
    }
    char ch[100];
    printf("\n\n\t\t\t\tEnter the Binary Number : ");
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
        int i = n - 1;
        int a[4];
        int b[30];
        int p = 0, count2 = 0;
        while (i >= 0)
        {
            int j;
            int yu = 0;
            for (j = 0; j < 4;)
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
                j++;
                yu++;
                if (i == -1)
                {
                    break;
                }
            }
            int n = madenumber3(a, yu);
            b[p] = decimal2(n);
            p++;
        }
        count2 = p - 1;
        printf("\n\t\t\t\tHexadecimal Number is : ");
        for (int i = count2; i >= 0; i--)
        {
            if (b[i] >= 10 && b[i] <= 15)
            {
                printf("%c", b[i] + 55);
            }
            else
            {
                printf("%d", b[i]);
            }
        }
    }
    else
    {
        int i = count - 1;
        int a[4];
        int b[30];
        int p = 0, count2 = 0;
        while (i >= 0)
        {
            int j;
            int yu = 0;
            for (int j = 0; j < 4;)
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
                j++;
                yu++;
                if (i == -1)
                {
                    break;
                }
            }
            int n = madenumber3(a, yu);
            b[p] = decimal2(n);
            p++;
        }
        count2 = p - 1;
        printf("\n\t\t\t\tHexadecimal Number is : ");
        for (int i = count2; i >= 0; i--)
        {
            if (b[i] >= 10 && b[i] <= 15)
            {
                printf("%c", b[i] + 55);
            }
            else
            {
                printf("%d", b[i]);
            }
        }
        printf(".");
        int c[4], d[30], l = 0;
        for (int i = count + 1; i < n;)
        {
            int f = 0;
            for (int j = 0; j < 4; j++)
            {
                c[j] = ch[i];
                if (c[j] == 48)
                {
                    c[j] = 0;
                }
                else if (c[j] == 49)
                {
                    c[j] = 1;
                }
                i++;
                if (i == n)
                {
                    break;
                }
                f++;
            }
            int n = madenumber4(c, f + 1);
            d[l] = decimal2(n);
            l++;
        }
        for (int i = 0; i < l; i++)
        {
            if (d[i] >= 10 && d[i] <= 15)
            {
                printf("%c", d[i] + 55);
            }
            else
            {
                printf("%d", d[i]);
            }
        }
    }
    printf("\n\n\t\t\t\tWould You like to Countinue this Convertion");
    char decision[3];
    printf("\n\t\t\t\t");
    scanf("%s", decision);
    if (strcmpi("yes", decision) == 0)
    {
        binarytohexadecimal();
    }
}
int madenumber3(int a[4], int yu)
{
    int sum = 0;
    int j = 0;
    for (int i = 0; i < yu; i++)
    {
        sum = sum + a[i] * pow(10, j);
        j++;
    }
    return sum;
}
int madenumber4(int c[], int n)
{
    int sum = 0;
    int j = 3;
    for (int i = 0; i < n; i++)
    {
        sum = sum + c[i] * pow(10, j);
        j--;
    }
    return sum;
}
int decimal2(int n)
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
void octaltodecimal()
{
    clearscreen();
    printf("\n");
    printf("\n\t\t\t\t\t\t  Number System\n\t\t\t");
    printf("\n\t\t\t\t       Welcome to Octal to Decimal Convertor\n\t\t\t");
    for (int i = 1; i < 70; i++)
    {
        printf("=");
    }
    char ch[100];
    printf("\n\n\t\t\t\tEnter the Octal Number : ");
    scanf("%s", ch);
    int n = strlen(ch);
    int k = 0, count2;
    while (ch[k] != '.' && k < n)
    {
        k++;
    }
    count2 = k;
    int q = n - count2 - 1;
    int b[q];
    int a[count2];
    if (count2 == n)
    {
        int j = 0;
        for (int i = count2 - 1; i >= 0; i--)
        {
            a[j] = number(ch[i]);
            j++;
        }
        double sum = 0;
        for (int i = 0; i < j; i++)
        {
            sum = sum + a[i] * pow(8, i);
        }
        printf("\n\t\t\t\tDecimal Number is : %0.0lf ", sum);
    }
    else
    {
        int j = 0;
        for (int i = count2 - 1; i >= 0; i--)
        {
            a[j] = number(ch[i]);
            j++;
        }
        double sum = 0;
        for (int i = 0; i < j; i++)
        {
            sum = sum + a[i] * pow(8, i);
        }
        int o = 0;
        int t = 1;
        for (int i = count2 + 1; i < n; i++)
        {
            b[o] = number(ch[i]);
            o++;
        }
        for (int i = 0; i < o; i++)
        {
            sum = sum + b[i] * pow(8, -t);
            t++;
        }
        printf("\n\t\t\t\tDecimal Number is : %lf ", sum);
    }
    printf("\n\n\t\t\t\tWould You like to Countinue this Convertion");
    char decision[3];
    printf("\n\t\t\t\t");
    scanf("%s", decision);
    if (strcmpi("yes", decision) == 0)
    {
        octaltodecimal();
    }
}
int number(char ch)
{
    int a = ch;
    for (int i = 48; i <= 55; i++)
    {
        if (a == i)
        {
            int r = a - 48;
            return r;
        }
    }
}
void octaltobinary()
{
    clearscreen();
    printf("\n");
    printf("\n\t\t\t\t\t\t  Number System\n\t\t\t");
    printf("\n\t\t\t\t       Welcome to Octal to Binary Convertor\n\t\t\t");
    for (int i = 1; i < 70; i++)
    {
        printf("=");
    }
    char str[100];
    printf("\n\n\t\t\t\tEnter the Octal Number : ");
    scanf("%s", str);
    int n = strlen(str);
    int k = 0, count = 0;
    while (str[k] != '.' && k < n)
    {
        k++;
    }
    count = k;
    int b[count];
    if (count == n)
    {
        printf("\n\t\t\t\tBinary Number is : ");
        for (int i = 0; i < count; i++)
        {
            int n = number(str[i]);
            if (n == 0 && i != 0)  printf("000");
            else if (n == 1 && i != 0)  printf("001");
            else if (n == 1 && i == 0) printf("1");
            else if (n == 2 && i != 0)   printf("010");
            else if (n == 2 && i == 0)  printf("10");
            else if (n == 3 && i != 0)  printf("011");
            else if (n == 3 && i == 0)  printf("11");
            else if (n == 4) printf("100");
            else if (n == 5)  printf("101");
            else if (n == 6)  printf("110");
            else if (n == 7)  printf("111");
        }
    }
    else
    {
        printf("\n\t\t\t\tBinary Number is : ");
        for (int i = 0; i < count; i++)
        {
            int n = number(str[i]);
            if (n == 0 && i != 0)  printf("000");
            else if (n == 1 && i != 0)  printf("001");
            else if (n == 1 && i == 0) printf("1");
            else if (n == 2 && i != 0)   printf("010");
            else if (n == 2 && i == 0)  printf("10");
            else if (n == 3 && i != 0)  printf("011");
            else if (n == 3 && i == 0)  printf("11");
            else if (n == 4) printf("100");
            else if (n == 5)  printf("101");
            else if (n == 6)  printf("110");
            else if (n == 7)  printf("111");
        }
        printf(".");
        for (int i = count + 1; i < n; i++)
        {
            int n = number(str[i]);
            {
                if (n == 0)
                    printf("000");
                if (n == 1)
                    printf("001");
                else if (n == 2)
                    printf("01");
                else if (n == 3)
                    printf("011");
                else if (n == 4)
                    printf("1");
                else if (n == 5)
                    printf("101");
                else if (n == 6)
                    printf("11");
                else if (n == 7)
                    printf("111");
            }
        }
    }
    printf("\n\n\t\t\t\tWould You like to Countinue this Convertion");
    char decision[3];
    printf("\n\t\t\t\t");
    scanf("%s", decision);
    if (strcmpi("yes", decision) == 0)
    {
        octaltobinary();
    }
}
void octaltohexadecimal()
{
    clearscreen();
    printf("\n");
    printf("\n\t\t\t\t\t\t  Number System\n\t\t\t");
    printf("\n\t\t\t\t       Welcome to Octal to Hexadecimal Convertor\n\t\t\t");
    for (int i = 1; i < 70; i++)
    {
        printf("=");
    }
    char str[100];
    printf("\n\n\t\t\t\tEnter the Octal Number : ");
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
                a[u] = 0; a[u - 1] = 0; a[u - 2] = 0; u = u - 3;
            }
            else if (number == 1)
            {
                a[u] = 1; a[u - 1] = 0; a[u - 2] = 0; u = u - 3;
            }
            else if (number == 2)
            {
                a[u] = 0; a[u - 1] = 1; a[u - 2] = 0; u = u - 3;
            }
            else if (number == 3)
            {
                a[u] = 1; a[u - 1] = 1; a[u - 2] = 0; u = u - 3;
            }
            else if (number == 4)
            {
                a[u] = 0;  a[u - 1] = 0;  a[u - 2] = 1;  u = u - 3;
            }
            else if (number == 5)
            {
                a[u] = 1; a[u - 1] = 0; a[u - 2] = 1; u = u - 3;
            }
            else if (number == 6)
            {
                a[u] = 0;  a[u - 1] = 1; a[u - 2] = 1; u = u - 3;
            }
            else if (number == 7)
            {
                a[u] = 1; a[u - 1] = 1; a[u - 2] = 1; u = u - 3;
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
        printf("\n\n\t\t\t\tHexadecimal Number is : ");
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
                a[u] = 0; a[u - 1] = 0; a[u - 2] = 0; u = u - 3;
            }
            else if (number == 1)
            {
                 a[u] = 1; a[u - 1] = 0; a[u - 2] = 0; u = u - 3;
            }
            else if (number == 2)
            {
                a[u] = 0; a[u - 1] = 1; a[u - 2] = 0; u = u - 3;
            }
            else if (number == 3)
            {
                a[u] = 1; a[u - 1] = 1; a[u - 2] = 0; u = u - 3;
            }
            else if (number == 4)
            {
                a[u] = 0; a[u - 1] = 0; a[u - 2] = 1; u = u - 3;
            }
            else if (number == 5)
            {
                a[u] = 1;a[u - 1] = 0;a[u - 2] = 1;u = u - 3;
            }
            else if (number == 6)
            {
                a[u] = 0;a[u - 1] = 1;a[u - 2] = 1;u = u - 3;
            }
            else if (number == 7)
            {
                a[u] = 1; a[u - 1] = 1; a[u - 2] = 1; u = u - 3;
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
        printf("\n\n\t\t\t\tHexadecimal Number is : ");
        hexadecimal(c, size);
        printf(".");
        int f = (n - count - 1) * 3;
        int z = f;
        int b = f / 3;
        for (int i = 1; i < 30; i++)
        {
            if (b % 4 == 0)
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
                op[m] = 0;op[m + 1] = 0;op[m + 2] = 0;m = m + 3;
            }
            else if (number == 1)
            {
                op[m] = 0;op[m + 1] = 0;op[m + 2] = 1;m = m + 3;
            }
            else if (number == 2)
            {
                op[m] = 0;op[m + 1] = 1;op[m + 2] = 0;m = m + 3;
            }
            else if (number == 3)
            {
                op[m] = 0; op[m + 1] = 1; op[m + 2] = 1; m = m + 3;
            }
            else if (number == 4)
            {
                op[m] = 1;  op[m + 1] = 0;  op[m + 2] = 0;  m = m + 3;
            }
            else if (number == 5)
            {
                op[m] = 1; op[m + 1] = 0; op[m + 2] = 1; m = m + 3;
            }
            else if (number == 6)
            {
                op[m] = 1; op[m + 1] = 1; op[m + 2] = 0; m = m + 3;
            }
            else if (number == 7)
            {
                op[m] = 1; op[m + 1] = 1; op[m + 2] = 1; m = m + 3;
            }
        }
        for (int i = m; i < f; i++)
        {
            op[i] = 0;
        }
        int size2 = f / 4;
        int hg[size2];
        int tg = 0, frac = 0;
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
            hg[frac] = sum;
            frac++;
        }
        hexadecimal(hg, size2);
    }
    printf("\n\n\t\t\t\tWould You like to Countinue this Convertion");
    char decision[3];
    printf("\n\t\t\t\t");
    scanf("%s", decision);
    if (strcmpi("yes", decision) == 0)
    {
        octaltohexadecimal();
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
void hexadecimaltodecimal()
{
    clearscreen();
    printf("\n");
    printf("\n\t\t\t\t\t\t  Number System\n\t\t\t");
    printf("\n\t\t\t\t       Welcome to Hexadecimal to Decimal Convertor\n\t\t\t");
    for (int i = 1; i < 70; i++)
    {
        printf("=");
    }
    char str[100];
    printf("\n\n\t\t\t\tEnter the Hexadecimal Number : ");
    scanf("%s", str);
    int n = strlen(str);
    int k = 0;
    int count = 0;
    while (str[k] != '.' && k < n)
    {
        k++;
    }
    count = k;
    if (count == n)
    {
        int j = 0;
        double sum = 0.0;
        for (int i = count - 1; i >= 0; i--)
        {
            int number;
            if (str[i] >= 48 && str[i] <= 57)
            {
                number = str[i] - 48;
            }
            else if (str[i] >= 65 && str[i] <= 70)
            {
                number = str[i] - 65 + 10;
            }
            sum = sum + number * pow(16, j);
            j++;
        }
        printf("\n\n\t\t\t\tDecimal Number is : %0.0lf", sum);
    }
    else
    {
        int j = 0;
        double sum = 0.0;
        for (int i = count - 1; i >= 0; i--)
        {
            int number;
            if (str[i] >= 48 && str[i] <= 57)
            {
                number = str[i] - 48;
            }
            else if (str[i] >= 65 && str[i] <= 70)
            {
                number = str[i] - 65 + 10;
            }
            sum = sum + number * pow(16, j);
            j++;
        }
        int d = 1;
        for (int i = count + 1; i < n; i++)
        {
            int number;
            if (str[i] >= 48 && str[i] <= 57)
            {
                number = str[i] - 48;
            }
            else if (str[i] >= 65 && str[i] <= 70)
            {
                number = str[i] - 65 + 10;
            }
            sum = sum + number * pow(16, -d);
            d++;
        }
        printf("\n\n\t\t\t\tDecimal Number is : %lf", sum);
    }
    printf("\n\n\t\t\t\tWould You like to Countinue this Convertion");
    char decision[3];
    printf("\n\t\t\t\t");
    scanf("%s", decision);
    if (strcmpi("yes", decision) == 0)
    {
        hexadecimaltodecimal();
    }
}
void hexadecimaltobinary()
{
desimal:
    clearscreen();
    printf("\n");
    printf("\n\t\t\t\t\t\t  Number System\n\t\t\t");
    printf("\n\t\t\t\t       Welcome to Hexadecimal to Binary Convertor\n\t\t\t");
    for (int i = 1; i < 70; i++)
    {
        printf("=");
    }
    char ch[100];
    printf("\n\n\t\t\t\tEnter the Hexadecimal Number : ");
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
        printf("\n\n\t\t\t\tBinary Number is : ");
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
    else
    {
        printf("\n\n\t\t\t\tBinary Number is : ");
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
        printf(".");
        for (int i = count + 1; i < n; i++)
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
    printf("\n\n\t\t\t\tWould You like to Countinue this Convertion");
    char decision[3];
    printf("\n\t\t\t\t");
    scanf("%s", decision);
    if (strcmpi("yes", decision) == 0)
    {
        hexadecimaltobinary();
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
        for (int i = j - 1; i >= 0; i--)
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
int array[200];
int p = 0;
int far[200];
int u = 0;
void hexadecimaltooctal()
{
    p = 0;
    u = 0;
    clearscreen();
    printf("\n");
    printf("\n\t\t\t\t\t\t  Number System\n\t\t\t");
    printf("\n\t\t\t\t       Welcome to Hexadecimal to Octal Convertor\n\t\t\t");
    for (int i = 1; i < 70; i++)
    {
        printf("=");
    }
    char ch[100];
    printf("\n\n\t\t\t\tEnter Hexadecimal Number  : ");
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
                int number;
                if (ch[i] >= 48 && ch[i] <= 57)
                {
                    number = ch[i] - 48;
                }
                else if (ch[i] >= 65 && ch[i] <= 70)
                {
                    number = (ch[i] - 65) + 10;
                }
                binary3(number);
         }
        int final[15];
        int h = 14;
        for (int i = p - 1; i >= 0;)
        {
            int y = 3;
            int sum = 0;
            int o = 0;
            while (y >= 1)
            {
                sum = sum + array[i] * pow(10, o);
                i--;
                o++;
                y--;
            }
            final[h] = sum;
            h--;
        }
        printf("\n\n\t\t\t\tOctal Number is : ");
        for (int i = h + 1; i < 15; i++)
        {
            int r, sum = 0, p = 0, rishi = 0;
            while (final[i] != 0)
            {
                r = final[i] % 10;
                final[i] = final[i] / 10;
                rishi = 1;
                sum = sum + r * pow(2, p);
                p++;
            }
            if (rishi == 1 || i != h + 1)
            {
                printf("%d", sum);
            }
        }
    }
    else
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
                binary3(number);
        }
        int final[15];
        int h = 14;
        for (int i = p - 1; i >= 0;)
        {
            int y = 3;
            int sum = 0;
            int o = 0;
            while (y >= 1)
            {
                sum = sum + array[i] * pow(10, o);
                i--;
                o++;
                y--;
            }
            final[h] = sum;
            h--;
        }
        printf("\n\n\t\t\t\tOctal Number is : ");
        for (int i = h + 1; i < 15; i++)
        {
            int r, sum = 0, p = 0, rishi = 0;
            while (final[i] != 0)
            {
                r = final[i] % 10;
                final[i] = final[i] / 10;
                rishi = 1;
                sum = sum + r * pow(2, p);
                p++;
            }
            if (rishi == 1 || i != h + 1)
            {
                printf("%d", sum);
            }
        }
        printf(".");
        for (int i = count + 1; i < n; i++)
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
        int t = 0;
        for (int i = 0; i < u;)
        {
            int e = 3, sum = 0, m = 2;
            while (e >= 1)
            {
                sum = sum + far[i] * pow(10, m);
                m--;
                e--;
                i++;
            }
            kalpo[t] = sum;
            t++;
        }
        for (int i = 0; i < t; i++)
        {
            int r, sum = 0, p = 0;
            while (kalpo[i] != 0)
            {
                r = kalpo[i] % 10;
                kalpo[i] = kalpo[i] / 10;
                sum = sum + r * pow(2, p);
                p++;
            }
            printf("%d", sum);
        }
    }
    printf("\n\n\t\t\t\tWould You like to Countinue this Convertion");
    char decision[3];
    printf("\n\t\t\t\t");
    scanf("%s", decision);
    if (strcmpi("yes", decision) == 0)
    {
        hexadecimaltooctal();
    }
}
void binary3(int n)
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
