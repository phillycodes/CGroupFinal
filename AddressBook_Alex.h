#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h> 
#define DIM 10

struct person {
    char ID[20];
	char name[40];
	char surname[40];
	char number[11];
    char address[1000];
    char email[50];
};

typedef struct person Person;

void dataEntry(Person* person);
{
    printf("Enter their ID: \n\n");
	gets(person->ID);
	printf("Insert name: \n\n");
	gets(person->name);
	printf("Insert surname: \n\n");
	gets(person->surname);
	printf("Insert Address Street, City, State, ZIP: \n\n");
	gets(person->address);
	printf("Insert phone number: \n\n");
	gets(person->number);
	printf("Insert email: \n\n");
	gets(person->email);
}
void printPerson(Person person);
{
    printf("ID: %s\n", person.ID);
    printf("Name: %s\n", person.name);
    printf("Surname: %s\n", person.surname);
    printf("Address: %s\n", person.address);
    printf("Number: %s\n\n", person.number);
    printf("Email: %s\n\n0", person.email);
}
void printAddressBook(Person *addBook) {
    for (int i = 0; i < DIM; i++) {
        printPerson(addBook[i]);
    }
}