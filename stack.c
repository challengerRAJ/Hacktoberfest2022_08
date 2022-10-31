// Implement a program for stack that performs the following operations using arrays.(a) PUSH (b) POP (c) PEEP (d) CHANGE (e) DISPLAY

#include<stdio.h>
#include<conio.h>

#define size 3

struct stack
{
    int s[size];
    int top;
}st ;

int isEmpty(){
    if(st.top==-1){
        printf("Underflow Occured...");   
        printf("This Operation is not completed. Press enter to Continue...");
        getch();
        return 1;
    }
    return 0;
}

int isFull(){
    if(st.top>=size-1){
        printf("Overflow Occured...");
        printf("This Operation is not completed. Press enter to Continue...");
        getch();
        return 1;
    }
    return 0;
}

void push(int value){
    if(isFull());
    else {
        st.top++;
        st.s[st.top] = value;
        printf("Value inserted successfully. Press enter to Continue...");    
        getch();
    }
}

void pop(){
    if(isEmpty());
    else{
        st.s[st.top--]=-1;
        printf("Value deleted successfully. Press enter to Continue...");
        getch();
    }
}

void change(int n, int i){
    if(isEmpty());
    else if((i-1)>st.top){
        printf("Your index is much biger than stack top");
    }
    else{
        st.s[(i-1)] = n;
        printf("Elements changed successfully. Press enter to Continue...");
    }
}

void display(){
    if(isEmpty());
    else{
        for(int i=0; i<=st.top; i++){
            printf("%d ", st.s[i]);
        }
        printf("\n" );
    }

    
}
int main(){
    st.top = -1;

    int choice,value,index;
    do{
        printf("\n\n1.push\n");
        printf("2.pop\n");
        printf("3.display\n");
        printf("4.change\n");
        printf("5.exit\n");
        printf("Enter a choice: ");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            printf("Enter a value to push: ");
            scanf("%d", &value);
            push(value);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Enter a value and position to change: ");
            scanf("%d%d",&value,&index);
            change(value,index);
            break;
        case 5:
            return 0;
        default:
            printf("Enter a valid choice...\n");
            break;
        }


    }while(1);
}
