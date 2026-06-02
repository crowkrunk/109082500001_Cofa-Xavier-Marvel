# <h1 align="center">Laporan Praktikum Modul 12 - ... </h1>
<p align="center">[Cofa Xavier Marvel] - [109082500001]</p>

## Unguided 

### 1. [Soal]
#### soal1.go

```go
package main

import "fmt"

func main() {
package main

import "fmt"

func main() {
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

	for candidate := 1; candidate <= 20; candidate++ {
		if count, exists := voteCounts[candidate]; exists {
			fmt.Printf("%d: %d\n", candidate, count)
		}
	}
}

```
### Output Unguided :

##### Output 
![Screenshot Output Unguided 1_1](https://github.com/crowkrunk/109082500001_Cofa-Xavier-Marvel/blob/main/modul12/Output/Output-soal1.png)
[penjelasan]
value Stores the current number being read, totalVotes & validVotes Counters for the election stats, and voteCounts A map that stores how many votes each candidate received .
for value != 0 The loop continues as long as the number is not 0.
Inside the loop
It immediately reads a number from terminal.
It increments totalVotes.
If the number is between 1 and 20, it increments validVotes and adds the vote to the voteCounts map.
Prints the total and valid vote counts.
Loops from candidate 1 to 20 to print only those who received votes.
#### soal2.go

```go
package main

import "fmt"

func main() {
	RTHead := -1
	deputyRTHead := -1
	maxVotes := -1
	secondMaxVotes := -1
	totalVotes := 0
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

```
### Output Unguided :

##### Output 
![Screenshot Output Unguided 1_1](https://github.com/crowkrunk/109082500001_Cofa-Xavier-Marvel/blob/main/modul12/Output/Output-soal2.png)
[penjelasan]

This program reads a stream of numbers until it hits 0. validates numbers. Counts total and valid votes.
Determines the RT Head and Deputy RT Head based on vote counts, with a tie-breaker rule favoring the smaller candidate number.

### 3. [Soal]
#### soal3.go

```go
package main

import "fmt"

const NMAX = 1000000

var data [NMAX]int

func main() {
	var n, k int
	fmt.Scan(&n, &k)
	fillArray(n)
	position(n, k)
}

func fillArray(n int) {
	var value int
	for i := 0; i < n; i++ {
		fmt.Scan(&value)
		data[i] = value
	}
}

func position(n, k int) {
	found := false
	for i := 0; i < n; i++ {
		if data[i] == k {
			fmt.Print(i)
			found = true
		}
	}
	if !found {
		fmt.Print("NOT FOUND")
	}
}

```
### Output Unguided :

##### Output 
![Screenshot Output Unguided 1_1](https://github.com/crowkrunk/109082500001_Cofa-Xavier-Marvel/blob/main/modul12/Output/Output-soal3.png)
[penjelasan]
This program finds if a k is in a array of numbers with length n, printing the index of the number in the array and printing NOT FOUND when not.
