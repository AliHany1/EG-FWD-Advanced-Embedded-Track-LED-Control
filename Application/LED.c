//**********************************************************************************************************************
 /*  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  LED.c
 *        \brief  
 *
 *      \details  
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "LED.h"

/**********************************************************************************************************************
*  LOCAL MACROS CONSTANT\FUNCTION
*********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL DATA 
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 *********************************************************************************************************************/


/******************************************************************************
* \Syntax          : void LED_ON(LED_ID ID)       
* \Description     : Describe this service                                    
*                                                                             
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : parameterName   Parameter Describtion                     
* \Parameters (out): None                                                      
* \Return value:   : Std_ReturnType  E_OK
*                                    E_NOT_OK                                  
*******************************************************************************/
void LED_ON(LED_ID ID)
{
	if(ID == RED_LED)
    {
        Dio_WriteChannel(PORTF,PIN1,STD_HIGH);     
        Dio_WriteChannel(PORTF,PIN2,STD_LOW);
        Dio_WriteChannel(PORTF,PIN3,STD_LOW);

    }
	else if(ID == BLUE_LED)
    {
        Dio_WriteChannel(PORTF,PIN1,STD_LOW);
        Dio_WriteChannel(PORTF,PIN2,STD_HIGH);
        Dio_WriteChannel(PORTF,PIN3,STD_LOW);

    }
    else 
    {
        Dio_WriteChannel(PORTF,PIN1,STD_LOW);
        Dio_WriteChannel(PORTF,PIN2,STD_LOW);
        Dio_WriteChannel(PORTF,PIN3,STD_HIGH);
    }
}

/******************************************************************************
* \Syntax          : void LED_OFF(LED_ID ID)       
* \Description     : Describe this service                                    
*                                                                             
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : parameterName   Parameter Describtion                     
* \Parameters (out): None                                                      
* \Return value:   : Std_ReturnType  E_OK
*                                    E_NOT_OK                                  
*******************************************************************************/
void LED_OFF(LED_ID ID)
{
    if(ID == RED_LED)
    {
        Dio_WriteChannel(PORTF,PIN1,STD_LOW);
    }
    else if(ID == BLUE_LED)
    {
        Dio_WriteChannel(PORTF,PIN2,STD_LOW);
    }
    else 
    {
        Dio_WriteChannel(PORTF,PIN3,STD_LOW);
    }

}

/**********************************************************************************************************************
 *  END OF FILE: LED.c
 *********************************************************************************************************************/