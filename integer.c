#include <stdio.h>
 
int main()
{
    char input[100];
    int sum;
    int i;
     
    printf(" Enter number (100 MAX): ");
    scanf("%s", &input);
    printf("\n ");
     
    for(i=0; i<100; i++){
         
        if(input[i] == '\0')
            break;
         
        sum += input[i] - '0';
    }
     
    printf("Sum total is %d", sum);
     
    printf("\n\n\n");
    return 0;
}
