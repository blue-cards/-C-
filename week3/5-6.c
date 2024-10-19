#include <stdio.h>  
  
int main()  
{  
    double temperature_F = 0;  
    double temperature_C = 0;  
    int input_valid;  
  
    // 首次读取温度（摄氏度）  
    input_valid = scanf("%lf", &temperature_C);  
  
    // 当输入有效时继续循环  
    while (input_valid == 1)  
    {  
        // 将摄氏度转换为华氏度  
        temperature_F = 1.8 * temperature_C + 32.0;  
          
        // 输出转换后的温度  
        printf("%.1lf ", temperature_F);  
          
        // 再次读取温度（摄氏度），检查输入是否有效  
        input_valid = scanf("%lf", &temperature_C);  
    }  
  
    // 当输入无效时，程序结束（例如输入非数字）  
    // 可以在这里添加额外的处理，比如打印错误消息  
  
    return 0;  
}