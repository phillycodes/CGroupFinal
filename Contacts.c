/*
 * File Name:		Contacts.c
 * Names:			Philben Pierre
 * Course:			COP 2220C at Valencia College
 * Professor:		David Stendel
 * Description:
 */

// Preprocessor Directives
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "AddressBook.h"
#include "AddressBook.c"

/*
* Name:
* Parameters:
* Processes:
* Return Value:
*/
void displayMenu() {
	printf("(C)reate Contact");
	printf("(R)etrieve Contact");
	printf("(U)pdate Contact");
	printf("(D)elete Contact");
	printf("D(O)ne");
	printf("Choice: ");
}

/*
* Name:
* Parameters:
* Processes:
* Return Value:
*/
void menuProcessing(char *choice, Person *contact[], int *contactSize) {

	// Menu Selection Processing
	switch (*choice) {
		case 'c':
		case 'C':
			*contact = (Person*)realloc(*contact,*contactSize + 1 * sizeof(Person));
			createContact(*contact[], *contactSize);
			break;
		case 'r':
		case 'R':
			break;
		case 'u':
		case 'U':
			break;
		case 'd':
		case 'D':
			break;
		case 'o':
		case 'O':
			break;
		case 'h':
		case 'H':
			break;
		default:
			printf("\n\tError: Invalid Option!\n");
	}
}

/*
* Name:
* Parameters:
* Processes:
* Return Value:
*/
int main() {
	// Variables
	struct Person *arr_Contacts == NULL;
	int contactSize = 1;
	char menuSelection = '\n';

	do {
		// Array Size Configuration
		if (arr_Contacts == NULL) {
			arr_Contacts = (Person *)malloc(contactSize * sizeof(Person)); // Size is not set
		} else {
			arr_Contacts = (Person *)realloc(arr_Contacts, contactSize * sizeof(Person));
		}

		menuProcessing(&menuSelection, arr_Contacts[], &contactSize)

	} while (menuSelection != 'o' && menuChoice != 'O');
		free(arr_Contacts);
		
	return 0;
}