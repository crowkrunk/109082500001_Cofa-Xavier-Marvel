# <h1 align="center">Laporan Praktikum Modul 14 - SORTING </h1>
<p align="center">[Cofa Xavier Marvel] - [109082500001]</p>

## Selection sort  

### 1. [Soal]
#### soal1.go

```go
package main

import "fmt"

var regions [1000][10000]int

func fillregion(n int) {
	var relatives, houses int
	i := 1
	fmt.Scan(&relatives)
	for relatives >= i {
		fmt.Scan(&houses)

		regions[n][i] = houses
		i++
	}
	regions[n][0] = i
}

func selectionSort(regionIdx int, totalElements int) {

	for i := 1; i < totalElements; i++ {
		minIndex := i

		for j := i + 1; j <= totalElements; j++ {
			if regions[regionIdx][j] < regions[regionIdx][minIndex] {
				minIndex = j
			}
		}

		if minIndex != i {
			regions[regionIdx][i], regions[regionIdx][minIndex] = regions[regionIdx][minIndex], regions[regionIdx][i]
		}
	}
}

func main() {
	var n int
	fmt.Scan(&n)

	for i := 0; i < n; i++ {
		fillregion(i)
	}

	fmt.Println()

	for i := 0; i < n; i++ {
		selectionSort(i, regions[i][0]-1)

		for j := 1; j <= regions[i][0]-1; j++ {
			fmt.Printf("%d ", regions[i][j])
		}

		fmt.Println()
	}
}
```
### Output Unguided :

##### Output 
![Screenshot Output Unguided 1_1](https://github.com/crowkrunk/109082500001_Cofa-Xavier-Marvel/blob/main/modul14/Output/Output-soal1.png)
[penjelasan]
This program uses a selection sort algorithm to sort houses for multiple regions. It reads the number of regions (n), then for each region, it collects a series of house values into a 2D array called regions, storing the amount of elements in the first index (regions[n]). After that, the program sorts each region's house values in ascending order using the selectionSort function, which repeatedly finds the minimum element and swaps it into the correct position. Finally, it prints the sorted house counts for each region on separate lines.
#### soal2.go

```go
package main

import "fmt"

var regions [1000][10000]int

func fillregion(n int) {
	var relatives, houses int
	i := 1
	fmt.Scan(&relatives)
	for relatives >= i {
		fmt.Scan(&houses)

		regions[n][i] = houses
		i++
	}
	regions[n][0] = i
}

func main() {
	var n int
	fmt.Scan(&n)

	for i := 0; i < n; i++ {
		fillregion(i)
	}

	fmt.Println()

	for i := 0; i < n; i++ {
		selectionSortWITHTHEFEAROFROADS(i, regions[i][0]-1)

		for j := 1; j <= regions[i][0]-1; j++ {
			fmt.Printf("%d ", regions[i][j])
		}

		fmt.Println()
	}
}

func selectionSortWITHTHEFEAROFROADS(regionI int, totalElements int) {
	for i := 1; i < totalElements; i++ {
		minIndex := i

		for j := i + 1; j <= totalElements; j++ {
			current := regions[regionI][j]
			minNum := regions[regionI][minIndex]

			swap := false

			currentOdd := current%2 != 0
			minOdd := minNum%2 != 0

			if currentOdd && !minOdd {
				swap = true
			} else if !currentOdd && minOdd {
				swap = false
			} else {
				if currentOdd {
					if current < minNum {
						swap = true
					}
				} else {
					if current > minNum {
						swap = true
					}
				}
			}

			if swap {
				minIndex = j
			}
		}

		if minIndex != i {
			regions[regionI][i], regions[regionI][minIndex] = regions[regionI][minIndex], regions[regionI][i]
		}
	}
}
```
### Output Unguided :

##### Output 
![Screenshot Output Unguided 1_1](https://github.com/crowkrunk/109082500001_Cofa-Xavier-Marvel/blob/main/modul14/Output/Output-soal2.png)
[penjelasan]
This program sorts house numbers for multiple regions using a selection sort algorithm that sorts odd numbers first, in ascending order, then even numbers, in descending order. The differance with program 1 resides in selectionSortWITHTHEFEAROFROADS, which iterates through the data and uses the comparison: if number is odd and the other number is even, the odd one is placed first; if both share the same parity, they are sorted by size ascending for the odd, descending for the even.
### 3. [Soal]
#### soal3.go

```go
package main

import "fmt"

const NMAX = 1000000

var data [NMAX]int

func main() {
	var n, k int
	fmt.Scan(&n, &k)
	fillArray(n)
	position(n, k)
}

func fillArray(n int) {
	var value int
	for i := 0; i < n; i++ {
		fmt.Scan(&value)
		data[i] = value
	}
}

func position(n, k int) {
	found := false
	for i := 0; i < n; i++ {
		if data[i] == k {
			fmt.Print(i)
			found = true
		}
	}
	if !found {
		fmt.Print("NOT FOUND")
	}
}

```
### Output Unguided :

##### Output 
![Screenshot Output Unguided 1_1](https://github.com/crowkrunk/109082500001_Cofa-Xavier-Marvel/blob/main/modul14/Output/Output-soal3.png)
[penjelasan]
This program finds if a k is in a array of numbers with length n, printing the index of the number in the array and printing NOT FOUND when not.
