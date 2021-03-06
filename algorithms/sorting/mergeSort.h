// Sorting algorithm with Data structure Array
// Worst case performance: O(n * log n)
// Best case performance: O(n * log n) typical,O(n) natural variant.
// Average case performance: O(n * log n)
// Worst case space complexity О(n) total, O(n) auxiliary

//Different from insertion sort and bubble sort,the performance of merge sort is quite stable

#define maxn 100

void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void merge(int a[],int l, int r) {
    if (r == l)
        return;
    if (r - l == 1) {
        if (a[r] < a[l])
            swap(&a[r], &a[l]);
        return;
    }
    int m = (r + l) / 2;
    merge(a,l, m);
    merge(a,m + 1, r);
    int buf[maxn];
    int xl = l;
    int xr = m + 1;
    int cur = 0;
    while (r - l + 1 != cur) {
        if (xl > m)
            buf[cur++] = a[xr++];
        else if (xr > r)
            buf[cur++] = a[xl++];
        else if (a[xl] > a[xr])
            buf[cur++] = a[xr++];
        else buf[cur++] = a[xl++];

    }
    for (int i = 0; i < cur; i++)
        a[i + l] = buf[i];
}
