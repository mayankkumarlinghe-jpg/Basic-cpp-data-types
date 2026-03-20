#include <stdio.h>
#include<math.h>
void update(int *a,int *b) {
    // Updating 'a' to hold the sum, and 'b' to hold the absolute difference
    int original_a = *a;
    int original_b = *b;
    *a = original_a + original_b;  
    *b = abs(original_a - original_b);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
