//summation of b^n factorial
#include <stdio.h>

int main(){
    int endIndex, currentIndex, factCount;
    long long b, fact;
    long long total = 0;
    long long exp = 1;    //at 1 now so we can skip exp = 0 later

    printf("Enter your 'b' value: ");
    scanf("%lld", &b);
//b value

    printf("Enter the final index: ");
    scanf("%d", &endIndex);
//a value

    for(int index = 0; index <= endIndex; index++){

        currentIndex = index - 1;    //represents exponent = 0
        while(currentIndex != -1){   //exp: multiplies b to itself
            exp *= b;                //"currentIndex" amount of times
            currentIndex--;
        }

        factCount = exp -1;     //represents *1
        fact = exp;             //exp is b^n
        while(factCount != 0){
            fact *= factCount;  //factorial: n * n-1 * n-2... * 1
            factCount--;
        }

        total += fact;    //fact is now (b^n)! for current index
        exp = 1;       // resets exp
    }

    printf("The summation resulted in a total of %d", total);
//result

    return 0;
}