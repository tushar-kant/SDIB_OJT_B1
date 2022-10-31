extern FILE *f;
extern struct person p;
void listrecord()
{
  
     
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