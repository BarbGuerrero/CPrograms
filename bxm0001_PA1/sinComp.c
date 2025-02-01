// sin computation
#include <stdio.h>

int main(){
    int a, n; // final index, index counter
    float x, denom, numer, value2;
    numer = 1.0; // future x^(2n+1)
    denom = 1.0;
    float sin = 0.0; // final answer

    printf("Enter your 'x' value: ");
    scanf("%f", &x);

    printf("Enter the final index: ");
    scanf("%d", &a);

    //NOTE: if n is odd, (-1)^n is now positive, vice versa

    for(n = 0; n <= a; n++){ // summation

        //find factorial value
        if(n>0){
            denom *= (2 * n) * (2 * n+1); // current factorial * previous denom
        }

        //note: x ^2n+1 goes up by x^2 each loop: n=1,x^3...n=2,x^5...
        if(n>0){                // n=0, x^1
            numer *= x * x;
        }

        //divide numerator by denom
        value2 = numer/denom;

        //multiply by -1^n
        if(n%2 != 0){       
            sin += value2 * -1;  //if odd (* -1)
        }else{
            sin += value2;       //if even (* +1)
        }
    }

    printf("The sin of %f = %f\n", x, sin);
//result

    return 0;
}