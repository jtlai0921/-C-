#include <stdio.h>
#include "global.h"

void counttax(product *list){
	extern float tax_rate;	
	list->tax_price=list->org_price*tax_rate;
	return;	
}
	
