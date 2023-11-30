#include <stdio.h>
int main()
{
    int n, max;
    char x[20];
    FILE *fp;
    fp = fopen("data.txt", "w");
    printf("How many words to enter? ");
    scanf("%d", &max);
    for (n=0; n<max; n++) {
        printf("Enter word %d: ", n+1);
        scanf("%s", &x);
        fprintf(fp, "%s\n", x);
    }
    fclose(fp);
    fp = fopen("data.txt", "r");
        for (n=0; n<max; n++) {
            fscanf(fp, "%s", x);
            printf("%s\n", x);
    }
    fclose(fp);
    return 0;
}
