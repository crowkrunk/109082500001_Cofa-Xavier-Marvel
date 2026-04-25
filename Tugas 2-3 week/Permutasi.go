package main

import "fmt"

func factorial(n int) int {
	if n == 0 || n == 1 {
		return 1
	}
	return n * factorial(n-1)

}

func permutation(x, y int) int {
	if x >= y {
		return factorial(x) / factorial(x-y)
	} else {
		return factorial(y) / factorial(y-x)
	}
}

func main() {
	var a, b int
	fmt.Scan(&a, &b)
	fmt.Print(factorial(a), factorial(b), permutation(a, b))
}
