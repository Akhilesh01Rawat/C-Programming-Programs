#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
 

void push();
void pop();
int a[50];
int n, size, top=-1;
void main()
{
    char ch1='y', ch2='y';
    clrscr();
    printf("\n enter size");
    scanf("%d", &size);
    while(ch1!='n')
    {
        push();
        ch1=getch();
    }
    display();
    while(ch2!='n')
    {
        pop();
        ch2=getch();
    }
    display();
    getch();
}

    void push()
    printf("\n enter elements");
    scanf("%d", &n);
    if(top=size-1)
    {
        printf("\n stack overflow");
}
    else{
        top=top+1;
        a[top]=n;
    }
}
void display()
{
    int i;
    for(i=top;i!=-1;i--)
    {
        printf("\n %d", a[i]);
    }
}
void pop()
{
    if(top==1)
    {
        printf("\n stack is empty");
    }
    else{
        printf("\n deleted value=%d", a[top]);
        top=top-1;
    }
    }
