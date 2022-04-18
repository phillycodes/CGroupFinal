
#ifndef PERSON_H
#define PERSON_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define DIM 10

typedef struct Person_struct {
	char name[40];
	char surname[40];
	char ID[20];
	char dateOfBirth[11];
	char phoneNumber[11];
	char emailAddress[100];
	char mailingAddress[100];
} Person;

void dataEntry(Person *);
void createContact(Person *);
void retrieveContact(char name[]);
void updateContact(char name[]);
void deleteContact(char name[]);
void printPerson(Person);
void printAddressBook(Person);

#endif
