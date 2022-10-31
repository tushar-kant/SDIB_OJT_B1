
extern FILE *f;
extern struct person p;
void addrecord()
{
    system("cls");
    
    
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