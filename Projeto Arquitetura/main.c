#include <stdio.h>
#include <stdlib.h>

struct listaLigada {
    int info;
    int listaLigada *p; //indica o proximo
};

typedef lista_ligada struct listaLigada *;

lista_ligada gerardor_lista(){//funçao gerardora de lista
    lista_ligada cabeca = malloc( sizeof(struct lista) );
    if( !cabeca ){
        return 0;//não há topo
    }
    cabeca->p = NULL;
    return cabeca;
}

void destruidor_lista(lista_ligada lista){
    if(!lista)
        return 0;// se nao houver lista
    lista_ligada no, no_atual = lista->p;
    while(no_atual){//apaga um por um e limpa a memoria
        no = no_atual->p;
        free(no_atual);
        no_atual=no;
    }
    free(lista);
}

lista_ligada adicionar_lista(lista_ligada lista, int info){
    if(!lista)
        return 0; //se nao houver lista
    lista_ligada no = malloc( sizeof(struct lista) );
    if (!no){
        return 0;//se nao houver no
    }
    no->info = info;
    no->p = NULL;
    lista_ligadalista_ligada no_atual = lista;
    while(no_atual->p != NULL)//busca o ultimo no
        no_atual = no_atual->p;
    no_atual->p = no;
    return no;
}

void visualizar_lista(lista_ligada lista){
    if (!lista)
        return;//se não houver lista finaliza

    lista_ligada no_atual = lista->p;
    while(no_atual) {//imprimi um por um
        printf("%d ", no_atual->info);
        no_atual = no_atual->p;
    }
    printf("\n");
}


//void label(char *linha){
//    char *tmp = linha;
//    char *al;
//
//    while(linha =! ":")
//    al == linha;
//    print(al);
//
//    free(*tmp);
//    free(*al);
//}

int main(void){
    lista_ligada lst = gerador_lista(), l;//cria uma lista

    l = adicionar_lista(lst, 1);//adiciona o primeiro no

    l = adicionar_lista(l, 2);//adiciona o segundo no
    lerLabel(adicionar_lista, l);

    l = adicionar_lista(l, 3);//adiciona o terceiro no
    lerLabel(adicionar_lista, l);

    lista_imprimir(lst);//apresenta a lsita
    destruidor_lista(lst);//destroi
}
