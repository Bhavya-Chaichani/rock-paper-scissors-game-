#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    /*
    0 for rock
    1 for scissors
    2 for paper
    */

    srand(time(0));

    int user;
    int user_score = 0;
    int computer_score = 0;

    while (1)
    {
        printf("\n0 for rock\n");
        printf("1 for scissors\n");
        printf("2 for paper\n");
        printf("3 for exit\n");

        printf("\n🙏🏻 Enter your choice : ");
        scanf("%d", &user);

        // Exit condition
        if (user == 3)
        {
            printf("\n👋 Game Over!\n");
            break;
        

        // Generate computer choice every round
        int computer = rand() % 3;

        printf("\n💻 COMPUTER CHOICE : %d\n\n", computer);

        if (computer == user)
        {
            printf("🤝 Match Draw!\n");
        }

        else if (user == 1 && computer == 0)
        {
            printf("💻 Computer won!\n");
            computer_score++;
        }

        else if (user == 2 && computer == 0)
        {
            printf("🎉 You won!\n");
            user_score++;
        }

        else if (user == 0 && computer == 1)
        {
            printf("🎉 You won!\n");
            user_score++;
        }

        else if (user == 2 && computer == 1)
        {
            printf("💻 Computer won!\n");
            computer_score++;
        }

        else if (user == 0 && computer == 2)
        {
            printf("💻 Computer won!\n");
            computer_score++;
        }

        else if (user == 1 && computer == 2)
        {
            printf("🎉 You won!\n");
            user_score++;
        }

        else
        {
            printf("❌ Invalid option!\n");
        }
    }
    printf("\n📊 SCORE BOARD\n");
    printf("You      : %d\n", user_score);
    printf("Computer : %d\n", computer_score);

    return 0;
}