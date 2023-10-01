////////////MODULO ATEND/////////////

void modulo_atend(void); 
char menu_atendimentos(void);
//FUNCOES CRUD
void cadastro_atend(void);
void exibe_atend(void);
void atualiza_atend(void);
void deleta_atend(void);
//TELAS
void tela_cadastro_atend(void);
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
void le_codigoatend(char* cod_atend);
