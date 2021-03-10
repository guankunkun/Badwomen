#include "contact.h"
void menu()
{
	printf("**********************\n");
	printf("*****1.add   2.del****\n");
	printf("*****3search  4.modify\n");
	printf("*****5show   6sort****\n");
	printf("**********************\n");
}
enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT,
};
void test()
{
	int input = 0;
	struct Contact con;
	InitContact(&con);
	do
	{
		menu();
		printf("«Î—°‘Ò£∫<");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
				ADDContact();
				break;
		case DEL:
			break;
		case SEARCH:
			break;
		case MODIFY:
			break;
		case SHOW:
			break;
		case SORT:
			break;
		}
		whlie(1)
		{

		}
		


	}
}
int main()
{


	return 0;
}