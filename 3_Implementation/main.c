#include "stm32f4xx_hal.h"

int count = 0;
void wiperON1();
void wiperON2();
void wiperON3();
void Init_OnBoard_LEDs(void);
void configure_Button(void);
void delay(volatile int time_ms);

void main()
{
    Init_OnBoard_LEDs(); // calls LEDs GPIO pins initialization function
	configure_Button(); // call Push button GPIO pins initialization function
	//GPIO_PinState state; // Define a enum struct which contain boolean states

    	while(1)
    	{
    		if(HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_0))
    		{
    			count +=1;
    			delay(1000);
    		}
    		if (count == 1)
    		{
    			HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14, GPIO_PIN_SET);    //red ON
    		}

    		if (count ==2)
    		{
    			wiperON1();

    		}
    		if (count == 3)
    		{
    			wiperON2();
    		}
    		if (count ==4)
    		{
    			wiperON3();
    		}
    		if (count == 6)
    		{
    			HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14, GPIO_PIN_RESET);    //red OFF
    			count = 0;
    		}
   	}
}


void wiperON1()
{
	while(1)
    	{
    		delay(100);
    		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_15, GPIO_PIN_SET);   // blue ON
    		delay(100);
    		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_15, GPIO_PIN_RESET);	// blue OFF
    		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12, GPIO_PIN_SET);	// Green ON
    		delay(100);
    		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12, GPIO_PIN_RESET);	// Green OFF
    		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_13, GPIO_PIN_SET);	// orange ON
    		delay(100);
    		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_13, GPIO_PIN_RESET);	// orange OFF
    		delay(100);

    		if(HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_0))
    		{
    			count +=1;
  			break;
    		}
    	}
}

void wiperON2()
{
	while(1)
    	{
    		delay(25);
    		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_15, GPIO_PIN_SET);   // blue ON
    		delay(25);
    		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_15, GPIO_PIN_RESET);	// blue OFF
    		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12, GPIO_PIN_SET);	// Green ON
    		delay(25);
    		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12, GPIO_PIN_RESET);	// Green OFF
    		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_13, GPIO_PIN_SET);	// orange ON
    		delay(25);
    		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_13, GPIO_PIN_RESET);	// orange OFF
    		delay(25);

    		if(HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_0))
    		{
    			count +=1;
  			break;
    		}
    	}
}
void wiperON3()
{
	while(1)
    	{
    		delay(12);
    		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_15, GPIO_PIN_SET);   // blue ON
    		delay(12);
    		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_15, GPIO_PIN_RESET);	// blue OFF
    		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12, GPIO_PIN_SET);	// Green ON
    		delay(12);
    		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12, GPIO_PIN_RESET);	// Green OFF
    		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_13, GPIO_PIN_SET);	// orange ON
    		delay(12);
    		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_13, GPIO_PIN_RESET);	// orange OFF
    		delay(12);


    		if(HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_0))
    		{
    			count +=1;
    			HAL_GPIO_WritePin(GPIOD, GPIO_PIN_15, GPIO_PIN_SET);   // blue ON
    			delay(125);
    			HAL_GPIO_WritePin(GPIOD, GPIO_PIN_15, GPIO_PIN_RESET);	// blue OFF
    			break;
    		}
    	}
}

/* Function to configure PD12-PD15 pin of as digital output pins */
void Init_OnBoard_LEDs(void)
{
	 __HAL_RCC_GPIOD_CLK_ENABLE(); //Enable clock to GPIOD
	GPIO_InitTypeDef BoardLEDs; // declare a variable of type struct GPIO_InitTypeDef
	BoardLEDs.Mode = GPIO_MODE_OUTPUT_PP; // set pin mode to output
	BoardLEDs.Pin = GPIO_PIN_12|GPIO_PIN_13|GPIO_PIN_14|GPIO_PIN_15; // select pins PD12-PD15
	HAL_GPIO_Init(GPIOD, &BoardLEDs); // initialize PD12-PD15 pins by passing port name and address of BoardLEDs struct
}

/* Function to configure PA0 pin of as adigital input pin */
void configure_Button(void)
{
	__HAL_RCC_GPIOA_CLK_ENABLE(); //Enable clock to GPIOA
	GPIO_InitTypeDef PushButton;  // declare a variable of type struct GPIO_InitTypeDef
	PushButton.Mode = GPIO_MODE_INPUT; // set pin mode to input
	PushButton.Pin = GPIO_PIN_0;  // select pin PA0 only
	PushButton.Pull = GPIO_NOPULL; // set no internal pull-up or pull-down resistor
	HAL_GPIO_Init(GPIOA, &PushButton); //  initialize PA0 pins by passing port name and address of PushButton struct
}

/* ms delay function */
void delay(volatile int time_ms)
{
	int j;
      for(j = 0; j < time_ms*4000; j++); // excute NOP for 1ms
}
