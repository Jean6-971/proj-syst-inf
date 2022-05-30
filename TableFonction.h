#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>


typedef struct Fonction {
    char id[16];
    int numero_instru_debut;
    int numero_instru_fin;
} Fonction;


typedef struct TableFonction {
    Fonction tf[1000];
    int nb_fonctions;
    int num_instru_JMF, num_instru_JMP;
    int current_nb_arg;

} TableFonction;

void InitTF();
int Add_Function(char id[16], int numero_instru_debut, int numero_instru_fin);
int get_numero_instru_debut(char id[16]); 
int get_numero_instru_fin(char id[16]); 
int get_addr_argument();
void reset_addr_argument();

/*void Print_ti();
int get_nb_instructions();
void patchJMF(int ligne_jump);
void patchJMP(int ligne_jump);

TableInstruction get_TI();*/
