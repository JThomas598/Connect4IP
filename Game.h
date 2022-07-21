#ifndef GAME_H
#define GAME_H

//Buffer Length
#define BUFF_LEN 1024

//Message Types
#define MESS_RPS "RPS,%d" //Rock Paper Scissors Choice
#define MESS_RES "RES,%d" //Game Result
#define MESS_MOV "MOV,%d" //Opponent Move
#define MESS_ACK "ACK,%d" //Acknowledgement

//Player Info Message (color, secondary color, game piece, 
//		      name, greeting, win, loss, level, xp, goal xp)
#define MESS_PLY "PLY,%d,%d,%s,%s,%s,%u,%u,%lu,%lu,%lu,%lu"

//Color Codes
#define RED "\u001b[31m"
#define GREEN "\u001b[32m"
#define YELLOW "\u001b[33m"
#define BLUE "\u001b[34m"
#define MAGENTA "\u001b[35m"
#define RESET "\u001b[0m"

//Tile States
#define TILE_EMPTY "•"
#define PIECE_X "X"
#define PIECE_O "O"
#define PIECE_SQUARE "■"
#define PIECE_TRIANGLE "▲"
#define PIECE_HEART "♥"
#define PIECE_DIAMOND "♦"
#define PIECE_CLUB "♣"
#define PIECE_SPADE "♠"

//Field
#define FIELD_TEMPLATE \
"------------------------------------\
| %s | %s | %s | %s | %s | %s | %s |\n\
| %s | %s | %s | %s | %s | %s | %s |\n\
| %s | %s | %s | %s | %s | %s | %s |\n\
| %s | %s | %s | %s | %s | %s | %s |\n\
| %s | %s | %s | %s | %s | %s | %s |\n\
| %s | %s | %s | %s | %s | %s | %s |\n\
| %s | %s | %s | %s | %s | %s | %s |\n\
------------------------------------"

//Enumerations
typedef enum RpsChoice{ROCK, PAPER, SCISSORS} RpsChoice;
typedef enum GameResult{WIN, LOSE, TIE} GameResult;

//Game Command Prompt
#define PROMPT [conn4ip]:

#endif

