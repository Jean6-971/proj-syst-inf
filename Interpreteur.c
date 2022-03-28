#include <stdio.h>
#include "Interpreteur.h"
#include "TableInstruction.h"


void interpreteur(){
    TableInstruction TI = get_TI();
    int tableau_entier[100];
    int nb_entier = 0;
    int current_instruction = 0;
    while (current_instruction < get_nb_instructions()){
        switch (TI.ti[current_instruction].key_word){
            case ADD:
                tableau_entier[TI.ti[current_instruction].addr] = tableau_entier[TI.ti[current_instruction].operand1] + tableau_entier[TI.ti[current_instruction].operand2];
                printf("ADD %d, %d, %d\n", TI.ti[current_instruction].addr, TI.ti[current_instruction].operand1, TI.ti[current_instruction].operand2);

                break;
            case MUL:
                tableau_entier[TI.ti[current_instruction].addr] = tableau_entier[TI.ti[current_instruction].operand1] * tableau_entier[TI.ti[current_instruction].operand2];
                printf("MUL %d, %d, %d\n", TI.ti[current_instruction].addr, TI.ti[current_instruction].operand1, TI.ti[current_instruction].operand2);
                break;
            case SOU:
                printf("SOU %d, %d, %d\n", TI.ti[current_instruction].addr, TI.ti[current_instruction].operand1, TI.ti[current_instruction].operand2);
                tableau_entier[TI.ti[current_instruction].addr] = tableau_entier[TI.ti[current_instruction].operand1] - tableau_entier[TI.ti[current_instruction].operand2];
                break;
            case DIV:
                printf("DIV %d, %d, %d\n", TI.ti[current_instruction].addr, TI.ti[current_instruction].operand1, TI.ti[current_instruction].operand2);
                tableau_entier[TI.ti[current_instruction].addr] = tableau_entier[TI.ti[current_instruction].operand1] / tableau_entier[TI.ti[current_instruction].operand2];
                break;
            case COP:
                printf("COP %d, %d\n", TI.ti[current_instruction].addr, TI.ti[current_instruction].operand1);
                tableau_entier[TI.ti[current_instruction].addr] = tableau_entier[TI.ti[current_instruction].operand1];
                break;
            case AFC:
                printf("AFC %d, %d\n", TI.ti[current_instruction].addr, TI.ti[current_instruction].operand1);
                tableau_entier[TI.ti[current_instruction].addr] = TI.ti[current_instruction].operand1;
                break;
            case JMP:
                printf("JMP %d\n", TI.ti[current_instruction].addr);
                current_instruction = TI.ti[current_instruction].addr;
                break;
            case JMF:
                printf("JMF %d, %d\n", TI.ti[current_instruction].addr, TI.ti[current_instruction].operand1);
                if (!tableau_entier[TI.ti[current_instruction].addr]){
                    current_instruction = TI.ti[current_instruction].operand1;
                }
                break;
            case INF:
                printf("INF %d, %d, %d\n", TI.ti[current_instruction].addr, TI.ti[current_instruction].operand1, TI.ti[current_instruction].operand2);
                tableau_entier[TI.ti[current_instruction].addr] = tableau_entier[TI.ti[current_instruction].operand1] < tableau_entier[TI.ti[current_instruction].operand2];
                break;
            case SUP:
                printf("SUP %d, %d, %d\n", TI.ti[current_instruction].addr, TI.ti[current_instruction].operand1, TI.ti[current_instruction].operand2);
                tableau_entier[TI.ti[current_instruction].addr] = tableau_entier[TI.ti[current_instruction].operand1] > tableau_entier[TI.ti[current_instruction].operand2];
                break;
            case EQU:
                printf("EQU %d, %d, %d\n", TI.ti[current_instruction].addr, TI.ti[current_instruction].operand1, TI.ti[current_instruction].operand2);
                tableau_entier[TI.ti[current_instruction].addr] = tableau_entier[TI.ti[current_instruction].operand1] == tableau_entier[TI.ti[current_instruction].operand2];
                break;
            case PRI:
                printf("PRI %d\n", TI.ti[current_instruction].addr);
                printf("%d\n", tableau_entier[TI.ti[current_instruction].addr]);
                break;
            default:
                printf("PROBLEME");  
        }
        current_instruction++;
    }
}


