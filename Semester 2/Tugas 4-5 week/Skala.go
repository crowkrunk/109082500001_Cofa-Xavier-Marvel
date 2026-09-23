package main

import "fmt"

func zoom(x *int, y *int, inout string, s int) {
	if inout == "+" {
		*y *= s
		*x *= s
	} else if inout == "-" {
		*x /= s
		*y /= s
	}
}

func main() {
	var l, w, s int
	var inout string

	fmt.Scan(&l, &w, &inout, &s)
	zoom(&l, &w, inout, s)
	fmt.Print(l, w)
}
