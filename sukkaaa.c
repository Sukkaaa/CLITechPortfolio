#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char input[100];
    printf("type \033[1;35m 'sukkaaa'\033[0m to get started\n");
    scanf("%s", input);
    while(strcmp(input,"sukkaaa")==0){
        printf("\033[1;35m  _________      __    __                          \n");
        printf(" /   _____/__ __|  | _|  | _______  _____  _____   \n");
        printf(" \\_____  \\|  |  \\  |/ /  |/ /\\__  \\ \\__  \\ \\__  \\  \n");
        printf(" /        \\  |  /    <|    <  / __ \\_/ __ \\_/ __ \\_\n");
        printf("/_______  /____/|__|_ \\__|_ \\(____  (____  (__ __  /\n");
        printf("        \\/           \\/    \\/     \\/     \\/     \\/©2024 \033[0m\n");
        printf("type \033[1;35m 'help'\033[0m for a list of commands\n");
        scanf("%s", input);
        while(strcmp(input,"help")==0){
            printf(" \033[1;35m  whois\033[0m       who is sukkaaa\n");
            printf("  \033[1;35m edu \033[0m        my education\n");
            printf("  \033[1;35m techSkill \033[0m  my technical skills\n");
            printf("  \033[1;35m prj \033[0m        projects i have worked one\n");
            printf("  \033[1;35m xp \033[0m         my experiece\n");
            scanf("%s", input);
        }
    }
    return 0;
}