////////////MODULO EQUIPES/////////////
struct equipe {
    char equipe[13];
    int count;
    int qp;
    char nome[20][52];
    char cpf[20][13];
    char status[9];
};

typedef struct equipe Equipe;
//op_funcionarios já declarado no op_modulo_func
void modulo_equipes(void); 
//FUNCOES CRUD
void cadastro_equipe(void);
void exibe_equipe(void);
void atualiza_equipe(void);
void deleta_equipe(void);

void exibe_cadastro_eqp(const Equipe* eqp);
void grava_equipe(Equipe* eqp);
Equipe* busca_equipe(void);
Equipe* busca_resp_equipe(char* responsavel);
//TELAS
Equipe* tela_cadastro_equipe(void);
Equipe* tela_exibe_equipe(void);
void tela_atualiza_equipe(void);
void tela_deleta_equipe(void);
//FUNCOES LEITURA COM VALIDACAO
void le_equipe(char* equipe);
void le_quant_part(char* quant_part);
void le_chave_equipe(char* equipe);
void le_chave_func(char* cpf);