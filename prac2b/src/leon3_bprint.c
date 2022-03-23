/*
 * leon3_bprint.c
 *
 *  Created on: 04/03/2022
 *      Author: victor
 */
#include "leon3_bprint.h"


int8_t leon3_print_string(char* str){
	while(*str != "\n"){
		leon3_putchar(*str);
		str++;
	}
	leon3_putchar("\n");
	if(leon3_uart_tx_fifo_is_empty()){
		return 0;
	}
}

int8_t leon3_print_uint8(uint8_t i){
	/*
	 * primero habria que parsear el uint8_t a un string
	 * luego comprobar la longiud de ese string
	 * dependiendo de la longitud hacer un for que printie ese array donde estan los nummeros
	 * finalmente comprobar si tx_fifo_is_empty
	 */
}
