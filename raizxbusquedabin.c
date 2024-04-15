#include <stdio.h>

int square_root_binary_search(int x) {

    if (x == 0 || x == 1) {
        return x;
    }

    int l = 0, r = x / 2, ans = 0;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        long long mid_squared = (long long)mid * mid;


        if (mid_squared == x) {
            return mid;

        } else if (mid_squared < x) {
            l = mid + 1;
            ans = mid;
        } else {
            r = mid - 1;
        }
    }

    return ans;
}

int main() {
    int number = 10;
    printf("La raiz cuadrada de %d es %d\n", number, square_root_binary_search(number));
    number = 25;
    printf("La raiz cuadrada de %d es %d\n", number, square_root_binary_search(number));

    return 0;
}
