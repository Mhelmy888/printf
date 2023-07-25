#include "main.h"

/**
* init_params - clears struct fields and reset buf
* @params: the parameters struct
* @ap: the argument pointer
* Return: void
*/
void init_params(params_t *params, va_list ap) {
    params->unsign = 0;
    params->plus_flag = 0;
    params->space_flag = 0;
    params->hashtag_flag = 0;
    params->zero_flag = 0;
    params->minus_flag = 0;
    params->width = 0;
    params->precision = UINT_MAX; // UINT_MAX is the correct constant for maximum unsigned int value
    params->h_modifier = 0;
    params->l_modifier = 0; // Corrected the '1' to 'l' for long modifier
    (void)ap; // This line is correct, but it doesn't do anything in this context.
}
