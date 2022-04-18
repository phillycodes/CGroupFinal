//#include "AddressBook.h"
//#include "AddressBook.c"
//
//void dataEntry(Person* person) {
//	printf("Insert name: ");
//	gets(person->name);
//	printf("Insert surname: ");
//	gets(person->surname);
//	printf("Insert date of birth [mm/dd/yyyy]: ");
//	gets(person->date);
//	printf("Insert phone number: ");
//	gets(person->number);
//	printf("Insert street, city, state, and zipcode: ");
//	gets(person->address);
//}
//
//void printPerson(Person person) {
//	printf("Name: %s\n", person.name);
//	printf("Surname: %s\n", person.surname);
//	printf("Date of birth: %s\n", person.date);
//	printf("Number: %s\n\n", person.number);
//	printf("Address:", person.address);
//}
//
//void printAddressBook(Person* addbook[10]) {
//	for (int i = 0; i < DIM; i++) {
//		printPerson(addbook[i]);
//	}
//}

int main(void) {
	int numbers[10];
	const int NUMBERS_SIZE = 8;
	int i;
	int key;
	int keyIndex;

	printf("NUMBERS: ");
	for (i = 0; i < NUMBERS_SIZE; ++i) {
		printf("%d ", numbers[i]);
	}
	printf("\n");

	printf("Enter a Contact: ");
	scanf("%d", &key);

	keyIndex = doSearch(numbers, NUMBERS_SIZE, key);

	if (keyIndex == -1) {
		printf("%d was not found.\n", key);
	} else {
		printf("Found %d at index %d.\n", key, keyIndex);
	}

	return 0;
}

/*
* Name:				Main().
* Parameters:		None.
* Processes:		...
* Return Value:		None.
*/
int main(void) {
	do {
		// Menu Input
		printf("Calculator Menu.\n\n");
		printf("(A)dd Contact\n");
		printf("(R)emove Contact\n");
		printf("(S)Search\n");

		printf("e(X)it.\n");
		printf("Choice: ");
		// Selection for menu // Space helps prevent common white sapce error
		scanf_s(" %c", &bookMenuOption);

		// Menu Processing
		switch (bookMenuOption) {
			// Getting numbers
			case 'A':
			case 'a':
				createContact();
				break;
				// Number check if false will ask to run G or g.
				gotInput = true;
			// Addition
			case 'R':
			case 'r':
				if (gotInput == true) {
					delContact();
				} else {
					printf("Please enter G or g first.");
				}
				break;
			// Subtration
			case 'S':
			case 's':
				if (gotInput == true) {
					doSearch();
				} else {
					printf("Please enter G or g first.");
				}
				break;
			// Exit statement
			case 'X':
			case 'x':
				printf("Thank you for using our simple address book! Good-bye!\n\n");
				break;
			// Checking input
			default:
				printf("***Please pick a vaild input.***");
		}
	} while ((bookMenuOption != 'x') || (bookMenuOption != 'X'));

	return 0;
}
