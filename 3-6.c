#include <stdio.h>

int maximum(int a, int b, int c);
int main()
{
    int a, b, c;
    printf("Please enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    int max= maximum(a, b, c);
    printf("The maximum of the 3 is: %d",max);
    
}

int maximum(int a, int b, int c){
    if (a>b && a>c) {
        return a;
    }
    
    else if  (b>c){
        return b;
    }
    
    else {
        return c;
    }
}
