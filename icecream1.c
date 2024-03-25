#include<stdio.h>

int main() {
    const char *menu[] = {"ordered butterScoth", "ordered Vanilla", "ordered Strawberry", "ordered Mango"};
    int MenuOption ;

    printf("enter your option:");
    scanf("%d",&MenuOption);

    if (MenuOption >= 1 && MenuOption <= 4) {

        printf("%s\n", menu[MenuOption - 1]);
        printf("Icecream ordered Succesfully");
    } else {

        printf("Invalid option\n");
    }

    return 0;
}
