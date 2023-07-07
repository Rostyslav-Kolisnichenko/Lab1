#include <stdio.h>

float calculateCakeEatingTime(int t1, int t2, int t3) {
    float totalTime = 1.0 / t1 + 1.0 / t2 + 1.0 / t3;
    float cakeEatingTime = 1.0 / totalTime;
    return cakeEatingTime;
}

int main() {
    int t1, t2, t3;
    printf("Введіть час першого гостя (t1): ");
    scanf("%d", &t1);
    printf("Введіть час другого гостя (t2): ");
    scanf("%d", &t2);
    printf("Введіть час третього гостя (t3): ");
    scanf("%d", &t3);

    float result = calculateCakeEatingTime(t1, t2, t3);
    printf("Час, за який гості можуть з'їсти пиріг: %.2f год\n", result);

    return 0;
}
