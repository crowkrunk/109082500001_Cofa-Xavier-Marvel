package main

import "fmt"

type rectangle struct {
	L, W  int
	color string
	geometry
}

type geometry struct{ area, perimiter int }

func isiData(r *rectangle) {
	fmt.Scan(&r.L, &r.W, &r.color)
}

func hitung(r *rectangle) {
	r.area = r.L * r.W
	r.perimiter = 2 * (r.L + r.W)
}

func main() {
	var r rectangle

	isiData(&r)
	hitung(&r)

	fmt.Printf("Rectangle: %dx%d, Color: %s\n", r.L, r.W, r.color)
	fmt.Printf("Area: %d, Perimeter: %d\n", r.area, r.perimiter)
}
