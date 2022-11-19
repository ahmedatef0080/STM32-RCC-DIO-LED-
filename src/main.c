#include "MRCC_Interface.h"
#include "MGPIO_Interface.h"
#include "STD_Type.h"

#define MGPIO_CRL (*(volatile u32*)0x40010800)
#define MGPIO_ODR (*(volatile u32*)0x4001080C)
int main()

{
	Set_Clock_Type();
	Set_clock_For_Perhphiral(APB2_Bus,GPIO_C_EN);
	Set_clock_For_Perhphiral(APB2_Bus,GPIO_A_EN);
	SET_PIN_DIRECTION(MGPIOC ,MGPIO_PIN13 , OUT_PUT_PUSH_PULL_MODE_2_MHZ );
	SET_PIN_VALUE(MGPIOC, MGPIO_PIN13 , MGPIO_PIN_LOW);
	SET_PIN_DIRECTION(MGPIOA ,MGPIO_PIN1 , OUT_PUT_PUSH_PULL_MODE_2_MHZ );
	SET_PIN_VALUE(MGPIOA, MGPIO_PIN1 , MGPIO_PIN_HIGH);
	//MGPIO_CRL = 0x00000002;
	//MGPIO_ODR = 0x00000001;

	while(1)
	{

	}
	return 0;



}

