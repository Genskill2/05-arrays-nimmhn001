/* Enter your solutions in this file */
#include <stdio.h>
#include <assert.h>

 int max(int a[], int s){

        int maximum = a[0];
        for(int i = 1; i < s; i++)
        {
            if(maximum < a[i])
                maximum = a[i];
        }

        return maximum;
    }


int main(void) {
  int x[] = {9,5,6,10,2,-3,4};
  assert (max(x, 7) == 10);

  int y[] = {5};
  assert (max(y, 1) == 5);
  printf("Max: passed\n");
  }
