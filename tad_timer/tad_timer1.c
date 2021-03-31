#include "tad_time.h"

typedef struct timer{
    time_t inicio;
    time_t fim;
    time_t tempo_final;
}Timer;

Timer* timer_criar(){
    Timer* time = (Timer*) malloc(sizeof(Timer));
    return time;
};


void timer_desalocar(Timer** t){
    free(*t);
    *t = NULL;
};


void timer_start(Timer* t){
    time(&t->inicio);
};


void timer_stop(Timer* t){
    time(&t->fim);
};


void timer_reset(Timer* t){
    t->inicio = 0;
    t->fim = 0;
    t->tempo_final = 0;
};


float timer_resultado(Timer* t){
    t->tempo_final = (t->fim) - (t->inicio);
    return t->tempo_final;
};