////////////MODULO FUNC/////////////
struct funcionario {
    char nome[52]; //DECLARADO EM OP_MODULO_CLI
    int count;
    char cpf[13];
    char email[258]; //DECLARADO EM OP_MODULO_CLI
    char telefone[13]; //DECLARADO EM OP_MODULO_CLI
    char endereco[102]; //DECLARADO EM OP_MODULO_CLI
    char profissao[52];
    char salario[10];
    char status[9];
};

typedef struct funcionario Funcionario;

void modulo_func(void); 
char menu_funcionarios(void);
//FUNCOES CRUD
void cadastro_func(void);
void exibe_func(void);
void atualiza_func(void);
void deleta_func(void);

void exibe_cadastro_func(const Funcionario* func);
void grava_func(Funcionario* func);
void atualizando_func(Funcionario* func);
void deletando_func (Funcionario* func);
Funcionario* busca_func(void);
int busca_chave_func(char* cpf);
Funcionario* busca_resp_func(char* responsavel);
void atualizando_func_count(Funcionario* func);
//TELAS
Funcionario* tela_cadastro_func(void);
Funcionario* tela_exibe_func(void);
Funcionario* tela_atualiza_func(void);
Funcionario* tela_deleta_func(void);

//OP ZERADOR DE CONTADORES
void z_cont(void);
char confirma_zcont(void);
//FUNCAO
void mostra_zcont(void);
//TELA
void tela_mostra_zcont(void);
//FUNCOES LEITURA COM VALIDACAO
void le_profissao(char* profissao);
void le_salario(char* salario);
void le_cpf(char* cpf);
//RELATORIO
void exibe_cadastro_func_tabela(const Funcionario* func);
void lista_all_func(void);
void lista_month_func(void);
int comparar_contadores(void);