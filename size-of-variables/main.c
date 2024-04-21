#include <stdio.h>

int main() {
    float _float;
    double _double;
    int _int;
    char _char;
    long _long;
    long long _long2;


    printf("the size of the float is %zd bites\n", sizeof(_float));
    printf("the size of the double is %zd bites\n", sizeof(_double));
    printf("the size of the char is %zd bites\n", sizeof(_char));
    printf("the size of the long is %zd bites\n", sizeof(_long));
    printf("the size of the long long is %zd bites\n", sizeof(_long2));

    return 0;
}
