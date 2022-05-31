#include <stdlib.h>
#include <stdio.h>

typedef struct TableJump {
    int tj[100];
    int nb_jump;
} TableJump;

int Add_jump(int numero_instru);
int pop_last_jump(); 
int pop_before_last_jump();

