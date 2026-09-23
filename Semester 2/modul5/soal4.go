package main

import "fmt"

var m int = 1
var k int

func Nto1toN(n, k int) {
	if n == 1 {
		m = -1
	}
	if n == k && m == -1 {
		fmt.Print(k)
	} else {
		fmt.Print(n, " ")
		Nto1toN(n-m, k)
	}
}

func main() {
	var x int
	fmt.Scan(&x)
	Nto1toN(x, x)
}
