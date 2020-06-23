/*
** EPITECH PROJECT, 2019
** AIA_n4s_2019
** File description:
** debug.c
*/

#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

void run(void);

void redirect_io(int inputfd[2], int outputfd[2])
{
    dup2(inputfd[0], 0);
    dup2(outputfd[1], 1);
    close(inputfd[1]);
    close(outputfd[0]);
}

void run(void)
{
    dprintf(1, "START_SIMULATION\n");
    sleep(5);
    dprintf(1, "STOP_SIMULATION\n");
}

int main(void)
{
    int trash = open("/dev/null", O_WRONLY);
    int pipe1fd[2];
    int pipe2fd[2];
    int stat;
    int pid;

    pipe(pipe1fd);
    pipe(pipe2fd);
    pid = fork();
    if (pid == 0) {
        dup2(trash, 2);
        redirect_io(pipe1fd, pipe2fd);
        execl("./n4s", "./n4s", NULL);
    } else {
        redirect_io(pipe2fd, pipe1fd);
        run();
        waitpid(pid, &stat, 0);
        close(trash);
    }
    return (0);
}