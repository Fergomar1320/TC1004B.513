#include <stdio.h>
#include <unistd.h>

int main(){
    printf("prueba");

    int pid = fork();

    if(pid == 0){
        printf("Soy el proceso hijo y me voy a convertir en ls\n");

        sleep(10);
        printf("Ya terminé");
    }else{
        printf("Soy el proceso padre\n");
    }

    return 0;
}