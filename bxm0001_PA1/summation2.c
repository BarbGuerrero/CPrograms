// summation of a^n + b
#include <stdio.h>

int main(){
    int endIndex, currentIndex, b; 
    int total = 0;
    int exp = 1;

    printf("Enter your 'b' value: ");
    scanf("%d", &b);
//b is input variable that will be added

    printf("Enter the final index: ");
    scanf("%d", &endIndex);
//final index is a, amount of operations AND variable in operation

    for(int index = 0; index <= endIndex; index++){     //index is n (index version)
        currentIndex = index - 1;      //represents exponent = 0
        while(currentIndex != -1){     //currentIndex is n (exponent version)
            exp *= endIndex;
            currentIndex--;
        }
        total = total + exp + b;   //exp is a^n after operations
        exp = 1;      //reset a^n for next index
    }

    printf("The summation resulted in a total of %d", total);
// result

    return 0;
}