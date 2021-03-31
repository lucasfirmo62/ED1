#include "tad_time.h"

typedef struct timer{
  double inicio;
  double fim;
  double tempo_final;
} Timer;

Timer* timer_criar(){
  Timer* time = (Timer*) malloc(sizeof(Timer));
  return time;
}

void timer_desalocar(Timer** t){
  free(*t);
  *t = NULL;
}

void timer_start(Timer* t){
  t->inicio = clock();
}

void timer_stop(Timer* t){
  t->fim = clock();
}

void timer_reset(Timer* t){
  t->inicio = 0;
  t->fim = 0;
}

float timer_resultado(Timer* t){
    t->tempo_final = (float)(t->fim - t->inicio)/CLOCKS_PER_SEC;
  return t->tempo_final;
}