// 4.Given a 2D array called cricketScores where each row represents an IPL match and columns represent runs scored by each team, write code to print the highest score from each match.

#include <stdio.h>

void main()
{
    int cricketScores[5][2] = {{150, 200}, {180, 175}, {220, 210}, {190, 195}, {205, 215}};
    int i, j, highestScore;

    printf("Highest Scores from Each Match:\n");
    for (i = 0; i < 5; i++)
    {
        highestScore = cricketScores[i][0];
        for (j = 1; j < 2; j++)
        {
            if (cricketScores[i][j] > highestScore)
            {
                highestScore = cricketScores[i][j];
            }
        }
        printf("Match %d: Highest Score = %d\n", i + 1, highestScore);
    }
}