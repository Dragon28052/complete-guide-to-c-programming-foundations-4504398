#include <stdio.h>

#define MAX_SIZE 30

int countDuplicates(int arr[], int n)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        int isDuplicate = 0;

        // Prüfen, ob dieses Element schon vorher vorkam
        for (int k = 0; k < i; k++)
        {
            if (arr[i] == arr[k])
            {
                isDuplicate = 1; // schon gezählt
                break;
            }
        }
        if (isDuplicate)
            continue;

        // Prüfen, ob das Element später nochmal vorkommt
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                break; // nur einmal pro Wert zählen
            }
        }
    }

    return count;
}

int main()
{
    int n;
    int arr[MAX_SIZE];

    printf("Gib die Anzahl der Elemente ein (maximal %d): ", MAX_SIZE);
    if (scanf("%d", &n) != 1 || n < 1 || n > MAX_SIZE)
    {
        printf("Ungueltige Eingabe.\n");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("element [%d] : ", i);
        scanf("%d", &arr[i]);
    }

    int result = countDuplicates(arr, n);
    printf("Total number of duplicate elements found in the array is : %d\n", result);

    return 0;
}
