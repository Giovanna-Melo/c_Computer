////////////MODULO ATEND/////////////
//ESTRUTURA
struct atendimento {
    char codigo_atend[53];
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
    char status[9];
};

typedef struct atendimento Atendimento;

void modulo_atend(void); 
char menu_atendimentos(void);
//FUNCOES CRUD
void cadastro_atend(void);
void exibe_atend(void);
void atualiza_atend(void);
void deleta_atend(void);

void exibe_cadastro_atend(const Atendimento* atend);
void grava_atend(Atendimento* atend);
void atualizando_atend(Atendimento* atend);
void deletando_atend (Atendimento* atend);
Atendimento* busca_atend(void);
Atendimento* busca_atend_pec(char* codigop, char* codigoc);

//TELAS
Atendimento* tela_cadastro_atend(void);
Atendimento* tela_exibe_atend(void);
Atendimento* tela_atualiza_atend(void);
Atendimento* tela_deleta_atend(void);
//FUNCOES LEITURA COM VALIDACAO
void construir_codigo_atendimento(char* codigo_atend, const char* situacao, const char* cpf_cnpj, const char* ordem_s);
void le_nome_eqp(char* nome_eqp);
void le_marca(char* marca);
void le_modelo(char* modelo);
void le_nserie(char* nserie);
void le_observacoes(char* observacoes);
void le_data(char* data);
void le_responsavel(char* responsavel);
void le_situacao(char* situacao);
void le_ordem(char* cpf_cnpj, char* ordem_s);
void le_codigoatend(char* codigo_atend);
//RELATORIO
void lista_atend_ant(void);
void lista_atendc(void);
void lista_atendp(void);