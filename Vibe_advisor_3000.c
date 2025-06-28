#include <stdio.h>
#include <string.h>

// Function declarations
void decodeMood(char mood[]);
void giveAdvice(char mood[]);

int main() {
    char mood[20];

    printf("Hey there, legend 👋\n");
    printf("How you feelin' today? (happy/sad/angry/chill): ");
    scanf("%s", mood);

    decodeMood(mood);
    giveAdvice(mood);

    return 0;
}

// Mood response function
void decodeMood(char mood[]) {
    if (strcmp(mood, "happy") == 0) {
        printf("😄 Yesss! You're glowing brighter than my terminal background!\n");
    } else if (strcmp(mood, "sad") == 0) {
        printf("😢 It's okay not to be okay. Let's turn that mood around, one byte at a time.\n");
    } else if (strcmp(mood, "angry") == 0) {
        printf("😡 Rage detected. Alert: Calm protocol initiating...\n");
    } else if (strcmp(mood, "chill") == 0) {
        printf("😎 Big zen energy. You're cooler than a C pointer.\n");
    } else {
        printf("🤔 Mysterious mood... You got layers, like an onion or a legendary codebase.\n");
    }
}

// Vibe advice function
void giveAdvice(char mood[]) {
    printf("\n✨ Here's your vibe check suggestion:\n");

    if (strcmp(mood, "happy") == 0) {
        printf("🎶 Make a playlist of your top 5 feel-good songs and dance like no one’s debugging.\n");
    } else if (strcmp(mood, "sad") == 0) {
        printf("📺 Watch a cozy movie or call a friend. Bonus points for hot chocolate.\n");
    } else if (strcmp(mood, "angry") == 0) {
        printf("💥 Do 10 pushups or scream into a pillow — then code something chaotic.\n");
    } else if (strcmp(mood, "chill") == 0) {
        printf("🍵 Brew some tea, open a window, and read a chapter of a random book.\n");
    } else {
        printf("🔮 Write in a journal or go for a mystery walk. Trust the algorithm of the universe.\n");
    }

    printf("🧠 And remember: Even bugs in your code can be beautiful.\n");
}
