
#include <stdio.h>

int main() {
    int a[5] = {10, 20, 30, 40, 50};
    int key = 50, low = 0, high = 4;
       
    for (int i = 0; i <= 4; i++) {
int mid = (low + high) / 2;
        if (a[mid] == key) { 
            printf("Element found at position %d", mid + 1);
            return 0;
        }
        else if (key < a[mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    printf("Element not found");

    return 0;
}
