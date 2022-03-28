#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

enum instruc_asm {ADD, MUL, SOU, DIV, COP, AFC, JMP, JMF, INF, SUP, EQU, PRI};

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

void InitTI();
int Add_instruction4(enum instruc_asm key_word, int addr, int operand1, int operand2);
int Add_instruction3(enum instruc_asm key_word, int addr, int operand1);
int Add_instruction2(enum instruc_asm key_word, int addr);
Instruction Pop_instruction();
void Print_ti();
int get_nb_instructions();
void patchJMZ(int ligne_modif, int ligne_jump);
void patchJMP(int ligne_modif, int ligne_jump);

TableInstruction get_TI();
