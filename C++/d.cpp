#include <iostream>
#include <math.h>
using namespace std;

int main()
{
   int n;
   int p = 1;
   cin >> n;
   int a[n];

   for (int i = 0; i < n; i++)
   {
      cin >> a[i];
      //    p= p * (a[i])%((int)pow(10,9)+7);
      p = (p * a[i]) % (((int)pow(10, 9)) + 7);
   }

   cout << p;
   return 0;
}