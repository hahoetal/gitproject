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
        case '*':
        c = multi(a,b);
        break;
    }
}

int div(int a, int b){
    int c = a/b;
    return c;
}

int multi(int a, int b){
    int c = a*b;
    return c;
}