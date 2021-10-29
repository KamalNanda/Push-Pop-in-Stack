#include<stdio.h>
#include<conio.h>
#include<process.h>
void main()
{
int stack[10],top=-1,i,ch,item;
clrscr();
do{
printf("\n1. Push \n2. Pop \n3. Exit \n Enter your choice (1-3) - ");
scanf("%d",&ch);
switch(ch)
{
  case 1: {
	        push();
          }
          break;
  case 2: {
            pop();
          }
          break;
  case 3: exit(1);
          break;
  default: printf("Wrong Choice!!!!");
            break;
}
}while(ch!=3);
getch();
}

void pop(){
    if(top==-1)
            {
            printf("Underflow");
            exit(1);
            }
            else{
            top-=1;
            printf("Updated stack - ");
            for(i=0;i<=top;i++)
              printf("%d ",stack[i]);
            }
}

void push(){
    if(top==10)
            {
            printf("Overflow");
            exit(1);
            }
            else{
            top=top+1;
            printf("Enter the element - ");
            scanf("%d",&item);
            stack[top]=item;
            printf("Updated Stack - ");
            for(i=0;i<=top;i++)
              printf("%d ",stack[i]);
            }
}
}
