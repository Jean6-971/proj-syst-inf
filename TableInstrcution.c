#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "TableInstruction.h"

enum instruc_asm {ADD, MUL, SOU, DIV, COP, AFC, JMP, JMF, IMF, SUP, EQU, PRI};


typedef struct Instruction {
    char id[16];
    int addr;
    char type[16];
    bool init;
    int depth;
} Symbole;


typedef struct TableSymbole {
    Symbole ts[1000];
    int nb_symboles;
    int depth;
} TableSymbole;

void Init(TableSymbole * p_TS) {
    p_TS->depth = 0;
    p_TS->nb_symboles = 0;
}

int Add_symb(TableSymbole * p_TS, char id[16], char type[16], bool init) {
    for(int i = 0; i < p_TS->nb_symboles; i++){
        if (!strcmp(id, p_TS->ts[i].id)) {
            printf("Symbole déja existant\n");
            return -1;
        }
    }
    Symbole symb;
    strcpy(symb.id, id);
    symb.addr = p_TS->nb_symboles; 
    strcpy(symb.type, type);
    symb.init = init;
    symb.depth = p_TS->depth;
    p_TS->ts[p_TS->nb_symboles] = symb;
    p_TS->nb_symboles++;
    return 1;
}

void Inc_depth(TableSymbole * p_TS) {
    p_TS->depth++;
}

int Dec_depth(TableSymbole * p_TS) {
    if (p_TS->depth == 0){
        printf("Profondeur déjà égale à 0\n");
        return -1;
    }
    p_TS->depth--;
    for(int i = 0; i < p_TS->nb_symboles; i++){
        if (p_TS->ts[i].depth > p_TS->depth) {
            p_TS->nb_symboles = i;
            break;
        }
    }
    return 1;
}

int Get_addr(TableSymbole TS, char id[16]) {
    for(int i = 0; i < TS.nb_symboles; i++){
        if (!strcmp(id, TS.ts[i].id)) {
            return TS.ts[i].addr;
        }
    }
    printf("Cet Id n'existe pas");
    return -1;
}

void Print_ts(TableSymbole TS) {
    printf(" ID | ADDR | TYPE | INIT | DEPTH\n");
    for(int i = 0; i < TS.nb_symboles; i++){
        printf(" %s    %d    %s     %d      %d  \n", TS.ts[i].id, TS.ts[i].addr, TS.ts[i].type, TS.ts[i].init, TS.ts[i].depth);
    }
}

int Set_init_symbole(TableSymbole * p_TS, char id[16]) {
    for(int i = 0; i < p_TS->nb_symboles; i++){
        if (!strcmp(id, p_TS->ts[i].id)) {
            p_TS->ts[i].init = true;
            return 0;
        }
    }
    printf("Ce symbole n'existe pas \n");
    return -1;
}

int main() {
    TableSymbole TS;
    Init(&TS);
    Add_symb(&TS, "abc", "int", 0);
    Inc_depth(&TS);
    Add_symb(&TS, "ab", "int", 1);
    Set_init_symbole(&TS, "abc");
    Print_ts(TS);
    return 0;
}