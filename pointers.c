#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function
    int tempA = *a;
    *a = *a + *b;
    *b = abs(tempA - *b);
}

int main() {
    int a, b;
    /* Assigns the memory address of a to pa, and b to pb. To access the content, use the *pa or *pb */
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

/*
&val returns the MEMORY ADDRESS.
*/
