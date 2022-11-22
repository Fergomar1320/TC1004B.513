#include <stdio.h>
#include <ctype.h>
#include <unistd.h>

int main(){
    char c;
    int contVoc = 0;
    int n = 0;
    do{
        n = read(STDIN_FILENO, &c, 1);
        if(c == 'a' || c == 'e'|| c == 'i' || c == 'o' || c == 'u'){
            contVoc ++;
        } else if(c == 'A' || c == 'E'|| c == 'I' || c == 'O' || c == 'U'){
            contVoc ++;
        }
    } while(n != 0);

    printf("El total fue: %d \n", contVoc);

    return 0;
}
 