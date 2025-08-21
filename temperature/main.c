#include <stdio.h>
float C_To_F(float C){
    return (C * (9.0/5.0)) + 32;
}

float F_To_C(float F){
    return (F - 32) * (5.0/9.0);
}

float C_To_K(float C){
    return C + 273.15;
}

float F_To_K(float F){
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
    char temp1, temp2;
    float x;
    printf("Eazy Calc for Temperature\n(LOWERCASE!, t1 to t2, x = final)\n");
    printf("T1 > ");
    scanf(" %c", &temp1);
    printf("T2 > ");
    scanf(" %c", &temp2);
    printf("X > ");
    scanf(" %f", &x);
    printf("final = %f\n", calc(x, temp1, temp2));
    return 0;
}