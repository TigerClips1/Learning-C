#include <stdio.h>
#include <math.h>
#include<stdlib.h>

int main()
{
    char color[20];
    char pluralNoun[20];
    char verb[20];
    char verbL[20]; //not fixing
    printf("Enter a Color: ");
    scanf("%s", color);
    printf("Enter a pluralNoun: ");
    scanf("%s", pluralNoun);
    printf("Enter a Verb: ");
    scanf("%s %s", verb, verbL); //not fixing

    printf("Roses are %s\n", color);
    printf("%s are blue\n", pluralNoun);
    printf("But I still %s %s you!\n", verb, verbL); //Not fixing
    
    
    return 0;
}
