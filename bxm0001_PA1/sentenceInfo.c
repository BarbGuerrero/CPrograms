// sentence into words, numbers, and length
#include <stdio.h>

int main(){
    char string[256];
    int wordCount = 0;
    int numCount = 0;
    int length = 0;

    printf("Enter your sentence: ");
    scanf("%[^\n]s", string);    // use scanset bc of white spaces
 
    for(int i = 0; string[i] != '\0'; i++){
        length++;               // each loop is a character including spaces
        if(string[i] == ' ' || string[i] == '\0'){

            wordCount++;        // each space marks the end of a word

        }else if(string[i] == '0' ||
        string[i] == '1' || string[i] == '2' || 
        string[i] == '3' || string[i] == '4' ||
        string[i] == '5' || string[i] == '6' ||
        string[i] == '7' || string[i] == '8' ||
        string[i] == '9'){

            numCount++;         // counting numbers

        }

    }

    printf("Your Sentence Info(%s): \n", string);
    printf("Number of Words: %d\n", wordCount);
    printf("Total Numbers: %d\n", numCount);
    printf("Length of Sentence: %d characters\n", length);


    return 0;
}