#include <stdio.h>

int main(void){

	int p = 1, q = 0;
	char move;

	printf("You’re in the dinning room. If you want, you can take a walk inside the house.\nUse n/s/w/e to move and q to quit.\n");

	while (q == 0){

		if (p == 1){
			scanf_s("%c", &move);
			switch (move){
			case 'n':
				p = 2;
				printf("You’re in the kitchen.\n");
				break;
			case 's':
				p = 5;
				printf("You are in the bedroom. Sweet bed.zZZ\n");
				break;
			case 'e':
				p = 4;
				printf("You are in the bathroom\n");
				break;
			case 'w':
				printf("You can’t go there. There is a wall.\n");
				break;
			case 'q':
				q = 1;
				break;
			}
		}
		if (p == 2){
			scanf_s("%c", &move);
			switch (move){
			case 'n':
				printf("You can’t go there, there is a wall\n");
				break;
			case 's':
				p = 1;
				printf("You’re in dinning room, time to eat somethiiing\n");
				break;
			case 'e':
				p = 3;
				printf("You’re in the pantry. SUUUUUUUUUUU\n");
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
			scanf_s("%c", &move);
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
			scanf_s("%c", &move);
			switch (move){
			case 'n':
				p = 3;
				printf("You’re in pantry. SUUUUUUUUUUU\n");
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
			scanf_s("%c", &move);
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