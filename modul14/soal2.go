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

func main() {
	var n int
	fmt.Scan(&n)

	for i := 0; i < n; i++ {
		fillregion(i)
	}

	fmt.Println()

	for i := 0; i < n; i++ {
		selectionSortWITHTHEFEAROFROADS(i, regions[i][0]-1)

		for j := 1; j <= regions[i][0]-1; j++ {
			fmt.Printf("%d ", regions[i][j])
		}

		fmt.Println()
	}
}

func selectionSortWITHTHEFEAROFROADS(regionI int, totalElements int) {
	for i := 1; i < totalElements; i++ {
		minIndex := i

		for j := i + 1; j <= totalElements; j++ {
			current := regions[regionI][j]
			minNum := regions[regionI][minIndex]

			swap := false

			currentOdd := current%2 != 0
			minOdd := minNum%2 != 0

			if currentOdd && !minOdd {
				swap = true
			} else if !currentOdd && minOdd {
				swap = false
			} else {
				if currentOdd {
					if current < minNum {
						swap = true
					}
				} else {
					if current > minNum {
						swap = true
					}
				}
			}

			if swap {
				minIndex = j
			}
		}

		if minIndex != i {
			regions[regionI][i], regions[regionI][minIndex] = regions[regionI][minIndex], regions[regionI][i]
		}
	}
}
