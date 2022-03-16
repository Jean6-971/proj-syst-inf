

enum instruc_asm {ADD, MUL, SOU, DIV, COP, AFC, JMP, JMF, IMF, SUP, EQU, PRI};

typedef struct Instruction Instruction;
typedef struct TableInstruction TableInstruction;

void Init(TableInstruction * TI);
int Add_instruction(TableInstruction * p_TI, enum instruc_asm key_word, int addr, int operand1, int operand2);
Instruction Pop_instruction(TableInstruction * p_TI);
void Print_ti(TableInstruction TI);
