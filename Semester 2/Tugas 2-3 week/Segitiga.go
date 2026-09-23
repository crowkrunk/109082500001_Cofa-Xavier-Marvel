package main

import "fmt"

func segitiga(a, b, c int) string {
	if (a*a)+(b*b) == (c*c) && a*b != 0 {
		return "segitiga"
	} else {
		return "bukan segitiga"
	}
}

func main() {
	var a, b, c int
	fmt.Scan(&a, &b, &c)
	fmt.Print(segitiga(a, b, c))
}
