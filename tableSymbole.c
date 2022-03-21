#include "tableSymbole.h"

TableSymbole TS;

void InitTS(){
    TS.depth = 0;
    TS.nb_symboles = 0;
}

int Add_symb(char id[16], char type[16], bool init) {
    for(int i = 0; i < TS.nb_symboles; i++){
        if (!strcmp(id, TS.ts[i].id)) {
            printf("Symbole déja existant\n");
            return -1;
        }
    }
    Symbole symb;
    strcpy(symb.id, id);
    symb.addr = TS.nb_symboles; 
    strcpy(symb.type, type);
    symb.init = init;
    symb.depth = TS.depth;
    TS.ts[TS.nb_symboles] = symb;
    TS.nb_symboles++;
    return 1;
}

int Add_symb_temp(char type[16]) {
    Symbole symb;
    strcpy(symb.id, "temp");
    symb.addr = TS.nb_symboles; 
    strcpy(symb.type, type);
    symb.init = true;
    symb.depth = TS.depth;
    TS.ts[TS.nb_symboles] = symb;
    TS.nb_symboles++;
    return 1;
}

void Inc_depth(){
    TS.depth++;
}

int Dec_depth(){
    if (TS.depth == 0){
        printf("Profondeur déjà égale à 0\n");
        return -1;
    }
    TS.depth--;
    for(int i = 0; i < TS.nb_symboles; i++){
        if (TS.ts[i].depth > TS.depth) {
            TS.nb_symboles = i;
            break;
        }
    }
    return 1;
}

int Get_addr(char id[16]) {
    for(int i = 0; i < TS.nb_symboles; i++){
        if (!strcmp(id, TS.ts[i].id)) {
            return TS.ts[i].addr;
        }
    }
    printf("Cet Id n'existe pas");
    return -1;
}

int Get_addr_top() {
    return TS.ts[TS.nb_symboles - 1].addr;
}

int Get_addr_second() {
    return TS.ts[TS.nb_symboles - 2].addr;
}

void free_temp_top(){
    TS.nb_symboles--;
}

void Print_ts() {
    printf(" ID | ADDR | TYPE | INIT | DEPTH\n");
    for(int i = 0; i < TS.nb_symboles; i++){
        printf(" %s    %d    %s     %d      %d  \n", TS.ts[i].id, TS.ts[i].addr, TS.ts[i].type, TS.ts[i].init, TS.ts[i].depth);
    }
}

int Set_init_symbole(char id[16]) {
    for(int i = 0; i < TS.nb_symboles; i++){
        if (!strcmp(id, TS.ts[i].id)) {
            TS.ts[i].init = true;
            return 0;
        }
    }
    printf("Ce symbole n'existe pas \n");
    return -1;
}

/* int main() {
    InitTS();
    Add_symb("abc", "int", 0);
    Inc_depth();
    Add_symb("ab", "int", 1);
    Set_init_symbole("abc");
    Print_ts();
    return 0;
} */
