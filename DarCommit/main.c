#include <stdio.h>

void Incluir();
void Apagar();
void Buscar();
void Listar();

struct{
    char[50] Nome;
    int Telefone;
}Pessoa;

#define TamanhoBuffer sizeof(int);

int main(){
    void *pBuffer = malloc(sizeof(int));            /// malloc deve conter tamanho necessaŕio, ou seja, modificar dps
    int *Menu = (int*) pBuffer;
    //int *TamanhoBuffer = Menu++;
    //TamanhoBuffer = sizeof(*pBuffer);

    for(;;){
        printf("--Menu--\n\t1. Incluir nome\n\t2. Remover nome\n\t3. Listar nomes\n\t4. Sair\n");
        scanf("%d",Menu);
        switch(*Menu){
            case 1:
                Incluir(pBuffer);
                break;
            case 2:
                Apagar(pBuffer);
                break;
            case 3:
                Listar(pBuffer);
                break;
            case 4:
                exit(1);
                break;
        }
    }

    return 0;
}



void Incluir(void *pBuffer){
    Pessoa Contato = realloc(TamanhoBuffer+(sizeof(Pessoa)*cont);

}

void Apagar(void *pBuffer){

}

void Buscar(void *pBuffer){

}

void Listar(void *pBuffer){

}
