#include <stdio.h>
#include <stdlib.h>
float calc(float x, float y, char op){ //calcluates
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
    system("clear");
    while (1){
        
        float x, y;
        char op;
        printf("\033[32mEazy Calclulator ( float, x <op> y) \n'e' to exit\033[0m\n");
        
        //gets op
        printf("enter op (+ - * /): ");
        scanf(" %c", &op);

        //quit if e
        if (op == 'e'){
            break;
        }

        //gets x and y
        printf("enter X: ");
        scanf(" %f", &x);
        printf("enter Y: ");
        scanf(" %f", &y);

        //final
        printf("\033[31m = %f\033[0m\n", calc(x, y, op));
    }
    system("clear");
    return 0;
}