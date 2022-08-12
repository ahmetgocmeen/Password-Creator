#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void createpassword(char passwords[][100],int x)
{
    int i;
    int j;
    for(i=0; i<x; i++)
    {
        int passwordlength;
        printf("Enter the length of password[1-100]:");
        scanf("%d",&passwordlength);
        for(j=0; j<passwordlength; j++)
        {
            passwords[i][j]=rand()%93+34;
        }
        passwords[i][j]='\0';
        printf("Created password: ");
        puts(passwords[i]);
    }
}
int main()
{
    srand(time(NULL));
    int a;
    printf("Enter the number of passwords to be created:");
    scanf("%d",&a);
    char passwords[a][100];
    createpassword(passwords,a);
    return 0;
}