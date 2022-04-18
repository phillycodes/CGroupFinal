#include "AddressBook.h"

// Variables & Constants
int i = 0;
char bookMenu = '\0';
bool gotInput = false;
//Variables for FIXME
int numbers[10];
const int NUMBERS_SIZE = 8;
int key;
int keyIndex;

int addContact() {
	dataEntry(Person* person);
}
int delContact() {
	
	
}
//FIXME
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
      }
      else if (numbers[mid] > key) {
         high = mid - 1;
      }
      else {
         return mid;
      }
   }
   
   return -1; // not found
}
//END OF FIXME

int main() {
	do {
		// Menu Input
		printf("Address Book Menu.\n\n");
		printf("(A)dd Contact.\n");
		printf("(R)emove Contact.\n");
		printf("(S)Search.\n");
        printf("(D)isplay.\n");
		printf("e(X)it.\n");
		printf("Choice: ");
		// Selection for menu // Space helps prevent common white sapce error
		scanf_s(" %c", &bookMenu);

		// Menu Processing
		switch (bookMenu) {
			// Getting INFO
			case 'A':
			case 'a':
				addContact();
				break;
				// Number Check if false will ask to run G or g.
				gotInput = true;
			// Remove
			case 'R':
			case 'r':
				if (gotInput == true) {
					delContact();
				}
				else { printf("Please enter G or g first."); }
				break;
			// Search
			case 'S':
			case 's':
				if (gotInput == true) {
				doSearch();
                printf("Name: ");
                for (i = 0; i < NUMBERS_SIZE; ++i) {
                printf("%d ", numbers[i]);
                }
                printf("\n");
   
                printf("Enter a Contact: ");
                scanf("%d", &key);
   
                keyIndex = doSearch(numbers, NUMBERS_SIZE, key);
   
                if (keyIndex == -1) {
                printf("%d was not found.\n", key);
                }
                else {
                printf("Found %d at index %d.\n", key, keyIndex);
                }
				}
				else { printf("Please enter G or g first."); }
				break;
            // Display all
            case 'D':
            case 'd':
                int print(void) {
	                Person* addBook = (Person*)malloc(DIM * sizeof(Person));
	                printf("DATA ENTRY\n\n");
	                for (int i = 0; i < DIM; i++) {
	            	    printf("Person %d:\n", i);
	            	    dataEntry(&addBook[i]);
	                }
	                printf("\n\nPRINTING ADDRESS BOOK...\n\n");
	                printAddressBook(&addBook);
	                return 0;
                    }
			// Exit statement
			case 'X':
			case 'x':
				printf("Thank you for using our simple address book! Good-bye!\n\n");
				break;
			// Checking input
			default:
				printf("***Please pick a vaild input.***");
				break;
		}
	} while ((bookMenu != 'x') || (bookMenu != 'X'));
	return 0;
}
