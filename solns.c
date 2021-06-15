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


int min(int a[], int s){

    int  mini = a[0];

    for(int i = 1; i < s; i++)
    {
        if(mini > a[i])
            mini = a[i];
    }
    
    return mini;
}




