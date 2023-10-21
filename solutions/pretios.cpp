#include <iostream>
#define cresc(a, b, c, d) (a <= b && b <= c && c <= d)

//din nou, o rezolvare demna de nota 10!

int main()
{
   unsigned long long a, b;
   unsigned long long st, dr;
   unsigned long long rasp = 0;
   std::cin >> a >> b;

   for (int i : {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61})
   {
      st = (1ULL << (i-1));  // pt 3 biti, st = 100 in baza 2
      dr = (1ULL << i) - 1;  // pt 3 biti, dr = 111 in baza 2

      if (cresc(a, st, dr, b))
         rasp += dr-st+1;
      else if (cresc(st, a, dr, b))
         rasp += dr-a+1;
      else if (cresc(a, st, b, dr))
         rasp += b-st+1;
      else if (cresc(st, a, b, dr))
         rasp += b-a+1;
   }

   std::cout << rasp;

   return 0;
}