#include"../header/hash_table.h"

// ------------------------------------------------------------------------------------ 
void ScoreTable::create_hash_table()
{
    m_tableOfScore = new PlayerScore[m_nombreOfScore];
    for(int i = 0; i < m_nombreOfScore; i++)
    {
        m_tableOfScore[i].name[0] = '\0';
        m_tableOfScore[i].score = 0;
    }
}
// ------------------------------------------------------------------------------------ 
void ScoreTable::set_table_size()
{
    int value;
    cout << "entrez le nombre de score : ";
    cin >> value;
    m_nombreOfScore = value;
}
// ------------------------------------------------------------------------------------ 
bool ScoreTable::is_empty()
{
    for(int i = 0; i < m_nombreOfScore; i++)
    {
        if((m_tableOfScore[i].name[0] != '\0'))return false;
        
    }
    return true;
}
// ------------------------------------------------------------------------------------ 
void ScoreTable::add_player(PlayerScore* player)
{
    int i = 0;
    if(player == NULL) return;
    int position = hash_data(player->name);

    if(m_tableOfScore[position].name[0] != '\0')
    {
        cout << "Cet emplacement est deja utilise, nous ne pouvons pas ajouter d'elements\n";
        return;
    }

    strcpy(m_tableOfScore[position].name , player->name);
    m_tableOfScore[position].score = player->score;
}
// ------------------------------------------------------------------------------------ 
void ScoreTable::print_score()
{
    if(is_empty())cout << "Aucun score a afficher\n";

    else
    {
        for(int i = 0; i < m_nombreOfScore; i++)
        {
            if(m_tableOfScore[i].name[0] != '\0')
            {
                cout << "[" << i+1 << "] -" << m_tableOfScore[i].name << " : " << m_tableOfScore[i].score << endl;
            }else
            {
                cout << "[" << i+1 << "] -" <<  "-----------------------" << endl;
            }
        }    
    }
    
}
// ------------------------------------------------------------------------------------ 
void ScoreTable::find_player()
{
    PlayerScore essai;
    cout << "entrez le nom recherche :";
    cin.getline(essai.name, 256);
    int position = hash_data(essai.name);
    if(m_tableOfScore[position].name[0] != '\0' && strcmp(m_tableOfScore[position].name, essai.name)==0)
    {
        cout << m_tableOfScore[position].name << " : " << m_tableOfScore[position].score;
        return;
    }
    return;
}
// ------------------------------------------------------------------------------------ 
unsigned int ScoreTable::hash_data(char* name)
{
    unsigned int sizeOfName = char_lenght(name);
    unsigned int hash = 0;
    for(int i = 0; i < sizeOfName; i++)
    {
        hash = hash + name[i];
        hash = (hash * name[i]) % m_nombreOfScore;
    } 
    return hash;
}
// ------------------------------------------------------------------------------------ 
unsigned int ScoreTable::char_lenght(char * name)
{
    int lenght = 0;
    while(name[lenght] != '\0')
    {
        lenght++;
    }
    return lenght;
}