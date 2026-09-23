package main

import "fmt"

func procB(b *int, c *int) {
	*b = *b + *c
	*c = *b + *c + *a
}

func main() {
	a := 10
	procB(&a, &a)
	fmt.Println(a)
}
