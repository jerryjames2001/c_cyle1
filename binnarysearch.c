#include<stdio.h>
int
main ()
{
  int a[20], i, j, key, beg = 0, mid, last, n, temp;
  printf ("\nEnter the limit");
  scanf ("%d", &n);
  printf ("\nEnter the elements");
  for (i = 0; i < n; i++)
    scanf ("%d", &a[i]);
  printf ("\nEnter the key for search");
  scanf ("%d", &key);
  printf ("\nSorting array\n");
  for (i = 0; i < n; i++)
    for (j = i + 1; j < n; j++)
      if (a[i] > a[j])
	{
	  temp = a[i];
	  a[i] = a[j];
	  a[j] = temp;
	}

  for (i = 0; i < n; i++)
    printf ("%d\t", a[i]);
  last = n - 1;
  while (beg <= last)
    {
      mid = (beg + last) / 2;
      if (a[mid] == key)
	{
	  printf ("\n%d Found at position %d", key, mid + 1);
	  break;
	}
      else if (a[mid] < key)
	beg = mid + 1;
      else
	last = mid - 1;
    }
  return 0;
}
