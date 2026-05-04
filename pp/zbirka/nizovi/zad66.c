/*
    ? Написати програм за рад са низовима целих бројева. Имплементирати следеће функције:
    // а) додавање елемента на почетак низа;
    // б) промена вредности елемента на одређеној позицији у низу;
    // в) избацивање елемента са почетка низа;
    // г) проверити да ли одређени број постоји у низу;
    // д) вратити индекс елемента са одређеном вредношћу, ако та вредност постоји у низу (ако не постоји, вратити -1).
*/

#include <stdio.h>

void printArr(int *arr, int n)
{
    for (size_t i = 0; i < n; i++)
    {
        if (i != 0)
            printf(", ");

        printf("%d", arr[i]);
    }
    printf("\n");
}

void addToStart(int *arr, int *n)
{
    printf("Unesite broj koji ce biti dodat na pocetak niza: ");
    int x = 0;
    scanf("%d", &x);

    for (size_t i = *n; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[0] = x;
    (*n)++;
}

void popFromStart(int *arr, int *n)
{
    for (size_t i = 0; i < *n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    (*n)--;
}

void changeValAt(int *arr, int n, int idx, int new_val)
{
    if (idx >= n)
    {
        return;
    }

    arr[idx] = new_val;
}

int find(int *arr, int n, int val_to_find)
{
    for (size_t i = 0; i < n; i++)
    {
        if (arr[i] == val_to_find)
        {
            return i;
        }
    }

    return -1;
}

void containsStdIn(int *arr, int n)
{
    printf("Unesite broj koji zelite da proverite da li postoji: ");
    int val_to_find = 0;
    scanf("%d", &val_to_find);

    printf(find(arr, n, val_to_find) != -1 ? "Element %d postoji u nizu\n" : "Element %d ne postoji u nizu\n", val_to_find);
}

int main()
{
    int arr[10] = {4, 5, 7, 3, 8};
    int n = 5;

    printArr(arr, n);

    addToStart(arr, &n);
    printArr(arr, n);

    changeValAt(arr, n, 2, 12);
    printArr(arr, n);

    popFromStart(arr, &n);
    printArr(arr, n);

    containsStdIn(arr, n);

    return 0;
}