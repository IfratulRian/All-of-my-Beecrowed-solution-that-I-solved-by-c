#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ANGLE 181

int main() {
    int possible[MAX_ANGLE] = {0};
    int a;
    scanf("%d", &a);
    for (int t = 0; t < 720; t++) {
        int minute_pos = t % 60;
        int hour_pos = (t / 12) % 60;
        int diff = abs(minute_pos - hour_pos);
        int angle = diff * 6;
        if (angle > 180) {
            angle = 360 - angle;
        }
        if (angle == a) {
            printf("Y\n");
            return 0;
        }
    }
    printf("N\n");
    return 0;
}
