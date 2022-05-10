#include <stdio.h>
#include "stack.h"

int main()
{
    stack s1;
    for(int i=0;i<7;i++){
        s1.push(i);
    }

    printf("SIZE %d\n",s1.EntireSize);

    for(int i=7;i<12;i++){
        s1.push(i);
    }

    printf("SIZE %d\n",s1.EntireSize);
    printf("%d\n",s1.pop());
    printf("%d\n",s1.pop());

    return 0;
}
