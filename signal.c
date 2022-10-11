#include <stdio.h>
#include <signal.h>
#include <unistd.h>

int con = 1;

void holaMundo(int signalNumber){
        if(signalNumber == 10){
            printf("Es la senal 10\n");
            con = 2;
        }
        else{
            printf("Es otra senal\n");
        }
}

void noMeMatas(int signalNumber){
    printf("jaja no me matas\n");
}

int main(){
    signal(12, holaMundo);
    signal(10, holaMundo);
    signal(12, noMeMatas);


    while(con == 1){
        printf("Estoy trabajando\n");
        sleep(1);
    }
    printf("Nunca llega aqui\n");
    return 0;
}