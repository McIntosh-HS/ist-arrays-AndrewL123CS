#include <stdio.h>

int main() {

    char res[20];

    printf("Will you be valentine? ");
    scanf("%s", &res);

    if((res[0] == 'y' && res[1] =='e') && res[2] == 's') {
        printf("Yay!\n");
    }
    else if(res[0] == 'n' && res[1] == 'o') {
       printf("Oh....\n"); 
    }
    else {
        printf("What did you say?\n");
    }

    return 0;
}
