#include <linux/module.h>
#include <linux/init.h>

int my_init(void){
	printk("hello - Hello, Kernel!\n");
	return 0;
}
