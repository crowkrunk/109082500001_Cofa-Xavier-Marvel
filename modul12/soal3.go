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
