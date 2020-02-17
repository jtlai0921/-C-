# ifndef _GLOBAL_H_
# define _GLOBAL_H_
typedef struct{
	char name[20];	
	int org_price;
	float tax_price;
}product;
void counttax(product *);
#endif

