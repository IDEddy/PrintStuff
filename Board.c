
/**Most of the complex stuff is here for now. Just basic stuff.
 *Most of it is if and for loops. Generates row & column **/

void board(int row, int col)
{

    int randomX = rand() % row;
    int randomY = rand() % col;
    int i;
    int j;



    printf("\n");
    printf("   ");
    for(j = 0 ; j  < col ; j ++)
    {

        if(j >= 10)
        {
            printf("%d ",j);

        }
        else
            printf("%d  ",j);
    }
    printf("\n");
    for(i = 0 ; i < row ; i++)
    {
        if(i < row)
        {
            printf("%d",i);
        }
        if(i < 10)
        {
            printf(" ");
        }
        for(j = 0 ; j < col ; j ++)
        {
            if(i == randomX && j == randomY)
            {
                printf(" &&");
            }

            if(i != randomX || j != randomY)
            {

                printf(" []");
            }

        }
        printf("\n");

    }
    printf("\n");

}





