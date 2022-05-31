#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

enum instruc_asm {ADD, MUL, SOU, DIV, COP, AFC, JMP, JMF, INF, SUP, EQU, PRI}; // LOAD = 12 ; STORE = 13

typedef struct Instruction {
    enum instruc_asm key_word;
    int addr;
    int operand1;
    int operand2;
} Instruction;

typedef struct TableInstruction {
    Instruction ti[1000];
    int nb_instructions;
    int num_instru_JMF, num_instru_JMP;
} TableInstruction;

void InitTI();
int Add_instruction4(enum instruc_asm key_word, int addr, int operand1, int operand2);
int Add_instruction3(enum instruc_asm key_word, int addr, int operand1);
int Add_instruction2(enum instruc_asm key_word, int addr);
Instruction Pop_instruction();
void Print_ti();
int get_nb_instructions();
void patchJMF(int numero_instru, int ligne_jump);
void patchJMP(int numero_instru, int ligne_jump);
void patchJMP_fonction(int numero_instru, int ligne_jump);

TableInstruction get_TI();
