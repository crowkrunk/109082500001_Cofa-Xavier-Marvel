package main

import "fmt"

func secondFrom(H, M, S int) int {
	return (H * 60 * 60) + (M * 60) + S
}

func main() {
	var H, M, S int
	fmt.Scan(&H, &M, &S)
	fmt.Print("Hasil Konversi = ", secondFrom(H, M, S))
}
