#include <stdio.h>
#include <string.h>

void findDuplicateTeam(char teamNames[][50], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(teamNames[i], teamNames[j]) == 0)
            {
                printf("Duplicate Found: %s", teamNames[i]);
                return;
            }
        }
    }

    printf("No Duplicates Found");
}

int main()
{
    char teamNames[][50] =
    {
        "ByteForce",
        "CodeCrafters",
        "ByteForce"
    };

    int n = 3;

    findDuplicateTeam(teamNames, n);

    return 0;
}