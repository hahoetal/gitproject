/////////////////////////////////////////////////////////////////////////////////////
//                                                                                 //
//    2020.01.09(목)                                                               //
//                                                                                 //
//   사칙 연산만 가능한 계산기 입니다.                                              //
//                                                                                 //
/////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

int add(int, int);
int sub(int, int);
int div (int, int);
int multi(int, int);

int main(){
    int a, b,c;
    char operator;

    printf("Please enter a expression");
    scanf("%d %c %d", &a, &operator, &b);

    switch(operator){
        case'+':
        c = add(a,b);
        break;
        case '-':
        c = sub(a,b);
        break;
        case'/':
        c = div(a,b);
        break;
        case '*':
        c = multi(a,b);
        break;
    }

    printf("result: %d", &c);
}

int add(int x, int y){
    return x + y;
}

int sub(int x, int y){
    return x - y;
}

int div(int a, int b){
    int c = a/b;
    return c;
}

int multi(int a, int b){
    int c = a*b;
    return c;
}
