package main

import "fmt"

func main() {
	RTHead := -1
	deputyRTHead := -1
	maxVotes := -1
	secondMaxVotes := -1
	totalVotes := -1
	validVotes := 0
	voteCounts := make(map[int]int)
	for value := -1; value != 0; {
		fmt.Scan(&value)
		totalVotes++
		if value >= 1 && value <= 20 {
			validVotes++
			voteCounts[value]++
		}
	}
	fmt.Printf("Total votes received: %d\n", totalVotes)
	fmt.Printf("Valid votes: %d\n", validVotes)

	for _, count := range voteCounts {
		if count > maxVotes {
			secondMaxVotes, maxVotes = maxVotes, count
		} else if count > secondMaxVotes {
			secondMaxVotes = count
		}
	}
	for candidate := 1; candidate <= 20; candidate++ {
		if count, exists := voteCounts[candidate]; exists {
			if count == maxVotes && RTHead == -1 {
				RTHead = candidate
			} else if count == secondMaxVotes && deputyRTHead == -1 {
				deputyRTHead = candidate
			}
		}
	}

	fmt.Printf("RT Head: %d\nDeputy RT Head: %d", RTHead, deputyRTHead)
}
