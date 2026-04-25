package main

import "fmt"

func hitungDenominasi(n int) (int, int, int) {
	l10000 := n / 10000
	m := n % 10000
	l2000 := m / 2000
	m = m % 2000
	l1000 := m / 1000
	return l10000, l2000, l1000
}

func main() {
	var input int
	fmt.Scan(&input)

	l10000, l2000, l1000 := hitungDenominasi(input)
	fmt.Printf("%d lembar 10000\n", l10000)
	fmt.Printf("%d lembar 2000\n", l2000)
	fmt.Printf("%d lembar 1000\n", l1000)
}
