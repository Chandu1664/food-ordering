#include<stdio.h>
void main()
{
	int itemno;
	printf("enter a itemno: 1\n2\n3\n4\n5\n");
	scanf("%d",&itemno);
	switch(itemno)
	{
		case 1:
		printf("foof item=pizza\n");
		printf("prize=Rs 239");
		
		break;
		case 2:
			printf("food item=burger\n");
			printf("prize=Rs 129");
			break;
			case 3:
				printf("food item=pasta\n");
				printf("prize=Rs 179");
				break;
				case4:
					printf("food item=french fries\n");
					printf("prize=Rs 99");
					break;
					case 5:
						printf("food item=sandwich\n");
						printf("prize=Rs 149");
						break;
						default :
							printf("invalid choice");
	
			

		
	}
	
	
}
