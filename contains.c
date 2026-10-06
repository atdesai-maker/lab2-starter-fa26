#include <stdio.h>

int contains(int item, int arr[], int size) {
<<<<<<< HEAD
    for (int i = 0; i < size; i++) {
        if (arr[i] == item) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int arr[] = {2, 9, 2, 0, 2, 5};

    printf("contains 2? %d\n", contains(2, arr, 6));
    printf("contains 4? %d\n", contains(4, arr, 6));
    printf("contains 9? %d\n", contains(9, arr, 6));
    printf("contains 3? %d\n", contains(3, arr, 6));

    return 0;
}
=======
   for (int i = 0; i < size; ++i) {
	   if (arr[i] == item) {
		   return 1;
	   }
   }
   return 0;
   // Return 1 if "item" exists in "arr" (which has length "size"), otherwise 0
}

int main() {
   int arr[] = {2, 9, 2, 0, 2, 5};
   int size = sizeof(arr) / sizeof(arr[0]);

   // Call "contains" with an item of your choice, "arr", and the length of "arr".
   // Replace "0" in the following line with your function call
   printf("Result: %d\n", contains(2, arr, size));
   printf("Result: %d\n", contains(10, arr, size));
   printf("Result: %d\n", contains(5, arr, size));
}

>>>>>>> 48197011c295dcb3f3326a1707020768fa3ff663
