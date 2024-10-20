/* Eric Gallager
 * Second In-Class Assignment
 *
 * Problem:
 * For the second assignment you need to create a game which will pick a number
 * and allow a player to attempt to guess that number
 * * If the user guesses the correct number then the program should congratulate
 *   the user and end.
 * * If the user guesses an incorrect number, then the program should tell them
 *   if the guess was too high or too low, and then give the user a chance to
 *   guess again.
 * 
 * We can create a random number by using #include <time.h> and then using the
 * time on the system. To create a random number, the code is:
 * int RandomNumber = ((int)time(NULL)) % 100;
 */
 
#include <stdio.h>
#include <time.h>

int main(void)
{
    int solved, Guess, ret;
    solved = 0;
    /* RandomNumber will be a number between 0 and 99: */
    int RandomNumber = ((int)time(NULL)) % 100;
    /* Use a while loop to let the user guess again if they get it wrong the
     * first time: */
    while (solved != 1) {
#if defined(DEBUG) && (DEBUG > 1)
        printf("%i \n", RandomNumber); /* Statement used for debugging */
#endif /* DEBUG > 1 */
        printf("Guess a number from 0 to 99> "); /* Prompt */
        ret = scanf("%d", &Guess); /* Get user input */
        if (Guess < RandomNumber) {
            printf("\n Too Low! \n");
        } else if (Guess > RandomNumber) {
            printf("\n Too High! \n");
        } else if (Guess == RandomNumber) {
            printf("\n You Got It! \n"); /* Win statement */
            solved = 1; /* To get out of the "while" loop */
        } else {
            printf("\n There shouldn't be an ''else''. \n"); /* Just in case */
        };
#if defined(DEBUG) && (DEBUG > 1)
        printf("%i \n", solved); /* Statement for debugging */
#endif /* DEBUG > 1 */
    };
    return ret;
}
