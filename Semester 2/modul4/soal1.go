package main

import "fmt"

func F(n int) int {
	if n <= 1 {
		return 1
	}
	return n * F(n-1)
}

func P(n, r int) int {
	return F(n) / F(n-r)
}

func C(n, r int) int {
	return F(n) / (F(r) * F(n-r))
}

func main() {
	var a, b, c, d int
	fmt.Scan(&a, &b, &c, &d)

	fmt.Printf("%d %d\n", P(a, c), C(a, c))

	fmt.Printf("%d %d\n", P(b, d), C(b, d))
}
