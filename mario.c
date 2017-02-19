#include <stdio.h>
#include <cs50.h>
 
 
int main () {
    int x = -1;
    while (x < 0 || x>23) {
        printf("Height: ");
        x = GetInt();
    }
     
    for (int i=0;i<x;i++)
    {
        for (int k=0;k<x-i-1;k++)
            printf(" ");
             
        for (int k=0;k<x-(x-i-2);k++)
            printf("#");
         
        printf("\n");
    }
 
    return 0;
     
}