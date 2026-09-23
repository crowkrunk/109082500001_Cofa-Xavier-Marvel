package main

import "fmt"

func power(x, n int) int {
	if n == 0 {
		return 1
	}
	if n == 1 {
		return x
	}
	return x * power(x, n-1)
}

func main() {
	var input1, input2 int
	fmt.Scan(&input1, &input2)
	fmt.Print(power(input1, input2))
}
