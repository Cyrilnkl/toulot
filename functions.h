//  Project :    TAKUZU
//  Author :    Cyril NAKHLA, Eyfeline TALA
//  Role :      Holds all of the protoypes of functions of the program

#ifndef TAKUZU_INTERFACELES_H
#define TAKUZU_INTERFACELES_H
#include "stdbool.h"
//Graphics
void Get_size(int * size);
//bool menu_generation(int**full_grid, int*returned_size);
int** menu_generation(bool* created, int*returned_size);
void Menu_principal(int value);
void Menu_second_1();
void Menu_second_2();
void Menu_auto_mask(int** grid_existant, int size);
void Menu_enter_mask(int** grid_existant,int size);
void play_game(int** grid_solution, int size, int** mask);

//Entry checks
int clean_stdin();
void other_entry_check(int* input, int low_bound, int high_bound);

//Display
void display_grid(int** M, int size, int nb_line);
void display_used(int*valid_lines, int* used, int used_size);
void display_tested(int* valid_lines, int* tested, int tested_size);

//Tools
int number2binary(double nb, int size, int* original_size, int* binary);
int* decimal_line_array(int size, int* logical_size);
void valid_decimal_numbers(int* array, int* ls, int size );

int check_row_two_or_less(int* L, int size);
int check_column_two_or_less(int** M, int size, int nb_line);
int check_number_in_row(int *L, int size);
int check_number_in_column(int** M, int size, int nb_line);
int check_row(int* L, int size);
int check_column(int** M, int size, int nb_line);
bool check_same_column(int**M, int size);

int dichotomic_search(int searched, int* array, int ls);
void selection_sorting(int* array, int ls);

void add_line (int* grid_line, int* added_line, int size);
void add_ascending_order(int val, int* array, int* ls);

//Program functions
void display_all_valid_rows(int size);
int** generate_grid(int size, bool* created, bool automatic);

//Cyril
void play_game_new(int** grid_existant,int size);
int** create_pad(int size);
int** copy_pad_mask(int** M, int** L, int size);
int** Create_mask(int size, int** L);
void display_pad(int** L, int size);
int** manual_mask(int size);
int** print_pad_mask(int** M, int** L, int size);
void update(int** L, int size);
void move_entry_check(int size, int* row, char* col);
void play_coord(int** L, int size, int** solution, int *life, int**mask);
int end_game(int** L, int size);

//Last minute necessary changes
int check_up(int value, int ** game_grid, int row, int col);
int check_down(int value, int ** game_grid, int row, int col);
int check_right(int value, int ** game_grid, int row, int col);
int check_left(int value, int ** game_grid, int row, int col);
int check_in_between_left_right(int value, int** game_grid, int row, int col);
int check_in_between_up_down(int value, int** game_grid, int row, int col);
void block_position_check(int size, int line, int col, char* block );
int block_check(char block, int line, int col, int** game_grid);
int check_number_line_and_column(int size, int** game_grid, int line, int col);
int clues(int** game_grid, int size, int* row, int* column);
void manual_clues(int** game_grid, int size);
void auto_fill(int** solution, int size);
int auto_possible(int** solution, int size);
void return_check(int** game_grid, int size, int line, int col, int value, int** solution_grid, int*life);
int check_valid_move(int** game_grid, int size, int line, int col, int value);
void correct_move(int** solution_grid, int value, int line, int col);

//Base game grid
int** array();
int** array8();
int** array16();
#endif //TAKUZU_INTERFACELES_H
