package main

import "fmt"

var regions [1000][10000]int

func fillregion(n int) {
	var relatives, houses int
	i := 1
	fmt.Scan(&relatives)
	for relatives >= i {
		fmt.Scan(&houses)

		regions[n][i] = houses
		i++
	}
	regions[n][0] = i
}

func selectionSort(regionIdx int, totalElements int) {

	for i := 1; i < totalElements; i++ {
		minIndex := i

		for j := i + 1; j <= totalElements; j++ {
			if regions[regionIdx][j] < regions[regionIdx][minIndex] {
				minIndex = j
			}
		}

		if minIndex != i {
			regions[regionIdx][i], regions[regionIdx][minIndex] = regions[regionIdx][minIndex], regions[regionIdx][i]
		}
	}
}

func main() {
	var n int
	fmt.Scan(&n)

	for i := 0; i < n; i++ {
		fillregion(i)
	}

	fmt.Println()

	for i := 0; i < n; i++ {
		selectionSort(i, regions[i][0]-1)

		for j := 1; j <= regions[i][0]-1; j++ {
			fmt.Printf("%d ", regions[i][j])
		}

		fmt.Println()
	}
}
