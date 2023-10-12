////////////MODULO ATEND/////////////
//ESTRUTURA
struct atendimento {
    char data_atend[20];
    char cpf_cnpj[16];
    char nome_eqp[52];
    char marca[22];
    char modelo[32];
    char nserie[22];
    char observacoes[502];
    char data[12];
    char responsavel[13];
    char situacao[11];
    char ordem_s[25];
};

typedef struct atendimento Atendimento;

void modulo_atend(void); 
char menu_atendimentos(void);
//FUNCOES CRUD
void cadastro_atend(void);
void exibe_atend(void);
void atualiza_atend(void);
void deleta_atend(void);

void exibe_cadastro_atd(const Atendimento* atend);
//TELAS
Atendimento* tela_cadastro_atend(void);
void tela_exibe_atend(void);
void tela_atualiza_atend(void);
void tela_deleta_atend(void);
//FUNCOES LEITURA COM VALIDACAO
void le_nome_eqp(char* nome_eqp);
void le_marca(char* marca);
void le_modelo(char* modelo);
void le_nserie(char* nserie);
void le_observacoes(char* observacoes);
void le_data(char* data);
void le_responsavel(char* responsavel);
void le_situacao(char* situacao);
void le_ordem (char* ordem_s);
void le_codigoatend(char* cod_atend);
