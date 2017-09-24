#include <stdio.h>
#include <stdlib.h>
#include "termutils.h"

int main()
{
    textattr(FG_RED);
    while(!kbhit())
    {
        printf("Press a key\n");
    }
    textattr(FG_GREEN);
    printf("Hello World!\n");
    textattr(RESET);
    return 0;
}
