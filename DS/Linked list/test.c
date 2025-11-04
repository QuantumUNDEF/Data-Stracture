#include <stdio.h>

int fibonacci(int n) {
    if (n == 0)          // Base case 1
        return 0;
    else if (n == 1)     // Base case 2
        return 1;
    else                 // Recursive case
        return fibonacci(n - 1) + fibonacci(n - 2);
}
int main(){
    printf("%d", fibonacci(6 ));

}