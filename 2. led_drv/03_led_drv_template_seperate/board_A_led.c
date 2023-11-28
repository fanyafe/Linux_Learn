#include "led_resource.h"
// 结构体 
static struct led_resource board_A_led = {
	.pin = GROUP_PIN(3,1),     // 第三组里面的第一个引脚
};

struct led_resource *get_led_resouce(void)
{
	return &board_A_led;    // 返回
}

