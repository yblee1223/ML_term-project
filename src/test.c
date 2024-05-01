// code 2
#include <stdio.h>
#include <unistd.h>

main() // int가 없는 이유는 리턴값이 없기 때문
{
    pid_t pid, ppid; // pid_t는 프로세스 식별자를 저장하는데 사용되는 데이터형
    printf("Hello\n");
    pid=fork(); // fork()는 현재 실행중인 프로세스의 복제본을 생성
    if (pid==0) // 자식 프로세스
    {
        printf("I am the child\n");
        printf("The PID of child is %d\n",getpid()); // getpid()는 현재 프로세스의 프로세스 ID를 반환
        printf("The PID of parent of child is %d\n",getppid()); // getppid()는 부모 프로세스의 프로세스 ID를 반환
    }
    else
    {
        printf("I am the parent\n");
        printf("The PID of parent is %d\n",getpid()); // getpid()는 현재 프로세스의 프로세스 ID를 반환
        printf("The PID of parent of parent is %d\n",getppid()); // getppid()는 부모 프로세스의 프로세스 ID를 반환
    }
}