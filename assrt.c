#include <assert.h>

int main() {
    /*
     * assert terminates the program if arg is false
     * gcc -DNDEBUG assrt.c -o assrt        -DNDEBUG option disables assert
     */
    assert(1);
}
