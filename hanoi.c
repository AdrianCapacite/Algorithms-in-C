/*
  Tower of Hanoi algorithm - hanoi
  Time Complexity:
    Worst case: O(n^2)
    Best case: O(n^2)

  Pseudo Code:
    Hanoi(disks, src, dest, spare)
      If disk 1
        Move disk 1 from src to dest
      Else
        Hanoi(disks - 1, src, spare, dest)
        Move disk 1 from src to dest
        Hanoi(disks - 1, spare, dest, src)

      d = 1
        s->d
      d != 1
        s sp d
        s->d
        sp d s


  Author: Adrian Thomas Capacite
  Date: 10 / 05 / 2022
*/
#include <stdio.h>

void Hanoi(int disk, char src, char dest, char spare);

int main()
{
  Hanoi(3, 'A', 'C', 'B');

  return 0;
}

void Hanoi(int disk, char src, char dest, char spare)
{
  printf("Hanoi(disk, src, dest, spare):\n");
  if (disk == 0)
  {
    printf("D1: %c -> %c\n", src, dest); // Move disk 1 from src to dest
  }
  else
  {
    Hanoi(disk - 1, src, spare, dest); 
    printf("D%d: %c -> %c\n", disk + 1, src, dest);
    Hanoi(disk - 1, spare, dest, src);
  }

}