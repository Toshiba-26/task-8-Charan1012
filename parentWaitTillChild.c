#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t pid = fork();

    if (pid == 0) {
        printf("Child: PID = %d\n", getpid());
        sleep(2);
        printf("Child completed\n");
    } else {
        wait(NULL);
        printf("Parent: Child finished, now Parent exit\n");
    }
    return 0;
}
