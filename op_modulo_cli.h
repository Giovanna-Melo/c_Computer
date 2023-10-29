//////////MODULO CLIENTES//////////
//ESTRUTURA
struct cliente {
    char nome[52];
    char tipo[4];
    char cpf_cnpj[16];
    char email[258];
    char telefone[13];
    char endereco[102];
    char status[9];
};

typedef struct cliente Cliente;
 
void modulo_cli(void); 
char menu_clientes(void);
char padrao_crud(void);
//FUNCOES CRUD
void cadastro_cli(void);
void exibe_cli(void);
void atualiza_cli(void);
void deleta_cli(void);

void exibe_cadastro(const Cliente* cli);
//TELAS
Cliente* tela_cadastro_cli(void);
void tela_exibe_cli(void);
void tela_atualiza_cli(void);
void tela_deleta_cli(void);
//FUNCOES LEITURA COM VALIDACAO
void le_nome(char* nome);
void le_tipo(char* tipo);
void le_cpf_cnpj(char* cpf_cnpj);
void le_email(char* email);
void le_telefone(char* telefone);
void le_endereco(char* endereco);
void le_chave_cpf_cnpj(char* cpf_cnpj);
