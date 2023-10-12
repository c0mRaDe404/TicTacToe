#include <stdio.h>
#include <conio.h>



void board();
void game(char,int);
void move(char,int);
void winner(char);


char Board [9] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
int Running = 1;

int main()

{
	
	char players[2]={'X','O'};
	int position;
	
	char player1='O';
	char player2='X';
	
	board();
	
	
	while(Running){
	
  while(Running){
		printf("\n\n%c Need to Enter >> ",player1);	
		scanf("%d",&position);
		
		if(Board[position-1]!= ' '){
			
	printf("\n\nEnter Again !!! ");
	}
	
	else {
		game(player1,position);
		winner(player1);	
		break;
	}
		
  }
	
	
while(Running){
		printf("\n\n%c Need to Enter >> ",player2);		scanf("%d",&position);
		
		if(Board[position-1]!= ' '){
	
	printf("\n\nEnter Again !!! ");
	}
	
	else  {
		
		game(player2,position);
		winner(player2);
		break;
		
	}
}
	
  		
	
	
	}
		
			
	}
	
	
void game(char Player,int Position)
{
	
	board();		
	move(Player,Position);
		
}
	
	
	
void board()

{	
	// Board 	
	printf("| %c | %c | %c |\n",Board[0],Board[1],Board[2]);
		printf("| %c | %c | %c |\n",Board[3],Board[4],Board[5]);
			printf("| %c | %c | %c |",Board[6],Board[7],Board[8]);	
	}
	
	
void move(char Player,int Position)
{
	
	// Checks if the Board is Blank or Not
	
	if(Board[Position-1]==' '){
	Board[Position-1] = Player;
	clrscr();
	board();
	}
	

	
	

	
	
}


void winner(char Player)
{
	int Wins [][3]={{0,1,2},{3,4,5},{6,7,8},{0,3,6},{1,4,7},{2,5,8},{0,4,8},{2,4,6}};
	
	// row searching
	for (int row=0;row<3;row++)
	{
	if (Board[Wins[row][0]] == Player && Board[Wins[row][1]] == Player && Board[Wins[row][2]] == Player)
{ 
		
		printf("\n\n%c Wins :)",Player);
		Running = 0;
		
		
		}
	
}
		
				
    //column searching
    
    	for (int col=3;col<6;col++)
	{
	if (Board[Wins[col][0]] == Player && Board[Wins[col][1]] == Player && Board[Wins[col][2]] == Player)
{	
		printf("\n\n%c Wins :)",Player);
		Running = 0;
		}
				
	}
				
    //corner searching
    
    	for (int cor=6;cor<8;cor++)
	{
		if (Board[Wins[cor][0]] == Player && Board[Wins[cor][1]] == Player && Board[Wins[cor][2]] == Player){		
		printf("\n\n%c Wins :)",Player);
		
		Running = 0;
	
	
		}	
			
			
		
}

}



    
    
