#include "TableInstruction.h"

TableInstruction TI;

void InitTI(){
    TI.nb_instructions = 0;
}
int Add_instruction4(enum instruc_asm key_word, int addr, int operand1, int operand2) {
    Instruction inst;
    inst.key_word = key_word;
    inst.addr = addr; 
    inst.operand1 = operand1;
    inst.operand2 = operand2;
    TI.ti[TI.nb_instructions] = inst;
    TI.nb_instructions++;
    return 1;
}

int Add_instruction3(enum instruc_asm key_word, int addr, int operand1) {
    Instruction inst;
    inst.key_word = key_word;
    if (key_word == 7) {
        TI.num_instru_JMF = TI.nb_instructions;
    }
    inst.addr = addr; 
    inst.operand1 = operand1;
    inst.operand2 = -999;
    TI.ti[TI.nb_instructions] = inst;
    TI.nb_instructions++;
    return 1;
}

int Add_instruction2(enum instruc_asm key_word, int addr) {
    Instruction inst;
    inst.key_word = key_word;
    if (key_word == JMP) {
        TI.num_instru_JMP = TI.nb_instructions;
    }
    inst.addr = addr; 
    inst.operand1 = -999;
    inst.operand2 = -999;
    TI.ti[TI.nb_instructions] = inst;
    TI.nb_instructions++; 
    return 1;
}

Instruction Pop_instruction(){
    if (TI.nb_instructions==0){
        printf("Aucune instructions dans la table\n");
        Instruction inst;
        return inst;
    }
    TI.nb_instructions--;
    return TI.ti[TI.nb_instructions+1];
}

void Print_ti() {
    printf(" KEY_WORD | ADDR | OPERAND1 | OPERAND2\n");
    for(int i = 0; i < TI.nb_instructions; i++){
        printf("       %d        %d       %d       %d \n", TI.ti[i].key_word, TI.ti[i].addr, TI.ti[i].operand1, TI.ti[i].operand2);
    }
}

int get_nb_instructions(){
    return TI.nb_instructions;
}

void patchJMF(int ligne_jump){
    TI.ti[TI.num_instru_JMF].operand1 = ligne_jump;
}

void patchJMP(int ligne_jump){
    TI.ti[TI.num_instru_JMP].addr = ligne_jump;    
}

TableInstruction get_TI() {
    return TI;
}

/* int main() {
    InitTI();
    Add_instruction4(ADD, 0, 1, 2);
    Add_instruction4(ADD, 1, 2, 3);
    Instruction test = Pop_instruction();
    Print_ti();
    return 0;
} */
