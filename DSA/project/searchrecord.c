extern FILE *f;
extern struct person p;
void searchrecord()
{

    
    char name[100];
    f = fopen("project", "rb");
    if (f == NULL)
    {
        printf("\n error in opening\a\a\a\a");
        exit(1);
    }
    printf("\nEnter name of person to search\n");
    got(name);
    while (fread(&p,sizeof(p), 1, f) == 1)
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