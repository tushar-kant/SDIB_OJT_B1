#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
struct person
{
    char name[35];
    char address[50];
    long int mble_no;
};
void menu();
void got();
void start();
void back();
void addrecord();
void listrecord();
void searchrecord();
int main()
{
    start();
    return 0;
}
void back()
{
    start();
}
void start()
{
    menu();
}
void menu()
{
    system("cls");
    printf("\t\tPHONEBOOK\t\n");
    printf("\t1.Add  \t2.List   \t3.Exit  \n\t4.Search\t");
    switch (getch())
    {
    case '1':
        addrecord();
        break;
    case '2':
        listrecord();
        break;
    case '3':
        exit(0);
        break;
    case '4':
        searchrecord();
        break;
    default:
        system("cls");
        printf("\n Enter any key");
        getch();
        menu();
    }
}
void addrecord()
{
    system("cls");
    FILE *f;
    struct person p;
    f = fopen("project", "ab+");
    printf("\n Enter name: ");
    got(p.name);
    printf("\nEnter the address: ");
    got(p.address);
    printf("\nEnter phone no.:");
    scanf("%ld", &p.mble_no);
    fwrite(&p, sizeof(p), 1, f);
    fflush(stdin);
    printf("\nrecord saved");
    fclose(f);
    printf("\n\nEnter any key");
    getch();
    system("cls");
    menu();
}
void listrecord()
{
    struct person p;
    FILE *f;
    f = fopen("project", "rb");
    if (f == NULL)
    {
        printf("\nfile opening error in listing :");
        exit(1);
    }
    while (fread(&p, sizeof(p), 1, f) == 1)
    {
        printf("\n\n\n YOUR RECORD IS\n\n ");
        printf("\nName=%s\nAdress=%s\nMobile no=%ld\n", p.name, p.address, p.mble_no);
        getch();
        system("cls");
    }
    fclose(f);
    printf("\n Enter any key");
    getch();
    system("cls");
    menu();
}
void searchrecord()
{
    struct person p;
    FILE *f;
    char name[100];
    f = fopen("project", "rb");
    if (f == NULL)
    {
        printf("\n error in opening\a\a\a\a");
        exit(1);
    }
    printf("\nEnter name of person to search\n");
    got(name);
    while (fread(&p, sizeof(p), 1, f) == 1)
    {
        if (strcmp(p.name, name) == 0)
        {
            printf("\n\tDetail Information About %s", name);
            printf("\nName:%s\naddress:%s\nMobile no:%ld\n", p.name, p.address, p.mble_no);
        }
        else{
            printf("file not found");
        }
    }
    fclose(f);
    printf("\n Enter any key");

    getch();
    system("cls");
    menu();
}
void got(char *name)
{

    int i = 0, j;
    char c, ch;
    do
    {
        c = getch();
        if (c != 8 && c != 13)
        {
            *(name + i) = c;
            putch(c);
            i++;
        }
        if (c == 8)
        {
            if (i > 0)
            {
                i--;
            }
            system("cls");
            for (j = 0; j < i; j++)
            {
                ch = *(name + j);
                putch(ch);
            }
        }
    } while (c != 13);
    *(name + i) = '\0';
}