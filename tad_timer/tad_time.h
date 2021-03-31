#ifndef _TAD_TIMER_H_
#define _TAD_TIMER_H_

#include <stdio.h>
#include <time.h>
#include <stdlib.h>


typedef struct timer Timer;


/**
 * Cria um timer
 */
Timer* timer_criar();

/**
 * Destroi um timer
 */
void timer_desalocar(Timer** t);

/**
 * Inicia o timer
 */
void timer_start(Timer* t);

/**
 * Para o timer
 */
void timer_stop(Timer* t);

/**
 * Reinicia o timer
 */
void timer_reset(Timer* t);

/**
 * Devolve o resultado.
 * Caso o timer ainda não tenha finalizado devolve -1
 */
float timer_resultado(Timer* t);

#endif
