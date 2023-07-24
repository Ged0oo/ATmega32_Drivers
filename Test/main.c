/*
 * File:   main.c
 * Author: Mohamed_Nagy
 * https://github.com/Ged0oo
 * https://www.linkedin.com/in/mohamednagyofficial/
 * Created on January 27, 2022, 8:41 PM
 */


#include "MCAL/DIO/DIO.h"
#include "ECU/LCD/LCD.h"
#include "ECU/LED/LED.h"

Std_ReturnType ret = E_NOT_OK;


const uint8 customChar1[] = {0x0E, 0x0A, 0x11, 0x11, 0x11, 0x11, 0x1F, 0x00};
const uint8 customChar2[] = {0x0E, 0x0A, 0x11, 0x11, 0x11, 0x1F, 0x1F, 0x00};
const uint8 customChar3[] = {0x0E, 0x0A, 0x11, 0x11, 0x1F, 0x1F, 0x1F, 0x00};
const uint8 customChar4[] = {0x0E, 0x0A, 0x11, 0x1F, 0x1F, 0x1F, 0x1F, 0x00};
const uint8 customChar5[] = {0x0E, 0x0A, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x00};
const uint8 customChar6[] = {0x0E, 0x0E, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x00};


chr_lcd_4bit_t lcd_1 =
{
	.lcd_rs.port=PORTB_INDEX,
	.lcd_rs.pin=GPIO_PIN1,
	.lcd_rs.pin_direction=GPIO_DIRECTION_OUTPUT,
	.lcd_rs.pin_logic=GPIO_LOW,

	.lcd_rw.port=PORTB_INDEX,
	.lcd_rw.pin=GPIO_PIN2,
	.lcd_rw.pin_direction=GPIO_DIRECTION_OUTPUT,
	.lcd_rw.pin_logic=GPIO_LOW,

	.lcd_en.port=PORTB_INDEX,
	.lcd_en.pin=GPIO_PIN3,
	.lcd_en.pin_direction=GPIO_DIRECTION_OUTPUT,
	.lcd_en.pin_logic=GPIO_LOW,

	.lcd_data[0].port=PORTA_INDEX,
	.lcd_data[0].pin=GPIO_PIN4,
	.lcd_data[0].pin_direction=GPIO_DIRECTION_OUTPUT,
	.lcd_data[0].pin_logic=GPIO_LOW,

	.lcd_data[1].port=PORTA_INDEX,
	.lcd_data[1].pin=GPIO_PIN5,
	.lcd_data[1].pin_direction=GPIO_DIRECTION_OUTPUT,
	.lcd_data[1].pin_logic=GPIO_LOW,

	.lcd_data[2].port=PORTA_INDEX,
	.lcd_data[2].pin=GPIO_PIN6,
	.lcd_data[2].pin_direction=GPIO_DIRECTION_OUTPUT,
	.lcd_data[2].pin_logic=GPIO_LOW,

	.lcd_data[3].port=PORTA_INDEX,
	.lcd_data[3].pin=GPIO_PIN7,
	.lcd_data[3].pin_direction=GPIO_DIRECTION_OUTPUT,
	.lcd_data[3].pin_logic=GPIO_LOW,

};


void main(void)
{
	ret = lcd_4bit_intialize(&lcd_1);

	/*
	ret = lcd_4bit_send_string_pos(&lcd_1, 1, 6, "Ged0oo");
	_delay_ms(500);




	ret = lcd_4bit_send_char_data_pos(&lcd_1, 2, 6, 'M');
	_delay_ms(500);


	ret = lcd_4bit_send_char_data(&lcd_1, 'S');
	ret = lcd_4bit_send_command(&lcd_1, _LCD_DISPLAY_SHIFT_LEFT);
	_delay_ms(500);


	ret = lcd_4bit_send_char_data(&lcd_1, 'P');
	ret = lcd_4bit_send_command(&lcd_1, _LCD_DISPLAY_SHIFT_LEFT);
	_delay_ms(500);

	ret = lcd_4bit_send_char_data(&lcd_1, 'H');
	_delay_ms(500);

	*/
	while (1)
	{


        ret = lcd_4bit_send_custom_char(&lcd_1, 1, 10, customChar1, 1); _delay_ms(200);
        ret = lcd_4bit_send_custom_char(&lcd_1, 1, 10, customChar2, 1); _delay_ms(200);
        ret = lcd_4bit_send_custom_char(&lcd_1, 1, 10, customChar3, 1); _delay_ms(200);
        ret = lcd_4bit_send_custom_char(&lcd_1, 1, 10, customChar4, 1); _delay_ms(200);
        ret = lcd_4bit_send_custom_char(&lcd_1, 1, 10, customChar5, 1); _delay_ms(200);

        ret = lcd_4bit_send_custom_char(&lcd_1, 1, 10, customChar6, 1); _delay_ms(200);

        ret = lcd_4bit_send_custom_char(&lcd_1, 1, 10, customChar5, 1); _delay_ms(200);
        ret = lcd_4bit_send_custom_char(&lcd_1, 1, 10, customChar4, 1); _delay_ms(200);
        ret = lcd_4bit_send_custom_char(&lcd_1, 1, 10, customChar3, 1); _delay_ms(200);
        ret = lcd_4bit_send_custom_char(&lcd_1, 1, 10, customChar2, 1); _delay_ms(200);
        ret = lcd_4bit_send_custom_char(&lcd_1, 1, 10, customChar1, 1); _delay_ms(200);
	}
}
