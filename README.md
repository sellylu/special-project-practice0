#Special Project Practice0

For that I'm using MacBook, I'm now using library of opencv with directly creating **CMakeLists.txt**. If it's possible for computer with Windows using `cmake`, following steps below can compile exacutable files for Windows.

```
$ cd <source dir>
$ cmake .
$ make
$ ./<result file>
```

## Implementation
As we trace the code, we may found that how we fetch color codes is simply using a pointer pointing to the start of each row and iterately read color component of each pixel. Thus, I found that converting RGB image into grayscale actually related to the responsivity spectra of human cone cells. How to convert from RGB to grayscale is actually mix those three colors in proportion to 0.29:0.59:0.11.

[Reference for grayscale](http://atlaboratary.blogspot.tw/2013/08/rgb-g-rey-l-gray-r0.html)
