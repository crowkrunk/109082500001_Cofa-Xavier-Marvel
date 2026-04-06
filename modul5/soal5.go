package main

import "fmt"

func allodds(n int, i int) {
	if i > n {
		return
	}
	if i%2 == 1 {
		fmt.Print(i, " ")
	}
	allodds(n, i+1)
}

func main() {
	var input int
	fmt.Scan(&input)
	allodds(input, 1)
}
