#include"header/hash_table.h"

int main(void)
{
    ScoreTable hashTable;
    hashTable.set_table_size();
    hashTable.create_hash_table();
    cin.ignore();
    PlayerScore test;
    for(int i = 0; i <  hashTable.m_nombreOfScore; i++)
    {
        cout << "entrez les noms : ";
        cin.getline(test.name, 200);
        cout << "entrez son score : ";
        cin >> test.score;
        cin.ignore();
        hashTable.add_player(&test);
    
    }
    hashTable.print_score();
    hashTable.find_player();
    return 0;
}