#include "stm32f10x.h"                  // Device header
#include "Delay.h"                  // Device header
#include "OLED.h"
#include "CountSensor.h"

int main(void)
{
	OLED_Init();
	CountSensor_Init();
	
	/*显示静态字符串*/
	OLED_ShowString(1, 1, "Count:");	//1行1列显示字符串Count:
	
	while (1)
	{
		OLED_ShowNum(1, 7, CountSensor_Get(), 5);		//OLED不断刷新显示CountSensor_Get的返回值
	}
}
