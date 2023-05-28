#include <stdio.h>
#include <string.h>

struct Kunden {
int num;
char vorname[20];
char name[20];
};

int main(void) {
struct Kunden kunde1 = {1, "Hans", "Maurer"};
struct Kunden kunde2;

scanf("%d %s %s", &kunde2.num, kunde2.vorname, kunde2.name);

printf("%d: %s %s\n", kunde1.num, kunde1.vorname, kunde1.name);
printf("%d: %s %s\n", kunde2.num, kunde2.vorname, kunde2.name);

return 0;
}