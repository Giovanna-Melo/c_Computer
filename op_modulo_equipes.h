////////////MODULO EQUIPES/////////////
typedef struct equipe Equipe;

struct equipe 
{
    char equipe[13];
    int count;
    int qp;
    char nome[20][52];
    char cpf[20][13];
    char status[9];
    Equipe* prox;
};

//op_funcionarios já declarado no op_modulo_func
void modulo_equipes(void); 
//FUNCOES CRUD
void cadastro_equipe(void);
void exibe_equipe(void);
void atualiza_equipe(void);
void deleta_equipe(void);

void exibe_cadastro_eqp(const Equipe* eqp);
void grava_equipe(Equipe* eqp);
void atualizando_equipe(Equipe* eqp);
void deletando_equipe (Equipe* eqp);
Equipe* busca_equipe(void);
int busca_chave_eqp(char* equipe);
Equipe* busca_resp_equipe(char* responsavel);
void atualizando_eqp_count(Equipe* eqp);
//TELAS
Equipe* tela_cadastro_equipe(void);
Equipe* tela_exibe_equipe(void);
Equipe* tela_atualiza_equipe(void);
Equipe* tela_deleta_equipe(void);
//FUNCOES LEITURA COM VALIDACAO
void le_equipe(char* equipe);
void le_quant_part(char* quant_part);
void le_chave_equipe(char* equipe);
void le_chave_func(char* cpf);
//RELATORIO
void exibe_cadastro_eqp_tabela(const Equipe* eqp);
void lista_all_equipes(void);
void lista_month_eqp(void);
int comparar_contadores_eqp(void);

void zera_eqp_count(void);