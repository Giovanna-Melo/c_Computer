////////////MODULO EQUIPES/////////////
struct equipe {
    char equipe[13];
    int count;
    char nome[52];
    char cpf[13];
};

typedef struct equipe Equipe;
//op_funcionarios já declarado no op_modulo_func
void modulo_equipes(void); 
//FUNCOES CRUD
void cadastro_equipe(void);
void exibe_equipe(void);
void atualiza_equipe(void);
void deleta_equipe(void);

void exibe_cadastro_eqp(const Equipe* eqp, int tamanho);
//TELAS
Equipe* tela_cadastro_equipe(void);
void tela_exibe_equipe(void);
void tela_atualiza_equipe(void);
void tela_deleta_equipe(void);
//FUNCOES LEITURA COM VALIDACAO
void le_equipe(char* equipe);
void le_quant_part(char* quant_part);
void le_chave_equipe(char* equipe);
void le_chave_func(char* cpf);