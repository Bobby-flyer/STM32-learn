#include"tim.h"
#include"encoder.h"

int iTim4Encoder = 0;

 int GetTim4Encoder(void)
 {
    iTim4Encoder = (short)(__HAL_TIM_GET_COUNTER(&htim4));   //先读取脉冲数
    __HAL_TIM_SET_COUNTER(&htim4, 0);              //清零脉冲数

     return iTim4Encoder;
 }