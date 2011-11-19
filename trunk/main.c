#include "core.h"
int main(){
	int i;
	sef_startup();
	vg_init(0x103);
	for (i=0; i<100; i++){
		vg_set_pixel(i,0,0x103);
		sleep(1);
	}


	vg_exit();
	return 0;
}
