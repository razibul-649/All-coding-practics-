#include<stdio.h>
#include<string.h>
#define MOON 3
int a[MOON];
int top= -1;
void push(int b){
    if(top < MOON-1){
       a[top]=b;
      
     printf("%d\n",a[top]);
     top= top +1;
    }
    else{
     printf("stack is full");
    }

}

int pop(){
    if(top>=0){
     int n= a[top];
       top=top -1;
       return n;
    }
    else{
     printf("empty\n");
      return -1;
    }

}

int peek(){
    if(top >=0){
       return a[top];
    }
    printf("peek value empty\n");
    return -1;
    
 

}

 int main(){
 
  pop();
 peek();
    
    
  
   

}
