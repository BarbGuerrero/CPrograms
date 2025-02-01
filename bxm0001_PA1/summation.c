// summation of n
#include <stdio.h>

int main(){

    int endIndex;
    int total = 0;

    printf("Enter the final index: ");
    scanf("%d", &endIndex);

//end index is a, the amount of times operation will take place

    for(int index = 0; index <= endIndex; index++){
        total += index; //index is n AND the variable
    }

    printf("The summation resulted in a total of %d", total);
//result
    
    return 0;
}