#include <stdio.h>

typedef enum
{
	Do=1, Re=2, Mi=3, Fa=4, So=5, La=6, Ti=7
} Syllable;

void Sound(Syllable sy)
{
	switch(sy)
	{
		case Do:
			puts("Do"); return;
		case Re:
			puts("Re"); return;
		case Mi:
			puts("Mi"); return;
		case Fa:
			puts("Fa"); return;
		case So:
			puts("So"); return;
		case La:
			puts("La"); return;
		case Ti:
			puts("Ti"); return;
	}
	puts("Sing together");
}

int main()
{
	Syllable tone;
	for(tone = Do; tone <= Ti; tone += 1)
		Sound(tone);

	return 0;
}
