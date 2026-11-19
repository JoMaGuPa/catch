#include <raylib.h>;
#include <iostream>;

// CONSTRUCTS

// FUNCTIONS

// Title Screen
void showGameTitle()
{
    std::cout << "==================== \n"
              << "     WORD CATCH \n"
              << "====================\n"
              << "Made By Josep Maria\n";
};

// Player Stats
void showPlayerStats(int score, float playerSpeed)
{
    std::cout << "\nStarting score: " << score << '\n';
    std::cout << "Player speed: " << playerSpeed << '\n';
}

// Total points
int calculateScore(int wordsCaught)
{

    int result = wordsCaught * 10;

    return result;
}

// point system
void catchWord(int &score, int &wordsCaught)
{
    score += 10;
    wordsCaught++;
}

void showWord(Word word)
{
    std::cout << word.text << " - "
              << word.height << " - "
              << word.isCaught << '\n';
}

void updateWord(Word &word)
{
    if (word.height > 0 && !word.isCaught)
    {
        word.height--;
    }
}

// PRINCIPAL
int main()
{

    // Game Window
    InitWindow(1280, 720, "WORD CATCH");

    // FPS
    SetTargetFPS(30);

    // Game Loop
    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(WHITE);

        DrawText("Word Catch", 520, 300, 40, DARKBLUE);
        DrawText("Your adventure starts here!", 475, 360, 20, DARKGRAY);

        EndDrawing();
    }

    // Close game
    CloseWindow();

    return 0;
}