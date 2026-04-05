package main

import "fmt"

var input int

func main() {
	fmt.Scan(&input)
	Factory(1)

}

func Factory(n int) {
	if n > input {
		fmt.Println()
	} else {
		if input%n == 0 {
			fmt.Print(n, " ")
		}
		Factory(n + 1)
	}
}
