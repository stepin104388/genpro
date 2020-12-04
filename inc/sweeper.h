#ifndef MINESWEEPER_H_INCLUDED
#define MINESWEEPER_H_INCLUDED

int minefield_generator( int a, int b, int c );
void print_minefield( void );
int guess( int a, int b);
void boom( void );
void print_final_minefield( void );
void win( void );
void play_again( void );
void game_over( void );
#endif
