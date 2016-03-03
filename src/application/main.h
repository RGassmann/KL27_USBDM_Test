#ifndef MAIN_H
#define MAIN_H

#if defined (__cplusplus)
extern "C" {
#endif

/**
 * \brief  LED1 Toggle with a delay
 * \param  void
 * \return void
 */
int main(void);

/**
 * \brief  Silly delay
 * \param  void
 * \return void
 */
void delay(void);

/**
 * \brief  Button and LED initialization
 * \param  void
 * \return void
 */
void gpio_init(void);

#if defined (__cplusplus)
}
#endif

#endif
