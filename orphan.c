#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t pid = fork();

    if (pid == 0) {
        sleep(5);
        printf("Child: My new parent PID = %d\n", getppid());
    } else {
        printf("Parent exiting immediately...\n");
    }
    return 0;
}
