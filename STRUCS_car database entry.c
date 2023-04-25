#include <stdio.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#include<string.h>

struct Honda_db
{
	char name[15];
	int seats;
	float cost;
	char category;
};

int main() {
	struct Honda_db x[10];
	int i;
	for(i=0; i<10; i++)
	{
		printf("Name: ");
		scanf("%s", &x[i].name);
		printf("Seating capacity: ");
		scanf("%d",&x[i].seats);
		printf("Cost: ");
		scanf("%f", &x[i].cost);
		printf("Category: ");
		scanf("%s", &x[i].category);
		printf("Name: %s \nseating_capacity: %d \nCost: %f \nCategory: %c\n\n\n", x[i].name, x[i].seats, x[i].cost, x[i].category);
	}
	return 0;
}
