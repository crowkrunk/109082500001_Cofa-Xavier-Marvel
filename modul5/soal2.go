package main

import "fmt"

func row(n int) {
	if n < 1 {
		fmt.Println()
	} else {
		fmt.Print("*")
		row(n - 1)
	}
}

func main() {
	var input int
	fmt.Scan(&input)
	for i := 1; i <= input; i++ {
		row(i)
	}
}
