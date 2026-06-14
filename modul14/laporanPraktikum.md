# <h1 align="center">Laporan Praktikum Modul 14 - ... </h1>
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


func main() {
	var input int
	var data []int

	for {
		fmt.Scan(&input)
		if input < 0 {
			break
		}
		data = append(data, input)
	}

	// insertsort
	for i := 1; i < len(data); i++ {
		temp := data[i]
		j := i
		for j > 0 && data[j-1] > temp {
			data[j] = data[j-1]
			j--
		}
		data[j] = temp
	}

	for i := 0; i < len(data); i++ {
		fmt.Print(data[i])
		if i < len(data)-1 {
			fmt.Print(" ")
		}
	}
	fmt.Println()

	if len(data) <= 1 {
		fmt.Println("Data berjarak 0")
		return
	}

	isConstant := true

	for i := 2; i < len(data); i++ {
		if data[i]-data[i-1] != data[1]-data[0] {
			isConstant = false
			break
		}
	}

	if isConstant {
		fmt.Printf("Data berjarak %d\n", data[1]-data[0])
	} else {
		fmt.Println("Data berjarak tidak tetap")
	}
}
```
### Output Unguided :

##### Output 
![Screenshot Output Unguided 1_1](https://github.com/crowkrunk/109082500001_Cofa-Xavier-Marvel/blob/main/modul14/Output/Output-soal3.png)
[penjelasan]
This program reads a sequence of integers, stopping at a negative value, sorts them using insertion sort, then checks if the sorted numbers form annsequence with a constant difference between elements. If the difference is constant, it prints that value; otherwise, it states that the sequence is not uniform.
### 4. [Soal]
#### soal3.go

```go
package main

import "fmt"

const NMAX int = 7919

type Buku struct {
	ID        string
	Judul     string
	Penulis   string
	Penerbit  string
	Eksemplar int
	Tahun     int
	Rating    int
}

var Pustaka [NMAX]Buku
var nPustak int
var RatingCari int
var N int

func DaftarkanBuku() ([]Buku, int) {
	var n int
	fmt.Scan(&n)

	pustaka := make([]Buku, n)

	for i := 0; i < n; i++ {
		fmt.Printf("Enter data for Book %d (ID, Judul, Penulis, Penerbit, Eksemplar, Tahun, Rating):\n", i+1)
		fmt.Scan(&pustaka[i].ID)
		fmt.Scan(&pustaka[i].Judul)
		fmt.Scan(&pustaka[i].Penulis)
		fmt.Scan(&pustaka[i].Penerbit)
		fmt.Scan(&pustaka[i].Eksemplar)
		fmt.Scan(&pustaka[i].Tahun)
		fmt.Scan(&pustaka[i].Rating)
	}

	return pustaka, n
}

func CetakTerfavorit(pustaka []Buku, n int) {
	maxIdx := 0
	for i := 1; i < n; i++ {
		if pustaka[i].Rating > pustaka[maxIdx].Rating {
			maxIdx = i
		}
	}

	b := pustaka[maxIdx]
	fmt.Println("Judul:", b.Judul)
	fmt.Println("Penulis:", b.Penulis)
	fmt.Println("Penerbit:", b.Penerbit)
	fmt.Println("Tahun:", b.Tahun)
}

func UrutBuku(pustaka []Buku, n int) []Buku {
	for i := 1; i < n; i++ {
		temp := pustaka[i]
		j := i - 1

		for j >= 0 && pustaka[j].Rating < temp.Rating {
			pustaka[j+1] = pustaka[j]
			j--
		}
		pustaka[j+1] = temp
	}
	return pustaka
}

func Cetak5Terbaru(pustaka []Buku, n int) {
	limit := 5
	if n < 5 {
		limit = n
	}

	for i := 0; i < limit; i++ {
		fmt.Println(pustaka[i].Judul)
	}
}

func CariBuku(pustaka []Buku, n int, r int) {
	low := 0
	high := n - 1
	ditemukan := false

	for low <= high {
		mid := (low + high) / 2
		ratingMid := pustaka[mid].Rating

		if ratingMid == r {
			ditemukan = true
			b := pustaka[mid]
			fmt.Println(b.Judul)
			fmt.Println(b.Penulis)
			fmt.Println(b.Penerbit)
			fmt.Println(b.Tahun)
			fmt.Println(b.Eksemplar)
			fmt.Println(b.Rating)
			break
		} else if ratingMid > r {
			low = mid + 1
		} else {
			high = mid - 1
		}
	}

	if !ditemukan {
		fmt.Println("Tidak ada buku dengan rating seperti itu")
	}
}

func main() {
	var pustaka []Buku
	var n int
	var Pilih int
	isRunning := true

	for isRunning {
		fmt.Println("1. Register Books (Daftarkan Buku)")
		fmt.Println("2. Print Favorite Book (Cetak Terfavorit)")
		fmt.Println("3. Sort Books (Urut Buku - Descending)")
		fmt.Println("4. Print Top 5 Books (Cetak 5 Terbaru)")
		fmt.Println("5. Search Book by Rating (Cari Buku)")

		fmt.Scan(&Pilih)

		switch Pilih {
		case 1:
			pustaka, n = DaftarkanBuku()
		case 2:
			CetakTerfavorit(pustaka, n)
		case 3:
			pustaka = UrutBuku(pustaka, n)
			fmt.Println("Books sorted successfully by rating (Descending).")
		case 4:
			pustaka = UrutBuku(pustaka, n)
			Cetak5Terbaru(pustaka, n)
		case 5:
			var r int
			fmt.Print("Enter rating to search: ")
			fmt.Scan(&r)
			pustaka = UrutBuku(pustaka, n)
			CariBuku(pustaka, n, r)
		case 6:
			fmt.Println("Exiting program. Goodbye!")
			isRunning = false
		}
	}
}

```
### Output Unguided :

##### Output 
![Screenshot Output Unguided 1_1](https://github.com/crowkrunk/109082500001_Cofa-Xavier-Marvel/blob/main/modul14/Output/Output-soal4(1).png)
![Screenshot Output Unguided 1_2](https://github.com/crowkrunk/109082500001_Cofa-Xavier-Marvel/blob/main/modul14/Output/Output-soal4(2).png)
[penjelasan]
This program is a library management system that allows users to register books, find the most highly-rated one, sort the collection by rating in descending order, display the top 5 books, and search for books by a specific rating using binary search.