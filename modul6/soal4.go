package main

import (
	"fmt"
)

const NMAX int = 127

type tabel [NMAX]rune

func FillArraywithRUNES(t *tabel, n *int) {
	*n = 0
	for *n <= NMAX {
		var input string
		fmt.Scan(&input)
		for _, char := range input {
			if *n >= NMAX {
				break
			}
			if char == '.' {
				return
			}
			if char == ' ' {
				continue
			}
			t[*n] = char
			*n++
		}
	}
}

func printArrayOfRunesAsStrings(t tabel, n int) {
	for i := 0; i < n; i++ {
		fmt.Print(string(t[i]))
	}
	fmt.Println()
}

func tabelFlip(t *tabel, n int) {
	front := 0
	back := n - 1
	for front < back {
		t[front], t[back] = t[back], t[front]
		front++
		back--
	}
}

func checkpali(t tabel, n int) bool {
	var tf tabel = t
	tabelFlip(&tf, n)
	front := 0
	back := n - 1
	for front < back {
		if t[front] == t[back] {
			front++
			back--
		} else {

			return false
		}

	}
	return true
}

func main() {
	var tab tabel
	var m int
	fmt.Printf("Teks	:")
	FillArraywithRUNES(&tab, &m)

	fmt.Printf("Reverse teks	:")
	tabelFlip(&tab, m)
	printArrayOfRunesAsStrings(tab, m)

	fmt.Printf("Palindrom	? %t", checkpali(tab, m))

}
