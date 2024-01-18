#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

char Typewriter (char str[], char tts)
{
	int i = 0;
	while (i < strlen(str))
        {
                printf("%c",str[i]);
                fflush(stdout);
                sleep(tts);
                i++;
        }
}
int main (void) {
	Typewriter("Well", 1);
	Typewriter("Well\n", 1);
	Typewriter("Well\r", 1);
	Typewriter("We\rll\r", 1);
	Typewriter("\a\a\a", 1);
	Typewriter("a\tb\v", 1);
	Typewriter("\nwell", 1);
	Typewriter("\\\\\\", 1);
	Typewriter("45456456456456", 0);
        return 0;
}
