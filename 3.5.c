#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/wait.h>
#include<errno.h>
#include<string.h>

int main(void) {
    void sigint_handler(int sig);
    int n, i, float = 0;

    if(signal(SIGINT,sigint_handler) == SIG_ERR)
    perror("signal");
    exit(1);
    }

int main(void) {

    int n=0;
    printf("Enter a number:");
    scanf("%d",&n);

    int fd[2];
    pipe(fd);
    pid_t pid = fork();

    if(pid > 0) {
    close(0);
    close(fd[0]);
    dup(fd[1]);
    }

    else if(pid == 0) {
    close(1);
    close(fd[0]);
    dup(fd[1]);
    }

    for(i = 2; i <= n/2; i++) {
       if(n % i == 0) {
       float = 1;
       break;
       }
     }

     if(n == 1) {
        printf("1 is either prime nor composite.");
       }
     else {
        if(flag == 0)
           printf("%d is a prime number.\n");
        else
           printf("%d is not a prime number.\n");
        }

          return EXIT_SUCCESS;
}
