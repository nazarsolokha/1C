#include <stdio.h>
#include <cs50.h>
 
 
int main () {
    float x = -1;
    int userInput;
     
    while (x < 0) {
        printf("O hai! How much change is owed?\n");
        x = GetFloat();
    }
     
    userInput = (((int)(x * 100 + .5) / 100.0))*100;
 
    int countCoins = userInput/25;
     
    userInput = userInput%25;
    countCoins=countCoins+(userInput/10);
 
    userInput = userInput%10;
     
    countCoins=countCoins+(userInput/5);
     
    userInput = userInput%5;
    countCoins=countCoins+(userInput/1); 
     
    printf("%d\n", countCoins);
    return 0;
     
}