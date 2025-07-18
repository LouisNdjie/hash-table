#ifndef __HASH_TABLE__
#define __HASH_TABLE__
#include<iostream>
#include<cstring>
#include<string>
using namespace std;

// ----------------strucrure definissant le score d'un joueur 
struct PlayerScore
{
    char name[50];
    int score;
};

// -------------------classe definssant la table de hashage
class ScoreTable
{

    public:
        int m_nombreOfScore;
        PlayerScore * m_tableOfScore;

    public:
        ScoreTable(){}; 
        void set_table_size(); 
        void create_hash_table(); 
        void add_player(PlayerScore*); 
        void find_player();
        void print_score(); 
        unsigned int hash_data(char*); 
        unsigned int char_lenght(char *); 
        bool is_empty(); 
        ~ScoreTable() 
        {
            delete[] m_tableOfScore;
        };
};
#endif
