package main

import "fmt"

type IntArray [256]int

func fillToN(arr *IntArray, n int) {
	for i := 0; i < n; i++ {
		fmt.Scan(&arr[i])
	}
}

func fillTonReverse(arr *IntArray, n int) {
	for i := 0; i < n/2; i++ {
		arr[n-1-i] = arr[i]
	}
}

func Palindrome(arr *IntArray, n int) bool {
	for i := 0; i < n/2; i++ {
		if arr[i] != arr[n-1-i] {
			return false
		}
	}
	return true
}

func main() {
	var arr IntArray
	var n int

	fmt.Scan(&n)

	if n > len(arr) {
		fmt.Println("Error: Maximum capacity is 256!")
		return
	}

	fillToN(&arr, n)

	fillTonReverse(&arr, n)

	fmt.Print("[")
	for i := 0; i < n; i++ {
		if i > 0 {
			fmt.Print(", ")
		}
		fmt.Print(arr[i])
	}
	fmt.Print("]")
	if Palindrome(&arr, n) {
		fmt.Println("The array is a palindrome.")
	} else {
		fmt.Println("The array is not a palindrome")
	}
}
