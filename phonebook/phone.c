#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char name[50];
    char phone[20];
    char gender[10];
    char address[100];
    char email[50];
} Contact;

void addContact(Contact **contacts, int *numContacts);
void deleteContact(Contact **contacts, int *numContacts);
void displayContacts(Contact *contacts, int numContacts);
void saveContactsToFile(Contact *contacts, int numContacts);
void loadContactsFromFile(Contact **contacts, int *numContacts);

int main()
{

    Contact *contacts = NULL;
    int numContacts = 0;
    int choice;

    loadContactsFromFile(&contacts, &numContacts);

    do
    {
        printf("\n╔═════════════════════════════════════════╗\n");
        printf("║            Phonebook Application        ║\n");
        printf("╚═════════════════════════════════════════╝\n");
        printf("\n1. Add Contact\n");
        printf("2. Delete Contact\n");
        printf("3. Display Contacts\n");
        printf("4. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addContact(&contacts, &numContacts);
            break;
        case 2:
            deleteContact(&contacts, &numContacts);
            break;
        case 3:
            displayContacts(contacts, numContacts);
            break;
        case 4:
            printf("\nExiting the phonebook...\n");
            break;
        default:
            printf("\nInvalid choice. Please try again.\n");
        }

    } while (choice != 4);

    saveContactsToFile(contacts, numContacts);
    free(contacts);

    return 0;
}

void addContact(Contact **contacts, int *numContacts)
{
    Contact newContact;

    printf("\n╔═════════════════════════════════════════╗\n");
    printf("║                Add Contact              ║\n");
    printf("╚═════════════════════════════════════════╝\n");

    printf("\nEnter the name: ");
    scanf(" %[^\n]s", newContact.name);

    printf("Enter the phone number: ");
    scanf(" %[^\n]s", newContact.phone);

    printf("Enter the gender: ");
    scanf(" %[^\n]s", newContact.gender);

    printf("Enter the address: ");
    scanf(" %[^\n]s", newContact.address);

    printf("Enter the email: ");
    scanf(" %[^\n]s", newContact.email);

    (*numContacts)++;
    *contacts = realloc(*contacts, (*numContacts) * sizeof(Contact));
    (*contacts)[(*numContacts) - 1] = newContact;

    printf("\nContact added successfully.\n");
}

void deleteContact(Contact **contacts, int *numContacts)
{
    char deleteName[50];
    int found = 0;

    printf("\n╔═════════════════════════════════════════╗\n");
    printf("║               Delete Contact            ║\n");
    printf("╚═════════════════════════════════════════╝\n");

    printf("\nEnter the name of the contact to delete: ");
    scanf(" %[^\n]s", deleteName);

    for (int i = 0; i < *numContacts; i++)
    {
        if (strcmp((*contacts)[i].name, deleteName) == 0)
        {
            for (int j = i; j < *numContacts - 1; j++)
            {
                (*contacts)[j] = (*contacts)[j + 1];
            }
            (*numContacts)--;
            *contacts = realloc(*contacts, (*numContacts) * sizeof(Contact));
            printf("\nContact deleted successfully.\n");
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("\nContact not found in the phonebook.\n");
    }
}

void displayContacts(Contact *contacts, int numContacts)
{
    if (numContacts == 0)
    {
        printf("\nNo contacts found in the phonebook.\n");
        return;
    }

    printf("\n╔═════════════════════════════════════════╗\n");
    printf("║               Contact List              ║\n");
    printf("╚═════════════════════════════════════════╝\n");

    for (int i = 0; i < numContacts; i++)
    {
        printf("Name: %s| Phone Number: %s | Gender: %s | Address: %s | Email: %s | \n",
               contacts[i].name, contacts[i].phone, contacts[i].gender, contacts[i].address, contacts[i].email);
    }
}

void saveContactsToFile(Contact *contacts, int numContacts)
{
    FILE *file = fopen("/workspaces/codespaces-blank/phonebook/contacts.txt", "w");
    if (file == NULL)
    {
        printf("\nFailed to open file for writing.\n");
        return;
    }

    for (int i = 0; i < numContacts; i++)
    {
        fprintf(file, "%s,%s,%s,%s,%s\n", contacts[i].name, contacts[i].phone, contacts[i].gender,
                contacts[i].address, contacts[i].email);
    }

    fclose(file);
    printf("\nContacts saved to file.\n");
}

void loadContactsFromFile(Contact **contacts, int *numContacts)
{
    FILE *file = fopen("/workspaces/codespaces-blank/phonebook/contacts.txt", "r");
    if (file == NULL)
    {
        printf("\nNo existing contacts file found.\n");
        return;
    }

    char line[100];
    while (fgets(line, sizeof(line), file))
    {
        char *name = strtok(line, ",");
        char *phone = strtok(NULL, ",");
        char *gender = strtok(NULL, ",");
        char *address = strtok(NULL, ",");
        char *email = strtok(NULL, "\n");

        Contact newContact;
        strcpy(newContact.name, name);
        strcpy(newContact.phone, phone);
        strcpy(newContact.gender, gender);
        strcpy(newContact.address, address);
        strcpy(newContact.email, email);

        (*numContacts)++;
        *contacts = realloc(*contacts, (*numContacts) * sizeof(Contact));
        (*contacts)[(*numContacts) - 1] = newContact;
    }

    fclose(file);
    printf("\nContacts loaded from file.\n");
}
