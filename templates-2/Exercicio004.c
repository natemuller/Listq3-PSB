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
