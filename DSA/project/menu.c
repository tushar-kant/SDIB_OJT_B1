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