#include "usart.h"
#include "playvoice.h"
#include "init.h"
#include "datalink/datalink.h"
#include "stdio.h"

#define MAINDEBUG

#ifdef MAINDEBUG
#define main_debug(fmt, ...)  printf(fmt, ##__VA_ARGS__)
#else
#define main_debug(fmt, ...)
#endif

int main(void)
{
	initialise_board();
	s16 signal1 = 0, signal2 = 0, attention1 = 0, attention2 = 0;
	u16 i=0,j=0;
	main_debug("start");
	while (1)
	{
//		signal2=-2;
//		signal2 = get_data(SIGNAL2);
//		if (signal2 > 0)
//		{
//			main_debug("signal-------%d----",signal2);
//			//play_voice(POOR_SINGAL);
//		}
//		else if (signal2 = 0)
//		{
//			attention2=get_data(ATTENTION2);
//			main_debug("attention:<%d>",attention2);
//
//		}
		main_debug("<%d>",get_data(SIGNAL2));
		for(i=0;i<0xffff;i++)
		{
			for(j=0;j<0xff;j++)
			{
				;
			}
		}


	}
}
