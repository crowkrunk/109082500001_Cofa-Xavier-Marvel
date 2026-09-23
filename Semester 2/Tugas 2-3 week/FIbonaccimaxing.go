package main

import "fmt"

func fibonaci(n int) int {
	if n == 1 {
		return n
	} else if n == 0 {
		return 0
	}
	return fibonaci(n-1) + fibonaci(n-2)
}

func main() {
	var input int
	var total int
	fmt.Scan(&input)
	for i := 0; i < input; i++ {
		total = total + fibonaci(i)
	}
	fmt.Print(total)
}
