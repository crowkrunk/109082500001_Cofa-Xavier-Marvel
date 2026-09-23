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
