int cmp(int *a, int *b) {
    return *a - *b;
}

int hIndex(int *citations, int citationsSize) {
    qsort(citations, citationsSize, sizeof(int), cmp);
    int h = 0, i = citationsSize - 1;
    while (i >= 0 && citations[i] > h) {
        h++;
        i--;
    }
    return h;
}
//关键在于数组排列后，每个元素只有大于H数，才能满足H指数条件。