#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "Board.h"

/**The main method.1-73 is just the suggested values.
 The values can go higher however everything might look out of place.
 This is just a test or a "base" for more complex things like battleship ,chess, minesweeper ..etc**/

int main()
{
    int a,b;

    bool start = true;

    while(start == true)
    {


        printf("Welcome to this test!\n");
        printf("Please Enter the board size\n");
        printf("Number of rows(1-73):\n");
        scanf("%d",&a);
        printf("Enter number of columns(1-73):\n");
        scanf("%d",&b);

        if(a > 73 || b > 73 || a < 1 || b < 1)
        {
            printf("Please enter the suggested values\n");
        }

        else
            board(a,b);

    }

}
