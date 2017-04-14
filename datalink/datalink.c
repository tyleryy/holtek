#include "stream_parser/StreamParser.h"

static ThinkGearStreamParser parser1;
static ThinkGearStreamParser parser2;

void initialise_think_data(void)
{
	THINKGEAR_initParser(&parser1,PARSER_TYPE_PACKETS);
	THINKGEAR_initParser(&parser2,PARSER_TYPE_PACKETS);
}


u8 get_attention1(void)
{
	return parser1.attention;
}
u8 get_attention2(void)
{
	return parser2.attention;
}
u8 get_meditation1(void)
{
	return parser1.meditation;
}
u8 get_meditation2(void)
{
	return parser2.meditation;
}

void USART2_IRQHandler(void)
{
	uint8_t ch;

	if (USART_GetITStatus(USART2, USART_IT_RXNE) != RESET)
	{
		ch = USART_ReceiveData(USART2);
		THINKGEAR_parseByte(&parser1, ch );
	}

}

void USART3_IRQHandler(void)
{
	uint8_t ch;

	if (USART_GetITStatus(USART3, USART_IT_RXNE) != RESET)
	{
		ch = USART_ReceiveData(USART3);
		THINKGEAR_parseByte(&parser2, ch );
	}

}
void UART4_IRQHandler(void)
{
	uint8_t ch;

	if (USART_GetITStatus(UART4, USART_IT_RXNE) != RESET)
	{
		ch = USART_ReceiveData(UART4);
/*		usart_send_byte(UART4, ch);*/
	}

}
