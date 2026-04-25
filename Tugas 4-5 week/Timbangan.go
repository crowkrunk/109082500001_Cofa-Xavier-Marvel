package main

import "fmt"

const pi float64 = 3.14

func vol(r, t float64) float64 {
	return ((r * r) * pi) * t
}

func mass(r, t, p float64) float64 {
	return vol(r, t) * p
}

func display(m1, m2 float64) {
	if m1 == m2 {
		fmt.Print("BALANCE")
	} else if m1-m2 < 0 {
		fmt.Printf("%.3f\n", (m1-m2)*-1)
	} else {
		fmt.Printf("%.3f\n", m1-m2)
	}
}

func main() {
	var r, tkiri, tkanan, mjkiri, mjkanan float64
	fmt.Scan(&r, &tkiri, &mjkiri, &tkanan, &mjkanan)

	display(mass(r, tkiri, mjkiri), mass(r, tkanan, mjkanan))
}
