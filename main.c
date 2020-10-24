#include <stdio.h>

int main() {
    int sayi,birler_bas,onlar_bas;

    printf("Lutfen bir sayi giriniz \n");
    scanf("%d",&sayi);

    birler_bas=sayi%10;
    onlar_bas=sayi%100/10;

    printf("Birler basamagindaki sayi: %d\n",birler_bas);
    printf("Onlar basamagindaki sayi:%d",onlar_bas);

    return 0;
}
