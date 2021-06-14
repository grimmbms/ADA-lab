#include <stdio.h>
void towers(int, char, char, char);

int main() 
{
    int num;
    printf("Enter the number of disks : ");
    scanf("%d", &num);
    printf("Steps in the Tower of Hanoi are :\n");
    towers(num, 'A', 'C', 'B');

    return 0;
}

void towers(int num, char source, char dest, char aux)
{
    if (num == 1)
    {
        printf("\n Move disk 1 from peg %c to peg %c", source, dest);
        return;
    }
    towers(num - 1, source, aux, dest);
    printf("\n Move disk %d from peg %c to peg %c", num, source, dest);
    towers(num - 1, aux, dest, source);
}
