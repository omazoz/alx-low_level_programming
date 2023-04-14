* **0.**
  * [0-malloc_checked.c](./0-malloc_checked.c): C function that returns a
  pointer to a newly-allocated space in memory using `malloc`.
    * If `malloc` fails, the function causes normal process termination with a status value
    of `98`.

* **1.**
  * [1-string_nconcat.c](./1-string_nconcat.c): C function that returns a pointer to a
  newly-allocated space in memory containing the concatenation of two strings.
    * The returned pointer contains `s1` followed by the first `n` bytes
    of `s2`, null-terminated.
    * If `n` is greater than or equal to the length of `s2`, the entire string `s2` is used.
    * If `NULL` is passed, the function treats the parameter as an empty string.
    * If the function fails - returns `NULL`.

* **2.**
  * [2-calloc.c](./2-calloc.c): C function that returns a pointer to a newly-allocated space
  in memory for an array, using `malloc`.
    * Allocates memory for an array of `nmemb` elements of `size` bytes each.
    * The memory is set to zero.
    * If `nmemb` = 0, `size` = `0`, or the function fail - returns `NULL`.

* **3,**
  * [3-array_range.c](./3-array_range.c): C function that returns a pointer to a
  newly-allocated space in memory containing an array of integers.
    * The array contains all the values from parameters `min` to `max`, inclusive,
    ordered from `min` to `max`.
    * If `min > max` or the function fails - returns `NULL`.

* **4.**
  * [100-realloc.c](./100-realloc.c): C function that reallocates a memory block using
  `malloc` and `free`.
    * The parameter `ptr` is a pointer to the memory previously allocated with
    a call to `malloc: malloc(old_size)`.
    * The paramter `old_size` is the size, in bytes, of the allocated space for `ptr`.
    * The paramter `new_size` is the new size, in bytes, of the new memory block.
    * The contens of `ptr` are copied to the newly-allocated space in the range from the
    start of `ptr` up to the minimum of `old_size` and `new_size`.
    * If `new_size` > `old_size`, the "added" memory is not initialized.
    * If `new_size` == `old_size`, the function returns `ptr`.
    * If `ptr` is `NULL`, the call is equivalent to `malloc(new_size)` for all values of
    `old_size` and `new_size`.
    * If `new_size` = 0 and `ptr` is not `NULL`, the call is equivalent to
    `free(ptr)` and the function returns `NULL`.


