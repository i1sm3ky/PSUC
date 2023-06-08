#include <stdio.h>

// Function to sort array using insertion sort
int InsertionSort(int Arr[], int Size, int Insertion[]) {
    int Index, LastIndex, CurrentElement;

    for (Index = 1; Index < Size; Index++) {
        LastIndex = Index - 1;
        CurrentElement = Arr[Index];

        while ((LastIndex >= 0) && (Arr[LastIndex] > CurrentElement)) {
            Arr[LastIndex + 1] = Arr[LastIndex];
            LastIndex--;
        };
        Arr[LastIndex + 1] = CurrentElement;
    };

    for (Index = 0; Index < Size; Index++) Insertion[Index] = Arr[Index];
}

// Function to sort array using selection sort
int SelectionSort(int Arr[], int Size, int Selection[]) {
    int Index, Min, CurrentIndex, TempIndex;

    for (Index = 0; Index < Size; Index++) {
        Min = Arr[Index];
        for (CurrentIndex = Index + 1; CurrentIndex < Size; CurrentIndex++) {
            if (Arr[CurrentIndex] < Min) {
                Min = Arr[CurrentIndex];
                for (TempIndex = CurrentIndex - 1; TempIndex >= Index; TempIndex--) {
                    Arr[TempIndex + 1] = Arr[TempIndex];
                };
                Arr[TempIndex] = Min;
            };
        };
    };

    for (Index = 0; Index < Size; Index++) Selection[Index] = Arr[Index];
}

void main() {
    // Declaring variable
    int N, i;

    // Taking size of array from user
    printf("Enter size of the array: ");
    scanf("%d", &N);

    // Declaring arrays
    int Data[N], Insertion[N], Selection[N];

    // Taking input in the array Data[]
    for (i = 0; i < N; i++) {
        printf("Enter element: ");
        scanf("%d", &Data[i]);
    };

    // Calling sorting functions
    InsertionSort(Data, N, Insertion);
    SelectionSort(Data, N, Selection);

    // Printing sorted arrays
    printf("Data[] after Insertion Sort: ");
    for (i = 0; i < N; i++) printf("%d ", Insertion[i]);
    printf("\nData[] after Selection Sort: ");
    for (i = 0; i < N; i++) printf("%d ", Selection[i]);
    printf("\n");
}