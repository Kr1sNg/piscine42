#include <unistd.h>

//function to check if a Q can be placed in broad[col] = row safely
int	is_safe(int board[10], int col, int row)
{
	int i = 0;
	while (i < col)
	{
	//Check if another Q is in the same row or diagonal
		if (board[i] == row || (board[i] - i) == (row - col) ||
			(board[i] + i) == (row + col))
			return (0);
		i++;
	}
	return (1);
}

//function to print a valid solution
void	print_solution(int board[10])
{
	char buffer[N + 1]; // for '\n'
	int	i = 0;
	while (i < 10)
	{
		buffer[i] = board[i] + '0';
		i++;
	}
	buffer[N] = '\n';
	write(1, buffer, N + 1);
}

//Recursive function to solve the puzzle
void	solve(int board[10], int col, int *count)
{
	if (col == N)
	{
		print_solution(board);
		(*count)++;
		return;
	}
	int row = 0;
	while (row < N)
	{
		if (is_safe(board, col, row))
		{
			board[col] = row;
			solve(board, col + 1, count);
		}
		row++;
	}
}

//Function to start the puzzle-solving process
int ft_ten_queens_puzzle(void)
{
	int board[10];
	int count = 0;
	solve(board, 0, &count); // Start solving from the first column
	return count;
}

int	main(void)
{

