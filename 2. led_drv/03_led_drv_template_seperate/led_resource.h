#ifndef _LED_RESOURCE_H
#define _LED_RESOURCE_H

/* GPIO3_0 */
/* bit[31:16] = group    那一组*/
/* bit[15:0]  = which pin  哪一个引脚*/

#define GROUP(x) (x>>16)
#define PIN(x)   (x&0xFFFF)
#define GROUP_PIN(g,p) ((g<<16) | (p))

// 定义一个引脚
struct led_resource {
	int pin;
};

struct led_resource *get_led_resouce(void);

#endif
