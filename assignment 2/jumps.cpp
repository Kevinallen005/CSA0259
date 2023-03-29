#include<stdio.h>
#include<limits.h>
int min_steps (int arr[], int n){
   int steps[n];
   int i, j;
   if (n == 0 || arr[0] == 0)
      return INT_MAX;
   steps[0] = 0;
   for (i = 1; i < n; i++){
steps[i] = INT_MAX;
      for (j = 0; j < i; j++){
         if (i <= j + arr[j] && steps[j] != INT_MAX){
            steps[i] = (steps[i] < (steps[j] + 1)) ? steps[i] : steps[j] + 1;
            break;
         }
      }
   }
   return steps[n - 1];
}
int main (){
   int arr[100];
   int n;
   printf ("Enter size of the array:");
   scanf ("%d", &n);
   printf ("Enter elements in the array:");
   for (int i = 0; i < n; i++){
      scanf ("%d", &arr[i]);
   }
   printf ("Minimum number of steps : %d", min_steps (arr, n));
   return 0;
}
