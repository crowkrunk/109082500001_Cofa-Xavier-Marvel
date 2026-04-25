package main

import "fmt"

func mengurutkan(a *int, b *int) {
	if *a > *b {
		*a, *b = *b, *a
	}
}

func main() {
	var x, y int
	for {
		fmt.Scan(&x, &y)
		if x == y {
			break
		}
		mengurutkan(&x, &y)
		fmt.Printf("%d %d\n", x, y)
	}
}
