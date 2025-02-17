#include<stdio.h>
int main(){
    int a ;
    scanf("%d",&a);
    int a[100] = 0 ;
    int index = 0 ;
    for(int i=0 ; a!=0 ;){
        int r = 0 ;
        r = a%2 ;
        a = a/2;
        a[i] = r;
        i++;   
    }
    return 0 ;


}