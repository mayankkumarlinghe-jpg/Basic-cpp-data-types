#include <stdio.h>
#include<math.h>
void update(int *a,int *b) {
    // Complete this function 
    // Updating 'a' to hold the sum, and 'b' to hold the absolute difference
    int temp=*a;
    *a=*a+*b;  
    *b = abs(temp - *b);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
