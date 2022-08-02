#include<stdio.h>
int main()
{
    int s,rev=0,tem;
    scanf("%d",&s);
    tem= s;
    while(tem != 0){
      rev= rev*10;
      rev= rev + ( tem % 10);
      tem = tem/10;
    }
    if( s== rev){
     printf("palindrome number ");
    }
    else{
      printf("not palindrome ");
    }
    
    return 0;
}
