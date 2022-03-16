#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "TableInstruction.h"




typedef struct Instruction {
    enum instruc_asm key_word;
    int addr;
    int operand1;
    int operand2;
} Instruction;


typedef struct TableInstruction {
    Instruction ti[1000];
    int nb_instructions;
} TableInstruction;

void Init(TableInstruction * TI){
    TI->nb_instructions = 0;
}
int Add_instruction(TableInstruction * p_TI, enum instruc_asm key_word, int addr, int operand1, int operand2 = -999) {
    Instruction inst;
    inst.key_word = key_word;
    inst.addr = addr; 
    inst.operand1 = operand1;
    inst.operand2 = operand2;
    p_TI->ti[p_TI->nb_instructions] = inst;
    p_TI->nb_instructions++;
    return 1;
}

Instruction Pop_instruction(TableInstruction * p_TI){
    if (p_TI->nb_instructions==0){
        printf("Aucune instructions dans la table\n");
        Instruction inst;
        return inst;
    }
    p_TI->nb_instructions--;
    return p_TI->ti[p_TI->nb_instructions+1];
}

void Print_ti(TableInstruction TI) {
    printf(" KEY_WORD | ADDR | OPERAND1 | OPERAND2\n");
    for(int i = 0; i < TI.nb_instructions; i++){
        printf("       %d        %d       %d       %d \n", TI.ti[i].key_word, TI.ti[i].addr, TI.ti[i].operand1, TI.ti[i].operand2);
    }
}


int main() {
    TableInstruction TI;
    Init(&TI);
    Add_instruction(&TI, ADD, 0, 1, 2);
    Add_instruction(&TI, ADD, 1, 2, 3);
    Instruction test = Pop_instruction(&TI);
    Print_ti(TI);
    return 0;
}
