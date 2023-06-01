#include <stdio.h>
struct stack {
    int top;
    int arr[5];
}st;

void push (int ele) {
    st.top++;
    st.arr[st.top] = ele;
}

void display() {
    for (int i=0; i<=st.top; i++){
        printf("%d\n",st.arr[i]);
    }
}

int main()
{
    printf("Starting the programm....\n");
    st.top = -1;
    printf("initial top is %d\n",st.top);
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    printf("initial top is %d\n",st.top);
    display();

    return 0;
}
