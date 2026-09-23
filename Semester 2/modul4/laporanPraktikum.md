# <h1 align="center">Laporan Praktikum Modul 4 - ... </h1>
<p align="center">[Cofa Xavier Marvel] - [109082500001]</p>

## Unguided 

### 1. [Soal]
#### soal1.go

```go
package main

import "fmt"

func F(n int) int {
	if n <= 1 {
		return 1
	}
	return n * F(n-1)
}

func P(n, r int) int {
	return F(n) / F(n-r)
}

func C(n, r int) int {
	return F(n) / (F(r) * F(n-r))
}

func main() {
	var a, b, c, d int
	fmt.Scan(&a, &b, &c, &d)

	fmt.Printf("%d %d\n", P(a, c), C(a, c))

	fmt.Printf("%d %d\n", P(b, d), C(b, d))
}

```
### Output Unguided :

##### Output 
![Screenshot Output Unguided 1_1](https://github.com/crowkrunk/109082500001_Cofa-Xavier-Marvel/blob/main/modul4/Output/Output-soal1.png)
[penjelasan]
Using a recursive function this program is able to calculate the factorial, then uses the formulas
P(n, r) = n!/(n−r)!
C(n, r) = n!/r!(n−r)!
with the first and third input for the first line
and the second and fourth input for the second line.
#### soal2.go

```go
package main

import "fmt"

func scoreCount(Done, Score *int) {
	*Done = 0
	*Score = 0
	var t int
	for i := 0; i < 8; i++ {
		fmt.Scan(&t)
		if t <= 300 {
			*Done++
			*Score += t
		}
	}
}

func main() {
	var winner, name string
	var highestDone, lowestTime, curDone, curTime int

	highestDone = -1
	lowestTime = 999999

	for {
		fmt.Scan(&name)
		if name == "Selesai" {
			break
		}
		scoreCount(&curDone, &curTime)
		if (curDone > highestDone) || (curDone == highestDone && curTime < lowestTime) {
			highestDone = curDone
			lowestTime = curTime
			winner = name
		}
	}
	fmt.Printf("%s %d %d\n", winner, highestDone, lowestTime)
}

```
### Output Unguided :

##### Output 
![Screenshot Output Unguided 1_1](https://github.com/crowkrunk/109082500001_Cofa-Xavier-Marvel/blob/main/modul4/Output/Output-soal2.png)
[penjelasan]
This program finds a winner based on the criteria: most problems solved, then fastest time as a tiebreaker.
The input is a name with 8 ints rangeging from 0 - 300.
The output being the winner how many problems Done and the amount of time it took.
### 3. [Soal]
#### soal3.go

```go
package main

import (
	"fmt"
)

func cetakDeret(n int) {
	for {
		fmt.Print(n)
		if n == 1 {
			break
		}
		fmt.Print(" ")
		if n%2 == 0 {
			n = n / 2
		} else {
			n = 3*n + 1
		}
	}
	fmt.Println()
}

func main() {
	var n int
	fmt.Scan(&n)
	cetakDeret(n)
}
```
### Output Unguided :

##### Output 
![Screenshot Output Unguided 1_1](https://github.com/crowkrunk/109082500001_Cofa-Xavier-Marvel/blob/main/modul4/Output/Output-soal3.png)
[penjelasan]
This program prints a line from the number input using the formulas n/2 if the number is even and 3*n+1 if the number is odd, this repeats until 1.