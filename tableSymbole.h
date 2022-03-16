typedef struct Symbole Symbole;

typedef struct TableSymbole TableSymbole;

void Init(TableSymbole * p_TS);

int Add_symb(TableSymbole * p_TS, char id[16], char type[16], bool init);

void Inc_depth(TableSymbole * p_TS);

int Dec_depth(TableSymbole * p_TS);

int Get_addr(TableSymbole TS, char id[16]);

void Print_ts(TableSymbole TS);

int Set_init_symbole(TableSymbole * p_TS, char id[16]);