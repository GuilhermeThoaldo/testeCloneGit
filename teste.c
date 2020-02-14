#include <stdlib.h>
#include <stdio.h>

int main(){

    int num, mens;

    printf("Digite a sua idade:\n");
    scanf("%d", &num);

    mens = num - 1;

    printf("\nSua idade diminuída por 1 é: %d!\n", mens);

    return 0;
}
