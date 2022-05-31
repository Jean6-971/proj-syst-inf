#include "TableJump.h"

TableJump TJ;

int Add_jump(int numero_instru) {
    TJ.tj[TJ.nb_jump] = numero_instru;
    TJ.nb_jump++;
    return 1;
}

int pop_last_jump(){
    TJ.nb_jump--;    
    return TJ.tj[TJ.nb_jump];
}

int pop_before_last_jump(){
    TJ.nb_jump--; 
    int numero_instru = TJ.tj[TJ.nb_jump - 1];
    TJ.tj[TJ.nb_jump - 1] = TJ.tj[TJ.nb_jump];
    return numero_instru;
}
