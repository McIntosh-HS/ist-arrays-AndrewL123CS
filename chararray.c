#include <stdio.h>

int main()
{
	char name[] = "Andrew Lee"; // edit this line
    char user[20];               // create this line and replace N with however many elements you think is necessary
	
	// Prompt the user for their name
	// Use scanf("%s", &user) to store the user's name
    printf("Enter your name: ");
	scanf("%s", &user);

	printf("Hello %s. Nice to meet you. My name is %s\n", &user, &name);

	return 0;
}
