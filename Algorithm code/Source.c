#include <stdio.h>
void TowerOnHanoi(int plates, char robFirst,char robBetween,char robEnd)
{
    if (plates == 1)
    {
        printf("Plate 1 from %c to %c \n", robFirst, robEnd);
        return;
    }
    TowerOnHanoi(plates - 1, robFirst, robEnd, robBetween);
    printf("Plate %d from %c to %c\n",plates, robFirst, robEnd);
    TowerOnHanoi(plates - 1, robBetween, robFirst, robEnd);
   
}
void main()
{
    TowerOnHanoi(2, 'A', 'B', 'C');
   // printf("Value %ld\n");
    
}