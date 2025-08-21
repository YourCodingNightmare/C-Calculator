#include <stdio.h>
#include <stdlib.h>
float C_To_F(float C){ //celsius to fahrenheit
    return (C * (9.0/5.0)) + 32;
}

float F_To_C(float F){ //fahrenheit to celsius
    return (F - 32) * (5.0/9.0);
}

float C_To_K(float C){ //celsius to kelvin
    return C + 273.15;
}

float F_To_K(float F){ //fahrenheit to kelvin
    return F_To_C(F) + 273.15;
}

float calc(float x, char t1, char t2){
    if (t1 == 'c' && t2 == 'f'){
        return C_To_F(x);
    }
    else if (t1 == 'f' && t2 == 'c'){
        return F_To_C(x);
    }
    else if (t1 == 'c' && t2 == 'k'){
        return C_To_K(x);
    }
    else if (t1 == 'f' && t2 == 'k'){
        return F_To_K(x);
    }
    else {
        printf("Invalid temp\n");
        return 0;
    }
}
int main(){
    system("clear");
    while (1){
        char temp1, temp2;
        float x;
        printf("\033[32mEazy Calc for Temperature\n(LOWERCASE!, t1 to t2, x = final)\033[0m\n");

        //temp1
        printf("T1 > ");
        scanf(" %c", &temp1);
        if (temp1 == 'e'){
            break;
        }
        //temp2
        printf("T2 > ");
        scanf(" %c", &temp2);

        //temp
        printf("X > ");
        scanf(" %f", &x);

        //final
        printf("\033[31mfinal = %f\033[0m\n", calc(x, temp1, temp2));
    }
    system("clear");
    return 0;
}