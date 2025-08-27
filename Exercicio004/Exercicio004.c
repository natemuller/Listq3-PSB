/*  
Exercicio004.c

Feito por Natan de Aragão Müller no dia 27/08/2025 às xxhxx

Enunciado: Considere uma estrutura (struct) para armazenar dia, mˆes e ano para determinado dia (conforme declarac ̧  ̃ao
do exemplo abaixo) e implemente duas func ̧  ̃oes em C: uma para incrementar o dia (recebendo uma vari  ́avel da
estrutura por referˆencia) e outra para mostrar o dia na sa ́ıda padr  ̃ao no formato DD/MM/AAAA (recebendo a
vari  ́avel da estrutura por valor).
*/

#include <stdio.h>

typedef struct {
  int dia, mes, ano;
} dia_t;

void incrementa_dia(dia_t *d);
void mostra_dia(dia_t d);

int main() {
  dia_t d;
  scanf("%d %d %d", &d.dia, &d.mes, &d.ano);
  incrementa_dia(&d);
  mostra_dia(d);
  return 0;
}
