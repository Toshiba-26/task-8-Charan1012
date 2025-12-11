#include <stdio.h>
#include <unistd.h>

int main() {
    int N = 5;

    for (int i = 0; i < N; i++) {
        pid_t pid = fork();

        if (pid == 0) {
            printf("Child %d: PID = %d\n", i, getpid());
            return 0;
        }
    }
    return 0;
}
