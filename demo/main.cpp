#include <cstdio>
#include <ctime>

int main() {
    time_t timestamp = time(nullptr);
    printf("time(...) = %ld (in binary)\n", timestamp);
    return 0;
}
