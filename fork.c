
//write a c code to create a sub process?       
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


int n=5;

int foo(const char *whoami) {
    printf("I am a %s.  My pid is:%d  my ppid is %d\n", whoami, getpid(), getppid() );
    return 1;
}

int func(int n) 
{
    if (n == 0)
    { 
        return 0;
    }
    int pid = fork(); 
    if (pid == -1) {
        exit(0);
    }
    if (pid==0) { 
        foo("child");
        n = n-1;
        func(n);
        exit(0);
    }
    else {
       wait(NULL);
    } 
    return 0;   
}


int main()
{
    func(n); 
    return 0;
}


// I am a child. My pid is: 1159 my ppid is 1158
// I am a child. My pid is: 1160 my ppid is 1159
// I am a child. My pid is: 1161 my ppid is 1160
// I am a child. My pid is: 1162 my ppid is 1161
// I am a child. My pid is: 1163 my ppid is 1162



