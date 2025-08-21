#include <stdio.h>
float calc(float x, float y, char op){
    switch(op){
        case '+':
            return x + y;
        case '-':
            return x - y;
        case '*':
            return x * y;
        case '/':
            if (y != 0){
                return x / y;
            }
            printf("Cannot divide by 0\n");
            return 0;
        default:
            printf("Cannot use or find: %cn", op);
            return 0;
    }
}
int main(){
    float x, y;
    char op;
    printf("Eazy Calclulator ( float, x <op> y) \n");
    printf("enter op (+ - * /): ");
    scanf(" %c", &op);
    printf("enter X: ");
    scanf(" %f", &x);
    printf("enter Y: ");
    scanf(" %f", &y);
    printf(" = %f\n", calc(x, y, op));

    return 0;
}