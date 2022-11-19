#include <stdio.h>

void update(int *a,int *b) {
   int s=*a;
    *a=*a+*b;
    if(s>*b)
    {
    *b=s-*b;
    }
    else
    {
        *b=*b-s;
    }
 
}
int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}



/*

Expected input:

4
5

Expected Output:

9
1

Explanation:
a'= 4+5=9
b'= |4-5|=1

*/