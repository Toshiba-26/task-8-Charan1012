#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t pid = fork();

    if (pid == 0) {
        printf("Child exiting... PID = %d\n", getpid());
    } else {
        printf("Parent sleeping... PID = %d\n", getpid());
        sleep(20);
    }
    return 0;
}
