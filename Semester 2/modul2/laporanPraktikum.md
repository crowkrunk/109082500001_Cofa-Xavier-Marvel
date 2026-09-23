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
![Screenshot Output Unguided 1_1](https://github.com/crowkrunk/109082500001_Cofa-Xavier-Marvel/blob/main/modul2/Output/Output-soal1.png)
[penjelasan]What this program does is get three strings as inputs entering them into variables one, two, and three, then it outputs all strings combined with spaces separating them, after which it then assigns the variable one input to a variable temp, two to one, three to two, and temp to three in order, then outputs the new string combination with spaces separating them.
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
![Screenshot Output Unguided 1_1](https://github.com/crowkrunk/109082500001_Cofa-Xavier-Marvel/blob/main/modul2/Output/Output-soal2.png)
[penjelasan]
This is a program that receives input in the form of the colors of four test tubes five times. The program then displays a true value if the corresponding colors are 'merah', 'kuning', 'hijau', or 'ungu', respectively.

### 3. [Soal]
#### soal3.go

```go
package main

import "fmt"

func main() {

	var grams, kgprice, gramsprice, price int64

	fmt.Scan(&grams)

	kgprice = 10000 * (grams / 1000)

	if (grams % 1000) >= 500 {
		gramsprice = (grams % 1000) * 5
	} else {
		gramsprice = (grams % 1000) * 15
	}

	if (grams / 1000) >= 10 {
		price = kgprice
	} else {
		price = kgprice + gramsprice
	}

	fmt.Print(price)
}								

```
### Output Unguided :

##### Output 
![Screenshot Output Unguided 1_1](https://github.com/crowkrunk/109082500001_Cofa-Xavier-Marvel/blob/main/modul2/Output/Output-soal3.png)
[penjelasan]
This program calculates shipping cost based on parcel weight.
The shipping fee is IDR 10,000 per kg. If the remaining weight is less than 500 grams, the additional shipping fee is only IDR 5 per gram. However, if the weight is less than 500 grams, an additional fee of IDR 15 per gram will be charged. The remaining weight (less than 1 kg) is free if the total weight is more than 10 kg.
