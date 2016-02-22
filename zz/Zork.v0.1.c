#include <stdio.h>

int main(void){

	int p = 1, q = 0;
	char move;
	printf(" Hi Mike, you're inside the house. \n You can move in all directions pressing n/e/w/s. \n Good luck over there!\n");

	while (q == 0){

		if (p == 1){
			move = getchar(); getchar();
			switch (move){
			case 'n':
				p = 2;
				printf("You’re in the kitchen\n");
				break;
			case 's':
				p = 5;
				printf("You’re in bedroom\n");
				break;
			case 'e':
				p = 4;
				printf("You’re in the bathroom\n");
				break;
			case 'w':
				printf("You can’t go there.there is a wall\n");
				break;
			case 'q':
				q = 1;
				break;
			}
		}
		if (p == 2){
			move = getchar(); getchar();
			switch (move){
			case 'n':
				printf("You can’t go there, there is a wall\n");
				break;
			case 's':
				p = 1;
				printf("You’re in dinning room\n");
				break;
			case 'e':
				p = 3;
				printf("You’re in the pantry\n");
				break;
			case 'w':
				printf("You can’t go there.there is a wall\n");
				break;
			case 'q':
				q = 1;
				break;
			}
		}

		if (p == 3){
			move = getchar(); getchar();
			switch (move){
			case 'n':
				printf("You can’t go there.there is a wall\n");
				break;
			case 's':
				p = 4;
				printf("You’re in bathroom\n");
				break;
			case 'w':
				p = 3;
				printf("You’re in the kitchen\n");
				break;
			case 'e':
				printf("You can’t go there.there is a wall\n");
				break;
			case 'q':
				q = 1;
				break;
			}
		}

		if (p == 4){
			move = getchar(); getchar();
			switch (move){
			case 'n':
				p = 3;
				printf("You’re in pantry\n");
				break;
			case 's':
				printf("You can’t go there.there is a wall\n");
				break;
			case 'w':
				p = 1;
				printf("You’re in the dinning room\n");
				break;
			case 'e':
				printf("You can’t go there.there is a wall\n");
				break;
			case 'q':
				q = 1;
				break;
			}
		}

		if (p == 5){
			move = getchar(); getchar();
			switch (move){
			case 'n':
				p = 1;
				printf("You’re in the dinning room\n");
				break;
			case 's':
				printf("You can’t go there.there is a wall\n");
				break;
			case 'w':
				printf("You can’t go there.there is a wall\n");
				break;
			case 'e':
				printf("You can’t go there.there is a wall\n");
				break;
			case 'q':
				q = 1;
				break;
			}
		}

	}
	getchar();
	system("pause");
	return 0;
}