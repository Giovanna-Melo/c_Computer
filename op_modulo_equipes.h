////////////MODULO EQUIPES/////////////

//op_funcionarios já declarado no op_modulo_func
void modulo_equipes(void); 
//FUNCOES CRUD
void cadastro_equipe(void);
void exibe_equipe(void);
void atualiza_equipe(void);
void deleta_equipe(void);
//TELAS
void tela_cadastro_equipe(void);
void tela_exibe_equipe(void);
void tela_atualiza_equipe(void);
void tela_deleta_equipe(void);
//FUNCOES LEITURA COM VALIDACAO
void le_equipe(char* equipe);
void le_quant_part(char* quant_part);
void le_cpf(char* cpf);