//////////MODULO CLIENTES//////////
 
void modulo_cli(void); 
char menu_clientes(void);
char padrao_crud(void);
//FUNCOES CRUD
void cadastro_cli(void);
void exibe_cli(void);
void atualiza_cli(void);
void deleta_cli(void);
//TELAS
void tela_cadastro_cli(void);
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