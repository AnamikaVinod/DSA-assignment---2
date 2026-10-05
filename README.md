# Data Structures and Algorithms – Assignment 2

## Question 8 – Sorting Fixed-Length IDs

### Given Data

324, 125, 456, 218, 102, 389, 275, 147

---

## Part A – Merge Sort

Merge Sort was implemented and executed on the given data.

### Merge Sort Trace

1. 125 324
2. 218 456
3. 125 218 324 456
4. 102 389
5. 147 275
6. 102 147 275 389
7. 102 125 147 218 275 324 389 456

### Final Sorted Sequence

102 125 147 218 275 324 389 456

---

## Part B – Quick Sort

Quick Sort was implemented and executed on the same data.

### Quick Sort Partition Results

1. Pivot 147: 125 102 147 218 324 389 275 456
2. Pivot 102: 102 125
3. Pivot 456: 218 324 389 275 456
4. Pivot 275: 218 275 389 324
5. Pivot 324: 324 389

### Final Sorted Sequence

102 125 147 218 275 324 389 456

---

## Programs

The C source codes are provided in:

- merge_sort.c
- quick_sort.c

## Part C

The detailed comparison and complexity analysis of Merge Sort and Quick Sort is provided separately in `comparison_analysis.txt`.
