# <h1 align="center">Laporan Praktikum Modul 2 - ... </h1>
<p align="center">[Cofa Xavier Marvel] - [109082500001]</p>

## Unguided 

### 1. [Soal]
#### soal1.go

```go
package main

import "fmt"

func main() {
	var (
		satu, dua, tiga string
		temp            string
	)
	fmt.Print("Masukan input string: ")
	fmt.Scanln(&satu)
	fmt.Print("Masukan input string: ")
	fmt.Scanln(&dua)
	fmt.Print("Masukan input string: ")
	fmt.Scanln(&tiga)
	fmt.Println("Output awal = " + satu + " " + dua + " " + tiga)
	temp = satu
	satu = dua
	dua = tiga
	tiga = temp
	fmt.Println("Output akhir = " + satu + " " + dua + " " + tiga)
}											

```
### Output Unguided :

##### Output 
![Screenshot Output Unguided 1_1](Laprak\template\modul2\output\Output-soal1.png)
[penjelasan]
What this program does is get three strings as inputs entering them into variables one, two, and three, then it outputs all strings combined with spaces separating them, after which is then assigns the variable one input to a variable temp, two to one, three to two, and temp to three in order, then outputs the new string combination with spaces separating them.

### 2. [Soal]
#### soal2.go

```go
import "fmt"

func main() {

	var merah, kuning, hijau, ungu string
	var berhasil bool
	berhasil = true

	for i := 1; i <= 5; i++ {

		fmt.Printf("\nPercobaan %d :", i)
		fmt.Scanln(&merah, &kuning, &hijau, &ungu)

		berhasil = merah == "merah" && kuning == "kuning" && hijau == "hijau" && ungu == "ungu" && berhasil

	}
	fmt.Printf("\nBERHASIL: %v", berhasil)
}
```
### Output Unguided :

##### Output 
![Screenshot Output Unguided 1_1](C:\Code\Laprak\template\modul2\Soal2.go)
[penjelasan]
Sebuah program yang menerima masukan berupa warna dari 4 gelas reaksi sebanyak 5 kali. Kemudian program akan menampilkan nilai benar jika warna yang sesuai berturut-turut adalah 'merah', 'kuning','hijau', dan 'ungu'.