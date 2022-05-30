#include "TableFonction.h"

TableFonction TF;

void InitTF(){
    TF.nb_fonctions = 0;
    TF.current_nb_arg = 0;
}

int Add_Function(char id[16], int numero_instru_debut, int numero_instru_fin ) {
    Fonction func;
    strcpy(func.id, id);
    func.numero_instru_debut = numero_instru_debut;
    func.numero_instru_fin = numero_instru_fin;
    TF.tf[TF.nb_fonctions] = func;
    TF.nb_fonctions++;
    return 1;
}

int get_numero_instru_debut(char id[16]){
    for(int i = 0; i < TF.nb_fonctions; i++){
        if (!strcmp(id, TF.tf[i].id)) {
            return TF.tf[i].numero_instru_debut;
        }
    }
    printf("Cette fonction n'existe pas \n");
    return -1;
}

int get_numero_instru_fin(char id[16]){
    for(int i = 0; i < TF.nb_fonctions; i++){
        if (!strcmp(id, TF.tf[i].id)) {
            return TF.tf[i].numero_instru_fin;
        }
    }
    printf("Cette fonction n'existe pas \n");
    return -1;
}

int get_addr_argument(){
    TF.current_nb_arg++;
    return 999 - TF.current_nb_arg + 1; 
}

void reset_addr_argument(){
    TF.current_nb_arg = 0;
}

/*void Print_ti() {
    printf(" KEY_WORD | ADDR | OPERAND1 | OPERAND2\n");
    for(int i = 0; i < TI.nb_instructions; i++){
        printf("       %d        %d       %d       %d \n", TI.ti[i].key_word, TI.ti[i].addr, TI.ti[i].operand1, TI.ti[i].operand2);
    }
}

int get_nb_instructions(){
    return TI.nb_instructions;
}

void patchJMF_function(int ligne_jump){
    TI.ti[TI.num_instru_JMF].operand1 = ligne_jump;
}

void patchJMP(int ligne_jump){
    TI.ti[TI.num_instru_JMP].addr = ligne_jump;    
}

TableInstruction get_TI() {
    return TI;
}

 int main() {
    InitTI();
    Add_instruction4(ADD, 0, 1, 2);
    Add_instruction4(ADD, 1, 2, 3);
    Instruction test = Pop_instruction();
    Print_ti();
    return 0;
} */
