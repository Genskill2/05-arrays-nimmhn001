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



