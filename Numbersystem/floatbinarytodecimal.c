#include <stdio.h>
#include <math.h>
void main()
{
    while(1)
    {
           int n1,n2=0;
           int nod=0;
           char c;
           printf("Enter the value of Binary number\n");
           scanf("%d",&n1);
           scanf(".");
           while(1)
           {
               scanf("%c",&c);
               if(c=='\n')
                break;
               n2=n2*10+c-'0';
               nod++;

           }
           
           int r,i=0;
           float decimal;
           while(n1!=0)
           {
            r=n1%10;
            n1=n1/10;
            decimal=decimal + r*pow(2,i);
            i++;

           }

           int tem=n2;
           //while(tem!=0)
           //{
             // tem=tem/10;
              //nod++;
           //}
           int x;
           while(n2!=0)
           {
              x=n2%10;
              decimal += x*pow(2,-nod);
            
              nod--;
              n2=n2/10;
           }
           printf("Decimal is = %0.3f\n",decimal);
           decimal = 0;
    }


}
