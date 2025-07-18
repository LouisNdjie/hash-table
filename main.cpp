#include"header/hash_table.h"
#include"header/menu.h"

int main(void)
{
    ScoreTable hashTable;
    PlayerScore test;
    char* nom;
    bool running= true;
    void print_menu();
    int choix = 0;
    while(running)
    {
        void print_menu();
        cin >> choix;cin.ignore();
        switch(choix)
        {
            case 1: //creer le hash table
                system("cls");
                hashTable.set_table_size();
                hashTable.create_hash_table();
                break;

            case 2: //ajouter un element;
                system("cls");
                cout << "entrez le nom :";
                cin.getline(nom, 256);
                strcpy(test.name, nom);
                cout << "entrez son score :";
                cin >> test.score;
                hashTable.add_player(&test);
                break;

            case 3: // affichez les hash tables
                system("cls");
                hashTable.print_score();
                break;
            
            case 4: //recherhe;
                hashTable.find_player();
                break;

        }

        cout << "voulez vous cnotinuer ? [0-1] (0 = NO, 1 = YES): ";
        cin >> cont;cin.ignore();
        if(cont == 0)
        {
            running = false;
        } 
    }
    return 0;
}