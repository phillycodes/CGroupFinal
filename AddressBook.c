#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> 
#include "AddressBook.h"

// Variables
int SIZE = 20, i = 0;
double result = 0.0, avg = 0.0, max = 0.0;
double number[20] = { 0.0 };
char bookMenuOption = '\0';
bool gotInput = false;

/*
* Name:
* Parameters:
* Processes:
* Return Value:
*/
void createContact(Person *c[], *contactSize) {
	
	int endElement = *contactSize - 1;
	*c[endElement].name = (char *)malloc(sizeof(char *));
	printf("Enter First Name: ");
	gets(*c -> name);
	*c.surname = (char *)malloc(sizeof(char *));
	printf("Enter Surname: ");
	gets(*c -> surname);
	*c.phoneNumber = (char *)malloc(sizeof(char *));
	printf("Enter Phone Number: ");
	gets(*c -> phoneNumber);
	*c.dateOfBirth = (char *)malloc(sizeof(char *));
	printf("Enter Date of Birth [mm/dd/yyyy]: ");
	gets(*c -> dateOfBirth);
	*c.emailAddress = (char *)malloc(sizeof(char *));
	printf("Enter Email Address: ");
	gets(*c -> emailAddress);
	*c.mailingAddress = (char *)malloc(sizeof(char *));
	printf("Enter Mailing Address: ");
	gets(*c -> mailingAddress);
}

/*
* Name:
* Parameters:
* Processes:
* Return Value:
*/
void deleteContact() {
	printf("FIXME: deleteContact().")
}

/*
* Name:
* Parameters:
* Processes:
* Return Value:
*/
int doSearch(int numbers[], int numbersSize, int key) {
	int mid;
	int low;
	int high;

	low = 0;
	high = numbersSize - 1;

	while (high >= low) {
		mid = (high + low) / 2;
		if (numbers[mid] < key) {
			low = mid + 1;
		} else if (numbers[mid] > key) {
			high = mid - 1;
		} else {
			return mid;
		}
	}

	return -1; // not found
}

/*
* Name:
* Parameters:
* Processes:
* Return Value:
*/
void retrieveContact(Person person) {
	dis
}
