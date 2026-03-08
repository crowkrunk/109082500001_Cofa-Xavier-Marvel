package main

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
